#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_BotJockBlitz_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C
// 0x0030 (0x01E0 - 0x01B0)
class UPassive_Gunner_BotJockBlitz_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ConditionalDamageModifier RsrcCntrlr_GbxAbilityResourceController_ConditionalDamageModifier_Passive_Gunner_BotJockBlitz;// 0x01B8(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Gunner_BotJockBlitz.Passive_Gunner_BotJockBlitz_C");
		return ptr;
	}


	EGbxAbilityState CalculateAbilityState();
	void OnDeactivated();
	void OnPaused();
	void OnResumed();
	void OnActivated();
	void ExecuteUbergraph_Passive_Gunner_BotJockBlitz(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
