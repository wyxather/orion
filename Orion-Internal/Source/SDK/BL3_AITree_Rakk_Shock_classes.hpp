#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_Rakk_Shock_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AIActionBlueprintGeneratedClass AITree_Rakk_Shock.AITree_Rakk_Shock_C
// 0x0008 (0x0178 - 0x0170)
class UAITree_Rakk_Shock_C : public UAIAction_AITree
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AITree_Rakk_Shock.AITree_Rakk_Shock_C");
		return ptr;
	}


	void BndEvt__Random_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_RakkBadass_Shock(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void BndEvt__MeleeSwoop_MoveNearAction_OnStoppedEventBP_AIActionBlueprintResultDelegate__DelegateSignature_AITree_Rakk_Shock(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context, EAIActionResult Result);
	void BndEvt__MeleeSwoop_MoveNearAction_OnStartedEventBP_AIActionBlueprintDelegate__DelegateSignature_AITree_Rakk_Shock(class AGbxAIController* AIController, class AGbxCharacter* Character, const struct FAIActionBlueprintContext& Context);
	void ExecuteUbergraph_AITree_Rakk_Shock(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
