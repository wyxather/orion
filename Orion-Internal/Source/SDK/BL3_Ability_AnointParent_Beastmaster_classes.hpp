#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_AnointParent_Beastmaster_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C
// 0x0049 (0x020A - 0x01C1)
class UAbility_AnointParent_Beastmaster_C : public UAbility_AnointParent_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x01C1(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01C8(0x0008) (Transient, DuplicateTransient)
	class UBPEventHub_Beastmaster_C*                   BeastmaterEventHub;                                       // 0x01D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_AnointParent_Beastmaster;// 0x01D8(0x0028)
	bool                                               UsedAttackCommand;                                        // 0x0200(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsedGammaBurst;                                           // 0x0201(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsedRakkAttack;                                           // 0x0202(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsedFadeAway;                                             // 0x0203(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               UsedGravTrap;                                             // 0x0204(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndGammaBurst;                                            // 0x0205(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndRakkAttack;                                            // 0x0206(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndFadeAway;                                              // 0x0207(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               EndGravTrap;                                              // 0x0208(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               WhileActive;                                              // 0x0209(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_AnointParent_Beastmaster.Ability_AnointParent_Beastmaster_C");
		return ptr;
	}


	void AnointOnActionSkillCoolingDown(class UOakActionAbility** ActionAbility, bool* res);
	void AnointEndHulkOut();
	void AnointEndGammaBurst();
	void AnointEndFadeAway();
	void AnointUsedBeastmasterSkill(TEnumAsByte<Enum_BeastmasterActionSkill> ActionSkill);
	void AnointUsedAttackCommand(EOakActionAbilityPetEvolutionType PetEvolution, EOakActionAbilityPetType PetType);
	void OnActivated();
	void AnointBeastmasterFindLocation(bool res);
	void BindBeastmasterEvents();
	void ExecuteUbergraph_Ability_AnointParent_Beastmaster(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
