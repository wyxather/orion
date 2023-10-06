#include "source/engine/unreal/unreal_types.h"
#include "source/engine/unreal/name_array.h"
#include "source/core/log.h"

void(*FName::AppendString)(void*, FString&) = nullptr;

std::string MakeNameValid(std::string&& Name)
{
	static constexpr const char* Numbers[10] =
	{
		"Zero",
		"One",
		"Two",
		"Three",
		"Four",
		"Five",
		"Six",
		"Seven",
		"Eight",
		"Nine"
	};

	if (Name == "bool")
		return "Bool";

	if (Name == "TRUE")
		return "TURR";

	if (Name == "FALSE")
		return "FLASE";

	if (Name == "NULL")
		return "NULLL";

	if (Name[0] <= '9' && Name[0] >= '0')
	{
		Name.replace(0, 1, Numbers[Name[0] - '0']);
	}
	else if ((Name[0] <= 'z' && Name[0] >= 'a') && Name[0] != 'b')
	{
		Name[0] -= 0x20;
	}

	for (int i = 0; i < Name.length(); i++)
	{
		switch (Name[i])
		{
		case '+':
			Name.replace(i, 1, "Plus");
			continue;
		case '-':
			Name.replace(i, 1, "Minus");
			continue;
		case '*':
			Name.replace(i, 1, "Star");
			continue;
		case '/':
			Name.replace(i, 1, "Slash");
			continue;
		default:
			break;
		}

		char c = Name[i];

		if (c != '_' && !((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A') || (c <= '9' && c >= '0')))
		{
			Name[i] = '_';
		}
	}

	return Name;
}

//std::string MakeNameValid(std::string&& Name)
//{
//	
//
//	for (int i = 0; i < Name.length(); i++)
//	{
//		char c = Name[i];
//
//		if (c != '_' && !((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A') || (c <= '9' && c >= '0')))
//		{
//			Name[i] = '_';
//		}
//	}
//
//	return Name;
//}

FName::FName(void* Ptr)
	: Address((uint8*)Ptr)
{
}

void FName::Init()
{
	constexpr std::array<const char*, 5> PossibleSigs = 
	{ 
		"48 8D ? ? 48 8D ? ? E8",
		"48 8D ? ? ? 48 8D ? ? E8",
		"48 8D ? ? 49 8B ? E8",
		"48 8D ? ? ? 49 8B ? E8",
		"48 8D ? ? 48 8B ? E8"
	};

	MemAddress StringRef = FindByStringInAllSections("ForwardShadingQuality_");

	int i = 0;
	while (!AppendString && i < PossibleSigs.size())
	{
		AppendString = reinterpret_cast<void(*)(void*, FString&)>(StringRef.RelativePattern(PossibleSigs[i], 0x80, -1 /* auto */));
		i++;
	}

	Off::InSDK::AppendNameToString = AppendString ? GetOffset(AppendString) : 0x0;

	if (!AppendString)
	{
		NameArray::Init();

		ToStr = [](void* Name) -> std::string
		{
			if (!Settings::Internal::bUseUoutlineNumberName)
			{
				const int32 Number = FName(Name).GetNumber();

				if (Number > 0)
					return NameArray::GetNameEntry(Name).GetString() + "_" + std::to_string(Number - 1);
			}

			return NameArray::GetNameEntry(Name).GetString();
		};

		return;
	}

	log::info(
        "Found FName::AppendString at Offset {:#X}",
        Off::InSDK::AppendNameToString
    );

	ToStr = [](void* Name) -> std::string
	{
		thread_local FFreableString TempString(1024);

		AppendString(Name, TempString);

		std::string OutputString = TempString.ToString();
		TempString.ResetNum();

		return OutputString;
	};
}

void FName::Init(int32 AppendStringOffset)
{
	AppendString = reinterpret_cast<void(*)(void*, FString&)>(GetImageBase() + AppendStringOffset);

	Off::InSDK::AppendNameToString = AppendStringOffset;

	ToStr = [](void* Name) -> std::string
	{
		thread_local FFreableString TempString(1024);

		AppendString(Name, TempString);

		std::string OutputString = TempString.ToString();
		TempString.ResetNum();

		return OutputString;
	};

	std::cout << "Found FName::AppendString at Offset 0x" << std::hex << Off::InSDK::AppendNameToString << "\n\n";
}

std::string FName::ToString()
{
	std::string OutputString = ToStr(Address);

	size_t pos = OutputString.rfind('/');

	if (pos == std::string::npos)
		return OutputString;

	return OutputString.substr(pos + 1);
}

std::string FName::ToValidString()
{
	return MakeNameValid(ToString());
}

int32 FName::GetCompIdx()
{
	return *reinterpret_cast<int32*>(Address + Off::FName::CompIdx);
}
int32 FName::GetNumber()
{
	return *reinterpret_cast<int32*>(Address + Off::FName::Number);
}

bool FName::operator==(FName Other)
{
	return GetCompIdx() == Other.GetCompIdx();
}

bool FName::operator!=(FName Other)
{
	return GetCompIdx() != Other.GetCompIdx();
}

std::string FName::CompIdxToString(int CmpIdx)
{
	if (!Settings::Internal::bUseCasePreservingName)
	{
		struct FakeFName
		{
			int CompIdx;
			uint8 Pad[0x4];
		} Name(CmpIdx);

		return FName(&Name).ToString();
	}
	else
	{
		struct FakeFName
		{
			int CompIdx;
			uint8 Pad[0xC];
		} Name(CmpIdx);

		return FName(&Name).ToString();
	}
}

void* FName::DEBUGGetAppendString()
{
	return (void*)(AppendString);
}