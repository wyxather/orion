#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Award_Weapon_HerosSword_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Award_Weapon_HerosSword.Award_Weapon_HerosSword_C
// 0x0000 (0x0060 - 0x0060)
class UAward_Weapon_HerosSword_C : public UItemAward
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Award_Weapon_HerosSword.Award_Weapon_HerosSword_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
