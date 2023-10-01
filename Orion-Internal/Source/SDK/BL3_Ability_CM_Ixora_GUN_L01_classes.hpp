#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_CM_Ixora_GUN_L01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_CM_Ixora_GUN_L01.Ability_CM_Ixora_GUN_L01_C
// 0x0038 (0x0130 - 0x00F8)
class UAbility_CM_Ixora_GUN_L01_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class AOakCharacter_Player*                        OakCharacterOwner;                                        // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_CM_Ixora_GUN_L01;// 0x0108(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_CM_Ixora_GUN_L01.Ability_CM_Ixora_GUN_L01_C");
		return ptr;
	}


	EGbxAbilityState CalculateAbilityState();
	void OnActivated();
	void GunnerIxoraClassMod_OnCausedElementalEffect(class AActor* Causer, const struct FStatusEffectSpec& Spec);
	void ExecuteUbergraph_Ability_CM_Ixora_GUN_L01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
