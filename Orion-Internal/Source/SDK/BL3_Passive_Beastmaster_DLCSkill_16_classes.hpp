#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_DLCSkill_16_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Beastmaster_DLCSkill_16.Passive_Beastmaster_DLCSkill_15_C
// 0x0060 (0x0210 - 0x01B0)
class UPassive_Beastmaster_DLCSkill_15_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_DLCSkill_16;// 0x01B8(0x0028)
	struct FDataTableValueHandle                       ShieldRestorePerGrade;                                    // 0x01E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableValueHandle                       CooldownTime;                                             // 0x01F8(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_DLCSkill_16.Passive_Beastmaster_DLCSkill_15_C");
		return ptr;
	}


	void OnActivated();
	void DLCSkill15_UsedAttackCommand(EOakActionAbilityPetEvolutionType PetEvolution, EOakActionAbilityPetType PetType);
	void ExecuteUbergraph_Passive_Beastmaster_DLCSkill_16(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
