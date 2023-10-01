#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_LaidBare_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Siren_LaidBare.PassiveSkill_Siren_LaidBare_C
// 0x0048 (0x01F8 - 0x01B0)
class UPassiveSkill_Siren_LaidBare_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FDataTableValueHandle                       ExposureDuration;                                         // 0x01B8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_PassiveSkill_Siren_Exposure;// 0x01D0(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Siren_LaidBare.PassiveSkill_Siren_LaidBare_C");
		return ptr;
	}


	void OnActivated();
	void SirenSkillEvent_OnCausedAnyDamage(float Damage, class UClass* DamageSource, class UClass* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_PassiveSkill_Siren_LaidBare(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
