#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Armor_Body_Hunter_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Armor_Body_Hunter.Armor_Body_Hunter_C
// 0x0000 (0x05D0 - 0x05D0)
class AArmor_Body_Hunter_C : public AArmor_Body_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Armor_Body_Hunter.Armor_Body_Hunter_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
