#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Weapon_BioBetsy_Rad_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C
// 0x0030 (0x0128 - 0x00F8)
class UAbility_Weapon_BioBetsy_Rad_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_Weapon_CloudKill;// 0x0100(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Weapon_BioBetsy_Rad.Ability_Weapon_BioBetsy_Rad_C");
		return ptr;
	}


	void OnRegistered();
	void OnDeactivated();
	void OnPaused();
	void OnKilled(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void Reset();
	void ExecuteUbergraph_Ability_Weapon_BioBetsy_Rad(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
