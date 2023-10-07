#ifdef _WIN64

#include "source/engine/unreal/types.h"
#include "source/engine/unreal/generator.h"

Types::Struct::Struct(std::string Name, bool bIsClass, std::string Super)
{
	StructMembers.reserve(50);

	CppName = Name;
	CustomAlignSize = 0;

	Declaration = (Super.empty() ? std::format("{} {}\n", (bIsClass ? "class" : "struct"), Name) : std::format("{} {} : public {}\n", (bIsClass ? "class" : "struct"), Name, Super));

	InnerBody = "{\npublic:\n";
}

void Types::Struct::AddComment(std::string Comment)
{
	Comments += "// " + Comment + "\n";
}

void Types::Struct::AddMember(Member& NewMember)
{
    if (const auto it = std::find_if(
            StructMembers.cbegin(),
            StructMembers.cend(),
            [&](const auto& Member) { return Member.Name == NewMember.Name; }
        );
        it != StructMembers.cend()) {
        NewMember.Name +=
            std::to_string(StructMembersNameConflict[it->Name] += 1);
    }
	StructMembers.push_back(NewMember);
}

void Types::Struct::AddMember(Member&& NewMember)
{
    if (const auto it = std::find_if(
            StructMembers.cbegin(),
            StructMembers.cend(),
            [&](const auto& Member) { return Member.Name == NewMember.Name; }
        );
        it != StructMembers.cend()) {
        NewMember.Name +=
            std::to_string(StructMembersNameConflict[it->Name] += 1);
    }
	StructMembers.emplace_back(std::move(NewMember));
}

void Types::Struct::AddMembers(std::vector<Member>& NewMembers)
{
	for (Member NewMember : NewMembers)
	{
        if (const auto it = std::find_if(
                StructMembers.cbegin(),
                StructMembers.cend(),
                [&](const auto& Member) {
                    return Member.Name == NewMember.Name;
                }
            );
            it != StructMembers.cend()) {
            NewMember.Name +=
                std::to_string(StructMembersNameConflict[it->Name] += 1);
        }
		StructMembers.push_back(NewMember);
	}
}

std::string Types::Struct::GetGeneratedBody()
{
	if (CppName.empty())
		return "";

	for (Member StructMember : StructMembers)
	{
		InnerBody += StructMember.GetGeneratedBody();
	}

	if (Generator::PredefinedFunctions.find(CppName) != Generator::PredefinedFunctions.end())
	{
		for (auto& PredefFunc : Generator::PredefinedFunctions[CppName].second)
		{
			InnerBody += "\n" + PredefFunc.DeclarationH;
	
			if (PredefFunc.DeclarationCPP == "")
				InnerBody += PredefFunc.Body;
	
			InnerBody += "\n";
		}
	}

	std::string PackingStart = "";
	std::string PackingEnd = "";

	if (CustomAlignSize > 0)
	{
		PackingStart = std::format(R"(
#ifdef _MSC_VER
	#pragma pack(push, 0x{:X})
#endif
)", CustomAlignSize);

		PackingEnd = R"(
#ifdef _MSC_VER
	#pragma pack(pop)
#endif
)";
	}

	return PackingStart + Comments + Declaration + InnerBody + "};" + PackingEnd + "\n\n";
}

void Types::Class::AddFunction(Function& NewFunction)
{
	ClassFunctions.push_back(NewFunction);
}

void Types::Class::AddFunction(Function&& NewFunction)
{
	ClassFunctions.emplace_back(std::move(NewFunction));
}

std::string Types::Class::GetGeneratedBody()
{
	for (Member ClassMember : StructMembers)
	{
		InnerBody += ClassMember.GetGeneratedBody();
	}

	InnerBody += "\n";

	if (Generator::PredefinedFunctions.find(CppName) != Generator::PredefinedFunctions.end())
	{
		for (auto& PredefFunc : Generator::PredefinedFunctions[CppName].second)
		{
			InnerBody += "\n" + PredefFunc.DeclarationH;

			if (PredefFunc.DeclarationCPP == "")
				InnerBody += PredefFunc.Body;
			
			InnerBody += "\n";
		}
	}

	for (Function ClassFunction : ClassFunctions)
	{
		InnerBody += std::format("\t{}\n", ClassFunction.GetDeclaration());
	}

	return Comments + Declaration + InnerBody + "};\n\n";
}

Types::Includes::Includes(std::vector<std::pair<std::string, bool>> HeaderFiles)
{
	this->HeaderFiles = HeaderFiles;

	for (auto Pair : HeaderFiles)
	{
		if (Pair.second)
		{
			Declaration += std::format("#include <{}>\n", Pair.first);
		}
		else
		{
			Declaration += std::format("#include \"{}\"\n", Pair.first);
		}
	}
}

std::string Types::Includes::GetGeneratedBody()
{
	return Declaration + "\n";
}

Types::Member::Member(std::string Type, std::string Name, std::string Comment)
{
	this->Type = Type + (Name.empty() ? "" : " ");
	this->Name = Name;
	this->Comment = Comment != "" ? ("// " + Comment) : "";
}

void Types::Member::AddComment(std::string Comment)
{
	this->Comment = "// " + Comment;
}

std::string Types::Member::GetGeneratedBody()
{
	return std::format("\t{:{}}{:{}} {}\n", Type, 45, Name + ";", 50, Comment);
}

Types::Function::Function(std::string Type, std::string Name, std::string SuperName, std::vector<Parameter> Parameters, bool bIsStatic, bool bAddNewLine)
{
	for (auto it = Parameters.begin(); it != Parameters.end(); ++it) {
		for (auto it2 = Parameters.cbegin(); it2 != it; ++it2) {
			if (it->Name == it2->Name) {
                it->Name = std::to_string(ParametersNameConflict[it->Name] += 1);
			}
		}
	}
 
	this->Parameters = Parameters;

	std::string ParamStr = GetParametersAsString();

	DeclarationH = std::format("{}{} {}({});{}", (bIsStatic ? "static " : ""), Type, Name, ParamStr, (bAddNewLine ? "\n" : ""));
	DeclarationCPP = std::format("{} {}::{}({})", Type, SuperName, Name, ParamStr);

	Body = "{";
}

std::vector<Types::Parameter>& Types::Function::GetParameters()
{
	return Parameters;
}

std::string Types::Function::GetParametersAsString()
{
	if (Parameters.empty())
	{
		return std::string();
	}

	std::string Output;

	for (Parameter Param : Parameters)
	{
		Output += Param.GetGeneratedBody();
	}

	Output.resize(Output.size() - 2);

	return Output;
}

std::string Types::Function::GetDeclaration()
{
	 return DeclarationH;
}

void Types::Function::AddBody(std::string Body)
{
	this->Body = std::format("{{\n{}\n}}", Body);
}

void Types::Function::SetParamStruct(Types::Struct&& Params)
{
	ParamStruct = Params;
}

Types::Struct& Types::Function::GetParamStruct()
{
	return ParamStruct;
}

void Types::Function::AddComment(std::string& Comment)
{
	Comments += std::format("// {}\n", Comment);
}

void Types::Function::AddComment(std::string&& Comment)
{
	Comments += std::format("// {}\n", Comment);
}

std::string Types::Function::GetGeneratedBody()
{
	return std::format("\n{}\n{}\n{}\n\n", Comments, DeclarationCPP, Body);
}

Types::Parameter::Parameter(std::string Type, std::string Name, bool bIsOutPtr)
{
	this->bIsOutPtr = bIsOutPtr;
	this->Type = Type;
	this->Name = Name;
}

std::string Types::Parameter::GetName()
{
	return Name;
}

std::string Types::Parameter::GetGeneratedBody()
{
	return std::format("{} {}, ", Type, Name);
}

bool Types::Parameter::IsParamOutPtr()
{
	return bIsOutPtr;
}

Types::Enum::Enum(std::string Name)
{
	Declaration = std::format("{}\n", Name);
}

Types::Enum::Enum(std::string Name, std::string Type)
{
	Declaration = std::format("{} : {}\n", Name, Type);
}

void Types::Enum::AddComment(std::string&& Comment)
{
	Declaration = std::format("// {}\n{}", std::move(Comment), Declaration);
}

void Types::Enum::AddMember(std::string&& Name, int64 Value)
{
	EnumMembers.emplace_back(std::move(Name), Value);
}

void Types::Enum::FixWindowsConstant(std::string&& ConstantName)
{
	for (auto& EnumMember : EnumMembers)
	{
		if (EnumMember.first == ConstantName)
		{
			EnumMember.first += "_";
		}
	}
}

std::string Types::Enum::GetGeneratedBody()
{
	std::string Body = Declaration + "{\n";

	for (const auto& EnumMember : EnumMembers)
	{
		Body += std::format("\t{:{}} = {},\n", EnumMember.first, 30, EnumMember.second);
	}

	return Body + "};\n\n";
}

#endif