#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_CompanyMan_Maliwan_CritDamage1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_CompanyMan_Maliwan_CritDamage1.Ability_CompanyMan_Maliwan_CritDamage1_C
// 0x0000 (0x011A - 0x011A)
class UAbility_CompanyMan_Maliwan_CritDamage1_C : public UBP_InventoryAbility_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_CompanyMan_Maliwan_CritDamage1.Ability_CompanyMan_Maliwan_CritDamage1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
