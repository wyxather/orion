#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_SplashDamageIncrease_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Gunner_SplashDamageIncrease.Ability_Gunner_SplashDamageIncrease_C
// 0x0000 (0x020B - 0x020B)
class UAbility_Gunner_SplashDamageIncrease_C : public UAbility_AnointParent_Gunner_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Gunner_SplashDamageIncrease.Ability_Gunner_SplashDamageIncrease_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
