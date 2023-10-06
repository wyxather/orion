#pragma once

#ifdef _WIN64

#include <unordered_set>
#include <filesystem>

#include "source/engine/unreal/types.h"
#include "source/engine/unreal/object_array.h"

namespace fs = std::filesystem;

enum class EIncludeFileType
{
	Struct,
	Class,
	Params,

	None
};

struct PackageDependencyManager
{
	friend class Package;

	//int32 = PackageIdx
	//pair<bool, set<int32>> = pair<bIsIncluded, set<DependencyIndices>>
	std::unordered_map<int32, std::pair<bool, std::unordered_set<int32>>> AllDependencies;

	PackageDependencyManager() = default;

	PackageDependencyManager(int32 PackageIdx)
	{
		if (AllDependencies.find(PackageIdx) == AllDependencies.end())
			AllDependencies[PackageIdx] = { { false }, { } };
	}

	void RemoveDependant(const int32 PackageIndex)
	{
		AllDependencies.erase(PackageIndex);
	}

	inline void AddPackage(const int32 PackageIdx)
	{
		if (AllDependencies.find(PackageIdx) == AllDependencies.end())
		{
			AllDependencies[PackageIdx] = { { false }, { } };
		}
	}

	inline void AddDependency(const int32 DepandantIdx, const int32 DependencyIndex)
	{
		AllDependencies[DepandantIdx].second.insert(DependencyIndex);
	}

	/* Only use this when sorting struct dependencies */
	void GenerateStructSorted(class Package& Pack, const int32 StructIdx);

	/* Only use this when sorting class dependencies */
	void GenerateClassSorted(class Package& Pack, const int32 ClassIdx);

	/* Only use this when sorting package dependencies */
	void GetIncludesForPackage(
		const int32 Index, 
		EIncludeFileType FileType, 
		std::string& OutRef, 
		bool bCommentOut = false, 
		PackageDependencyManager* AdditionalDependencies = nullptr,
		EIncludeFileType AdditionalDepFileType = EIncludeFileType::None
	);

	static void GetPropertyDependency(UEProperty Prop, std::unordered_set<int32>& Store);
	static void GetFunctionDependency(UEFunction Func, std::unordered_set<int32>& Store);
};

class Package
{
private:
	friend PackageDependencyManager;

public:
	static std::ofstream DebugAssertionStream;
	static PackageDependencyManager PackageSorterClasses; // "PackageName_classes.hpp"
	static PackageDependencyManager PackageSorterStructs; // "PackageName_structs.hpp"
	static PackageDependencyManager PackageSorterParams; // "PackageName_parameters.hpp"

private:
	inline static UEObject EnginePackage = nullptr;

private:
	PackageDependencyManager StructSorter;
	PackageDependencyManager ClassSorter;

private:
	UEObject PackageObject;

public:
	std::vector<Types::Enum> AllEnums;
	std::vector<Types::Struct> AllStructs;
	std::vector<Types::Class> AllClasses;
	std::vector<Types::Function> AllFunctions;

	Package(UEObject _Object)
		: PackageObject(_Object)
	{
		if constexpr (Settings::Debug::bGenerateAssertionFile && Settings::Debug::bLimitAssertionsToEngienPackage)
		{
			if (!EnginePackage)
				EnginePackage = ObjectArray::FindObjectFast("Engine", EClassCastFlags::Package);
		}
	}

	static void AddPackage(int32 Idx);
	static void InitAssertionStream(const fs::path& GenPath);
	static void CloseAssertionStream();
	static int32 GeneratePredefinedMembers(const std::string& ClassName, Types::Struct& Struct, int32 StructSize, int32 SuperSize);

	static Types::Member GenerateBytePadding(int32 Offset, int32 PadSize, std::string&& Reason);
	static Types::Member GenerateBitPadding(int32 Offset, int32 PadSize, std::string&& Reason);

	void GatherDependencies(const std::vector<int32_t>& PackageMembers);

	void Process(const std::vector<int32_t>& PackageMembers);

	static void StaticGenerateMembers(const std::vector<UEProperty>& MemberVector, UEStruct& Super, Types::Struct& Struct, int32 StructSize, int32 SuperSize);
	static Types::Function StaticGenerateFunction(UEFunction& Function, UEStruct& Super);
	static Types::Struct StaticGenerateStruct(UEStruct Struct, bool bIsFunction = false);
	static Types::Class StaticGenerateClass(UEClass Class, std::vector<Types::Function>& PackageFunctions);
	static Types::Enum StaticGenerateEnum(UEEnum Enum);

	void GenerateFunction(UEFunction& Function, UEStruct& Super);
	void GenerateStruct(UEStruct Struct, bool bIsFunction = false);
	void GenerateClass(UEClass Class);
	void GenerateEnum(UEEnum Enum);

	inline bool IsEmpty()
	{
		return AllEnums.empty() && AllClasses.empty() && AllStructs.empty() && AllFunctions.empty();
	}

	inline UEObject DebugGetObject()
	{
		return PackageObject;
	}
};

#endif