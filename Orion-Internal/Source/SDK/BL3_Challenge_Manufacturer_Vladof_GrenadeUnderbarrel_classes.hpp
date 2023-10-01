#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Manufacturer_Vladof_GrenadeUnderbarrel_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Manufacturer_Vladof_GrenadeUnderbarrel.Challenge_Manufacturer_Vladof_GrenadeUnderbarrel_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_Manufacturer_Vladof_GrenadeUnderbarrel_C : public UOakChallenge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Manufacturer_Vladof_GrenadeUnderbarrel.Challenge_Manufacturer_Vladof_GrenadeUnderbarrel_C");
		return ptr;
	}


	void CheckForGrenadeUnderbarrel(class AOakWeapon* Weapon, bool* CorrectUnderbarrel);
	void CheckKillCondition(class UDamageComponent* DamageReceiver, struct FCausedDeathDetails* DeathDetails);
	void OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
