#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_DLCSkill_3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Gunner_DLCSkill_3.Passive_Gunner_DLCSkill_2_C
// 0x0058 (0x0208 - 0x01B0)
class UPassive_Gunner_DLCSkill_2_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Gunner_DLCSkill_3;// 0x01B8(0x0028)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Passive_Gunner_DLCSkill_3;// 0x01E0(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Gunner_DLCSkill_3.Passive_Gunner_DLCSkill_2_C");
		return ptr;
	}


	void OnActivated();
	void DLCSkill2_OnActionSkillCoolingDown(class UOakActionAbility* ActionAbility);
	void DLCSkill2_OnActionSkillReady(class UOakActionAbility* ActionAbility);
	void ExecuteUbergraph_Passive_Gunner_DLCSkill_3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
