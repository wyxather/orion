#include <iostream>
#include <fstream>
#include <format>
#include <filesystem>
#include "source/engine/unreal/object_array.h"
#include "source/engine/unreal/offsets.h"
#include "source/engine/unreal/utils.h"

namespace fs = std::filesystem;

/* Scuffed stuff up here */
struct FChunkedFixedUObjectArray
{
	void** ObjectsAbove;
	uint8_t Pad_0[0x08];
	int32_t MaxElements;
	int32_t NumElements;
	int32_t MaxChunks;
	int32_t NumChunks;
	void** ObjectsBelow;

	inline int32 IsValid(int32& OutObjectsPtrOffset)
	{
		void** ObjectsAboveButDecrypted = (void**)ObjectArray::DecryptPtr(ObjectsAbove);
		void** ObjectsBelowButDecrypted = (void**)ObjectArray::DecryptPtr(ObjectsBelow);

		if (NumChunks > 0x14 || NumChunks < 0x1)
			return false;

		if (MaxChunks > 0x22F || MaxChunks < 0x9)
			return false;

		if (NumElements > MaxElements || NumChunks > MaxChunks)
			return false;

		if (((NumElements / 0x10000) + 1) != NumChunks || (MaxElements / 0x10000) != MaxChunks)
			return false;

		const bool bAreObjectsAboveValid = (ObjectsAboveButDecrypted && !IsBadReadPtr(ObjectsAboveButDecrypted));
		const bool bAreObjectsBewlowValid = (ObjectsBelowButDecrypted && !IsBadReadPtr(ObjectsBelowButDecrypted));

		if (!bAreObjectsAboveValid && !bAreObjectsBewlowValid)
			return false;

		for (int i = 0; i < NumChunks; i++)
		{
#pragma warning(disable:6011)
			const bool bIsCurrentIndexValidAbove = bAreObjectsAboveValid ? !IsBadReadPtr(ObjectsAboveButDecrypted[i]) : false;
			const bool bIsCurrentIndexValidBelow = bAreObjectsBewlowValid ? !IsBadReadPtr(ObjectsBelowButDecrypted[i]) : false;
#pragma pop

			if (!bIsCurrentIndexValidAbove && !bIsCurrentIndexValidBelow)
				return false;
		}

		OutObjectsPtrOffset = 0x00;

		if (!bAreObjectsAboveValid && bAreObjectsBewlowValid)
			OutObjectsPtrOffset = 0x20;

		return true;
	}
};

struct FFixedUObjectArray
{
	struct FUObjectItem
	{
		void* Object;
		uint8_t Pad[0x10];
	};

	FUObjectItem* Objects;
	int32_t Max;
	int32_t Num;

	inline bool IsValid()
	{
		FUObjectItem* ObjectsButDecrypted = (FUObjectItem*)ObjectArray::DecryptPtr(Objects);

		if (Num > Max)
			return false;

		if (Max > 0x400000)
			return false;

		if (Num < 0x1000)
			return false;

		if (IsBadReadPtr(ObjectsButDecrypted))
			return false;

		if (IsBadReadPtr(ObjectsButDecrypted[5].Object))
			return false;

		if (*(int32_t*)(uintptr_t(ObjectsButDecrypted[5].Object) + 0xC) != 5)
			return false;

		return true;
	}
};



uint8* ObjectArray::GObjects = nullptr;
uint32 ObjectArray::NumElementsPerChunk = 0x10000;
uint32 ObjectArray::SizeOfFUObjectItem = 0x18;
uint32 ObjectArray::FUObjectItemInitialOffset = 0x0;
std::string ObjectArray::DecryptionLambdaStr = "";

void ObjectArray::InitializeFUObjectItem(uint8_t* FirstItemPtr)
{
	for (int i = 0x0; i < 0x10; i += 4)
	{
		if (!IsBadReadPtr(*reinterpret_cast<uint8_t**>(FirstItemPtr + i)))
		{
			FUObjectItemInitialOffset = i;
			break;
		}
	}

	for (int i = FUObjectItemInitialOffset + 0x8; i <= 0x38; i += 4)
	{
		void* SecondObject = *reinterpret_cast<uint8**>(FirstItemPtr + i);
		void* ThirdObject  = *reinterpret_cast<uint8**>(FirstItemPtr + (i * 2) - FUObjectItemInitialOffset);
		if (!IsBadReadPtr(SecondObject) && !IsBadReadPtr(*(void**)SecondObject) && !IsBadReadPtr(ThirdObject) && !IsBadReadPtr(*(void**)ThirdObject))
		{
			SizeOfFUObjectItem = i - FUObjectItemInitialOffset;
			break;
		}
	}

	Off::InSDK::FUObjectItemInitialOffset = FUObjectItemInitialOffset;
	Off::InSDK::FUObjectItemSize = SizeOfFUObjectItem;
}

void ObjectArray::InitDecryption(uint8_t* (*DecryptionFunction)(void* ObjPtr), const char* DecryptionLambdaAsStr)
{
	DecryptPtr = DecryptionFunction;
	DecryptionLambdaStr = DecryptionLambdaAsStr;
}

void ObjectArray::InitializeChunkSize(uint8_t* ChunksPtr)
{
	int IndexOffset = 0x0;
	uint8* ObjAtIdx374 = (uint8*)ByIndex(ChunksPtr, 0x374, SizeOfFUObjectItem, FUObjectItemInitialOffset, 0x10000);
	uint8* ObjAtIdx106 = (uint8*)ByIndex(ChunksPtr, 0x106, SizeOfFUObjectItem, FUObjectItemInitialOffset, 0x10000);

	for (int i = 0x8; i < 0x20; i++)
	{
		if (*reinterpret_cast<int32*>(ObjAtIdx374 + i) == 0x374 && *reinterpret_cast<int32*>(ObjAtIdx106 + i) == 0x106)
		{
			IndexOffset = i;
			break;
		}
	}

	int IndexToCheck = 0x10400;
	while (ObjectArray::Num() > IndexToCheck)
	{
		if (void* Obj = ByIndex(ChunksPtr, IndexToCheck, SizeOfFUObjectItem, FUObjectItemInitialOffset, 0x10000))
		{
			const bool bIsTrue = *reinterpret_cast<int32*>((uint8*)Obj + IndexOffset) != IndexToCheck;
			NumElementsPerChunk = bIsTrue ? 0x10400 : 0x10000;
			break;
		}
		IndexToCheck += 0x10400;
	}

	Off::InSDK::ChunkSize = NumElementsPerChunk;
}

/* We don't speak about this function... */
void ObjectArray::Init(bool bScanAllMemory)
{
	if (!bScanAllMemory)
		std::cout << "\nDumper-7 by me, you & him\n\n\n";

	uintptr_t ImageBase = GetImageBase();
	PIMAGE_DOS_HEADER DosHeader = (PIMAGE_DOS_HEADER)(ImageBase);
	PIMAGE_NT_HEADERS NtHeader = (PIMAGE_NT_HEADERS)(ImageBase + DosHeader->e_lfanew);
	PIMAGE_SECTION_HEADER Sections = IMAGE_FIRST_SECTION(NtHeader);

	uint8_t* SearchBase = (uint8_t*)ImageBase;
 	DWORD SearchRange = NtHeader->OptionalHeader.SizeOfImage;

	if (!bScanAllMemory)
	{
		for (int i = 0; i < NtHeader->FileHeader.NumberOfSections; i++)
		{
			IMAGE_SECTION_HEADER& CurrentSection = Sections[i];

			if (std::string((char*)CurrentSection.Name) == ".data")
			{
				SearchBase = (uint8_t*)(CurrentSection.VirtualAddress + ImageBase);
				SearchRange = CurrentSection.Misc.VirtualSize;
			}
		}
	}

	if (!bScanAllMemory)
		std::cout << "Searching for GObjects...\n\n";


	for (int i = 0; i < SearchRange; i += 0x4)
	{

		auto FixedArray = reinterpret_cast<FFixedUObjectArray*>(SearchBase + i);
		auto ChunkedArray = reinterpret_cast<FChunkedFixedUObjectArray*>(SearchBase + i);

		if (FixedArray->IsValid())
		{
			GObjects = reinterpret_cast<uint8_t*>(SearchBase + i);
			Off::FUObjectArray::Num = 0xC;
			NumElementsPerChunk = -1;

			Off::InSDK::GObjects = uintptr_t(SearchBase + i) - ImageBase;

			std::cout << "Found FFixedUObjectArray GObjects at offset 0x" << std::hex << Off::InSDK::GObjects << std::dec << "\n\n";

			ByIndex = [](void* ObjectsArray, int32 Index, uint32 FUObjectItemSize, uint32 FUObjectItemOffset, uint32 PerChunk) -> void*
			{
				if (Index < 0 || Index > Num())
					return nullptr;

				uint8_t* ChunkPtr = DecryptPtr(*reinterpret_cast<uint8_t**>(ObjectsArray));

				return *reinterpret_cast<void**>(ChunkPtr + FUObjectItemOffset + (Index * FUObjectItemSize));
			};

			uint8_t* ChunksPtr = DecryptPtr(*reinterpret_cast<uint8_t**>(GObjects + Off::FUObjectArray::Ptr));

			ObjectArray::InitializeFUObjectItem(*reinterpret_cast<uint8_t**>(ChunksPtr));

			return;
		}
		else if (ChunkedArray->IsValid(Off::FUObjectArray::Ptr))
		{
			GObjects = reinterpret_cast<uint8_t*>(SearchBase + i);
			NumElementsPerChunk = 0x10000;
			SizeOfFUObjectItem = 0x18;
			Off::FUObjectArray::Num = 0x14;
			FUObjectItemInitialOffset = 0x0;

			Off::InSDK::GObjects = uintptr_t(SearchBase + i) - ImageBase;

			std::cout << "Found FChunkedFixedUObjectArray GObjects at offset 0x" << std::hex << Off::InSDK::GObjects << std::dec << "\n\n";

			ByIndex = [](void* ObjectsArray, int32 Index, uint32 FUObjectItemSize, uint32 FUObjectItemOffset, uint32 PerChunk) -> void*
			{
				if (Index < 0 || Index > Num())
					return nullptr;

				const int32 ChunkIndex = Index / PerChunk;
				const int32 InChunkIdx = Index % PerChunk;

				uint8_t* ChunkPtr = DecryptPtr(*reinterpret_cast<uint8_t**>(ObjectsArray));

				uint8_t* Chunk = reinterpret_cast<uint8_t**>(ChunkPtr)[ChunkIndex];
				uint8_t* ItemPtr = reinterpret_cast<uint8_t*>(Chunk) + (InChunkIdx * FUObjectItemSize);

				return *reinterpret_cast<void**>(ItemPtr + FUObjectItemOffset);
			};
			
			uint8_t* ChunksPtr = DecryptPtr(*reinterpret_cast<uint8_t**>(GObjects + Off::FUObjectArray::Ptr));

			ObjectArray::InitializeFUObjectItem(*reinterpret_cast<uint8_t**>(ChunksPtr));

			ObjectArray::InitializeChunkSize(GObjects + Off::FUObjectArray::Ptr);

			return;
		}
	}

	if (!bScanAllMemory)
	{
		ObjectArray::Init(true);
		return;
	}

	if (!bScanAllMemory)
		std::cout << "\nGObjects couldn't be found!\n\n\n";
}

void ObjectArray::Init(int32 GObjectsOffset, int32 ElementsPerChunk, bool bIsChunked)
{
	GObjects = reinterpret_cast<uint8_t*>(GetImageBase() + GObjectsOffset);

	Off::InSDK::GObjects = GObjectsOffset;

	std::cout << "GObjects: 0x" << (void*)GObjects << "\n" << std::endl;

	if (!bIsChunked)
	{
		Off::FUObjectArray::Num = 0xC;

		ByIndex = [](void* ObjectsArray, int32 Index, uint32 FUObjectItemSize, uint32 FUObjectItemOffset, uint32 PerChunk) -> void*
		{
			if (Index < 0 || Index > Num())
				return nullptr;

			uint8_t* ItemPtr = *reinterpret_cast<uint8_t**>(ObjectsArray) + (Index * FUObjectItemSize);

			return *reinterpret_cast<void**>(ItemPtr + FUObjectItemOffset);
		};

		uint8_t* ChunksPtr = DecryptPtr(*reinterpret_cast<uint8_t**>(GObjects));

		ObjectArray::InitializeFUObjectItem(*reinterpret_cast<uint8_t**>(ChunksPtr));
	}
	else
	{
		Off::FUObjectArray::Num = 0x14;

		ByIndex = [](void* ObjectsArray, int32 Index, uint32 FUObjectItemSize, uint32 FUObjectItemOffset, uint32 PerChunk) -> void*
		{
			if (Index < 0 || Index > Num())
				return nullptr;

			const int32 ChunkIndex = Index / PerChunk;
			const int32 InChunkIdx = Index % PerChunk;

			uint8_t* Chunk = (*reinterpret_cast<uint8_t***>(ObjectsArray))[ChunkIndex];
			uint8_t* ItemPtr = reinterpret_cast<uint8_t*>(Chunk) + (InChunkIdx * FUObjectItemSize);

			return *reinterpret_cast<void**>(ItemPtr + FUObjectItemOffset);
		};

		uint8_t* ChunksPtr = DecryptPtr(*reinterpret_cast<uint8_t**>(GObjects));

		ObjectArray::InitializeFUObjectItem(*reinterpret_cast<uint8_t**>(ChunksPtr));
	}

	NumElementsPerChunk = ElementsPerChunk;
	Off::InSDK::ChunkSize = ElementsPerChunk;
}

void ObjectArray::DumpObjects()
{
	fs::path Path(Settings::SDKGenerationPath);

	if (!Settings::GameVersion.empty() && !Settings::GameName.empty())
		Path /= (Settings::GameVersion + '-' + Settings::GameName);

	std::ofstream DumpStream(Path / "GObjects-Dump.txt");

	DumpStream << "Object dump by Dumper-7\n\n";
	DumpStream << (!Settings::GameVersion.empty() && !Settings::GameName.empty() ? (Settings::GameVersion + '-' + Settings::GameName) + "\n\n" : "");
	DumpStream << "Count: " << Num() << "\n\n\n";

	for (auto Object : ObjectArray())
	{
		DumpStream << std::format("[{:08X}] {{{}}} {}\n", Object.GetIndex(), Object.GetAddress(), Object.GetFullName());
	}

	DumpStream.close();
}


void ObjectArray::GetAllPackages(std::unordered_map<int32_t, std::vector<int32_t>>& OutPackagesWithMembers/*, std::unordered_map<int32_t, bool>& PackagesToInclude*/)
{
	UEStruct::StructSizes.reserve(0x600);

	for (UEObject Object : ObjectArray())
	{
		if (!Object || Object.HasAnyFlags(EObjectFlags::ClassDefaultObject))
			continue;

		if (Object.IsA(EClassCastFlags::Struct))
		{
			OutPackagesWithMembers[Object.GetOutermost().GetIndex()].push_back(Object.GetIndex());

			UEStruct ObjAsStruct = Object.Cast<UEStruct>();
			UEStruct Super = ObjAsStruct.GetSuper();

			int32 LowestOffset = 0xFFFFFF;
	
			for (UEProperty Property : ObjAsStruct.GetProperties())
			{
				if (!Property.IsTypeSupported())
					UEProperty::UnknownProperties.insert({ Property.GetCppType(), Property.GetSize() });

				if (Property.Cast<UEProperty>().GetOffset() < LowestOffset)
				{
					LowestOffset = Property.Cast<UEProperty>().GetOffset();
				}

				if (Property.IsA(EClassCastFlags::EnumProperty))
				{
					UEEnum Enum = Property.Cast<UEEnumProperty>().GetEnum();
				
					if (Property.Cast<UEEnumProperty>().GetSize() != 0x1 && Enum)
						UEEnum::BigEnums[Enum.GetIndex()] = Property.Cast<UEEnumProperty>().GetUnderlayingProperty().GetCppType();
				}
			}

			if (!Super || Object.IsA(EClassCastFlags::Function))
				continue;

			if (LowestOffset != 0xFFFFFF)
			{
				for (UEStruct S = Super; S; S = S.GetSuper())
				{
					auto It = UEStruct::StructSizes.find(S.GetIndex());

					if (It != UEStruct::StructSizes.end())
					{
						if (It->second > LowestOffset)
							It->second = LowestOffset;
					}
					else
					{
						UEStruct::StructSizes[S.GetIndex()] = (LowestOffset < S.GetStructSize() ? LowestOffset : S.GetStructSize());
					}

					if (S.HasMembers())
						break;
				}
			}
		}
		else if (Object.IsA(EClassCastFlags::Enum))
		{
			OutPackagesWithMembers[Object.GetOutermost().GetIndex()].push_back(Object.GetIndex());
		}
	}
}

int32 ObjectArray::Num()
{
	return *reinterpret_cast<int32*>(GObjects + Off::FUObjectArray::Num);
}

template<typename UEType>
static UEType ObjectArray::GetByIndex(int32 Index)
{
	return UEType(ByIndex(GObjects + Off::FUObjectArray::Ptr, Index, SizeOfFUObjectItem, FUObjectItemInitialOffset, NumElementsPerChunk));
}

template<typename UEType>
UEType ObjectArray::FindObject(std::string FullName, EClassCastFlags RequiredType)
{
	for (UEObject Object : ObjectArray())
	{
		if (Object.IsA(RequiredType) && Object.GetFullName() == FullName)
		{
			return Object.Cast<UEType>();
		}
	}

	return UEType();
}

template<typename UEType>
UEType ObjectArray::FindObjectFast(std::string Name, EClassCastFlags RequiredType)
{
	auto ObjArray = ObjectArray();

	for (UEObject Object : ObjArray)
	{
		if (Object.IsA(RequiredType) && Object.GetName() == Name)
		{
			return Object.Cast<UEType>();
		}
	}

	return UEType();
}

template<typename UEType>
static UEType ObjectArray::FindObjectFastInOuter(std::string Name, std::string Outer)
{
	auto ObjArray = ObjectArray();

	for (UEObject Object : ObjArray)
	{
		if (Object.GetName() == Name && Object.GetOuter().GetName() == Outer)
		{
			return Object.Cast<UEType>();
		}
	}

	return UEType();
}

UEClass ObjectArray::FindClass(std::string FullName)
{
	return FindObject<UEClass>(FullName, EClassCastFlags::Class);
}

UEClass ObjectArray::FindClassFast(std::string Name)
{
	return FindObjectFast<UEClass>(Name, EClassCastFlags::Class);
}

ObjectArray::ObjectsIterator ObjectArray::begin()
{
	return ObjectsIterator(*this);
}
ObjectArray::ObjectsIterator ObjectArray::end()
{
	return ObjectsIterator(*this, Num());
}


ObjectArray::ObjectsIterator::ObjectsIterator(ObjectArray& Array, int32 StartIndex)
	: IteratedArray(Array), CurrentIndex(StartIndex), CurrentObject(ObjectArray::GetByIndex(StartIndex))
{
}

UEObject ObjectArray::ObjectsIterator::operator*()
{
	return CurrentObject;
}

ObjectArray::ObjectsIterator& ObjectArray::ObjectsIterator::operator++()
{
	CurrentObject = ObjectArray::GetByIndex(++CurrentIndex);

	while (!CurrentObject && CurrentIndex < ObjectArray::Num() - 1)
	{
		CurrentObject = ObjectArray::GetByIndex(++CurrentIndex);
	}

	return *this;
}

bool ObjectArray::ObjectsIterator::operator!=(const ObjectsIterator& Other)
{
	return CurrentIndex != Other.CurrentIndex;
}

int32 ObjectArray::ObjectsIterator::GetIndex() const
{
	return CurrentIndex;
}

/*
* The compiler won't generate functions for a specific template type unless it's used in the .cpp file corresponding to the
* header it was declatred in.
*
* See https://stackoverflow.com/questions/456713/why-do-i-get-unresolved-external-symbol-errors-when-using-templates
*/
void TemplateTypeCreationForObjectArray(void)
{
	ObjectArray::FindObject<UEObject>("");
	ObjectArray::FindObject<UEField>("");
	ObjectArray::FindObject<UEEnum>("");
	ObjectArray::FindObject<UEStruct>("");
	ObjectArray::FindObject<UEClass>("");
	ObjectArray::FindObject<UEFunction>("");
	ObjectArray::FindObject<UEProperty>("");
	ObjectArray::FindObject<UEByteProperty>("");
	ObjectArray::FindObject<UEBoolProperty>("");
	ObjectArray::FindObject<UEObjectProperty>("");
	ObjectArray::FindObject<UEClassProperty>("");
	ObjectArray::FindObject<UEStructProperty>("");
	ObjectArray::FindObject<UEArrayProperty>("");
	ObjectArray::FindObject<UEMapProperty>("");
	ObjectArray::FindObject<UESetProperty>("");
	ObjectArray::FindObject<UEEnumProperty>("");

	ObjectArray::FindObjectFast<UEObject>("");
	ObjectArray::FindObjectFast<UEField>("");
	ObjectArray::FindObjectFast<UEEnum>("");
	ObjectArray::FindObjectFast<UEStruct>("");
	ObjectArray::FindObjectFast<UEClass>("");
	ObjectArray::FindObjectFast<UEFunction>("");
	ObjectArray::FindObjectFast<UEProperty>("");
	ObjectArray::FindObjectFast<UEByteProperty>("");
	ObjectArray::FindObjectFast<UEBoolProperty>("");
	ObjectArray::FindObjectFast<UEObjectProperty>("");
	ObjectArray::FindObjectFast<UEClassProperty>("");
	ObjectArray::FindObjectFast<UEStructProperty>("");
	ObjectArray::FindObjectFast<UEArrayProperty>("");
	ObjectArray::FindObjectFast<UEMapProperty>("");
	ObjectArray::FindObjectFast<UESetProperty>("");
	ObjectArray::FindObjectFast<UEEnumProperty>("");

	ObjectArray::FindObjectFastInOuter<UEObject>("", "");
	ObjectArray::FindObjectFastInOuter<UEField>("", "");
	ObjectArray::FindObjectFastInOuter<UEEnum>("", "");
	ObjectArray::FindObjectFastInOuter<UEStruct>("", "");
	ObjectArray::FindObjectFastInOuter<UEClass>("", "");
	ObjectArray::FindObjectFastInOuter<UEFunction>("", "");
	ObjectArray::FindObjectFastInOuter<UEProperty>("", "");
	ObjectArray::FindObjectFastInOuter<UEByteProperty>("", "");
	ObjectArray::FindObjectFastInOuter<UEBoolProperty>("", "");
	ObjectArray::FindObjectFastInOuter<UEObjectProperty>("", "");
	ObjectArray::FindObjectFastInOuter<UEClassProperty>("", "");
	ObjectArray::FindObjectFastInOuter<UEStructProperty>("", "");
	ObjectArray::FindObjectFastInOuter<UEArrayProperty>("", "");
	ObjectArray::FindObjectFastInOuter<UEMapProperty>("", "");
	ObjectArray::FindObjectFastInOuter<UESetProperty>("", "");
	ObjectArray::FindObjectFastInOuter<UEEnumProperty>("", "");

	ObjectArray::GetByIndex<UEObject>(-1);
	ObjectArray::GetByIndex<UEField>(-1);
	ObjectArray::GetByIndex<UEEnum>(-1);
	ObjectArray::GetByIndex<UEStruct>(-1);
	ObjectArray::GetByIndex<UEClass>(-1);
	ObjectArray::GetByIndex<UEFunction>(-1);
	ObjectArray::GetByIndex<UEProperty>(-1);
	ObjectArray::GetByIndex<UEByteProperty>(-1);
	ObjectArray::GetByIndex<UEBoolProperty>(-1);
	ObjectArray::GetByIndex<UEObjectProperty>(-1);
	ObjectArray::GetByIndex<UEClassProperty>(-1);
	ObjectArray::GetByIndex<UEStructProperty>(-1);
	ObjectArray::GetByIndex<UEArrayProperty>(-1);
	ObjectArray::GetByIndex<UEMapProperty>(-1);
	ObjectArray::GetByIndex<UESetProperty>(-1);
	ObjectArray::GetByIndex<UEEnumProperty>(-1);
}
