#pragma once

#ifdef _WIN64

#include <iostream>
#include <format>
#include <fstream>
#include <sstream>
#include "source/engine/unreal/enums.h"

namespace Types
{
	class Includes
	{
	private:
		std::string Declaration;
		std::vector<std::pair<std::string, bool>> HeaderFiles;

	public:
		Includes(std::vector<std::pair<std::string, bool>> HeaderFiles);

		std::string GetGeneratedBody();
	};

	class Enum
	{
	private:
		std::string Declaration;
		std::vector<std::pair<std::string, int64>> EnumMembers;

	public:
		Enum() = default;
		Enum(std::string Name);
		Enum(std::string Name, std::string Type);

		void AddComment(std::string&& Comment);
		void AddMember(std::string&& Name, int64 Value);
		void FixWindowsConstant(std::string&& ConstantName);

		std::string GetGeneratedBody();
	};

	class Member
	{
	private:
		std::string Type;
		std::string Name;
		std::string Comment = "";

	public:
		Member(std::string Type, std::string Name, std::string Comment = "");

		void AddComment(std::string Comment);

		std::string GetGeneratedBody();
	};

	class Parameter
	{
	private:
		bool bIsOutPtr;
		std::string Type;
		std::string Name;

	public:
		Parameter(std::string Type, std::string Name, bool bIsOutPtr = false);

		std::string GetName();
		std::string GetGeneratedBody();

		bool IsParamOutPtr();
	};


	class Struct
	{
	protected:
		std::string CppName;
		std::string Declaration;
		std::string InnerBody;
		std::string Comments;
		std::vector<Member> StructMembers;
		int32 CustomAlignSize;

	public:
		Struct() = default;
		Struct(std::string Name, bool bIsClass = false, std::string Super = "");

		void AddComment(std::string Comment);
		void AddMember(Member& NewMember);
		void AddMember(Member&& NewMember);
		void AddMembers(std::vector<Member>& NewMembers);

		void SetCustomAlignment(int32 AlignOverride)
		{
			CustomAlignSize = AlignOverride;
		}

		std::string GetGeneratedBody();

		inline bool IsEmpty()
		{
			return CppName.empty() && Declaration.empty();
		}
	};


	class Function
	{
	private:
		Struct ParamStruct;

		std::string Body;
		std::string DeclarationH;
		std::string DeclarationCPP;
		std::vector<Parameter> Parameters;
		std::string Comments;

	public:
		Function(std::string Type, std::string Name, std::string SuperName, std::vector<Parameter> Parameters = {}, bool bIsStatic = false, bool bAddNewLine = false);

		std::vector<Parameter>& GetParameters();
		std::string GetParametersAsString();

		void AddBody(std::string Body);
		void SetParamStruct(Struct&& Params);

		std::string GetDeclaration();

		std::string GetGeneratedBody();
		Struct& GetParamStruct();

		void AddComment(std::string& Comment);
		void AddComment(std::string&& Comment);
	};

	class Class : public Struct
	{
	private:
		std::vector<Function> ClassFunctions;
		std::string RawName; //For StaticClass()

	public:
		using Struct::Struct;

		Class(std::string CppName, std::string Name, std::string Super = "")
			: Struct(CppName, true, Super), RawName(Name)
		{
		}

	public:
		void AddFunction(Function& NewFunction);
		void AddFunction(Function&& NewFunction);

	public:
		std::string GetGeneratedBody();
	};
}

#endif