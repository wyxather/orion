#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Beastmaster_DLCSkill_14_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C
// 0x0058 (0x0208 - 0x01B0)
class UPassive_Beastmaster_DLCSkill_13_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Passive_Beastmaster_DLCSkill_14;// 0x01B8(0x0028)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_Beastmaster_DLCSkill_14;// 0x01E0(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Beastmaster_DLCSkill_14.Passive_Beastmaster_DLCSkill_13_C");
		return ptr;
	}


	void OnActivated();
	void SetPetCDM();
	void RemovePetCDM();
	void Beastmaster_DLCSkill13_OnPetSpawned(class AOakCharacter* Pet);
	void Beastmaster_DLCSkill13_OnPetReleased();
	void ExecuteUbergraph_Passive_Beastmaster_DLCSkill_14(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
