#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DamageSource_Skill_IronBear_GrenadeLauncher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DamageSource_Skill_IronBear_GrenadeLauncher.DamageSource_Skill_IronBear_GrenadeLauncher_C
// 0x0000 (0x0098 - 0x0098)
class UDamageSource_Skill_IronBear_GrenadeLauncher_C : public UDamageSource_Skill_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamageSource_Skill_IronBear_GrenadeLauncher.DamageSource_Skill_IronBear_GrenadeLauncher_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
