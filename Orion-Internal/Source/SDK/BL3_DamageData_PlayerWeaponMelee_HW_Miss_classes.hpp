#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DamageData_PlayerWeaponMelee_HW_Miss_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DamageData_PlayerWeaponMelee_HW_Miss.DamageData_PlayerWeaponMelee_HW_Miss_C
// 0x0000 (0x0310 - 0x0310)
class UDamageData_PlayerWeaponMelee_HW_Miss_C : public UOakDamageData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamageData_PlayerWeaponMelee_HW_Miss.DamageData_PlayerWeaponMelee_HW_Miss_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
