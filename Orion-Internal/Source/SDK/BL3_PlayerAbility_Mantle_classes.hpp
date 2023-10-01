#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PlayerAbility_Mantle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PlayerAbility_Mantle.PlayerAbility_Mantle_C
// 0x0008 (0x0138 - 0x0130)
class UPlayerAbility_Mantle_C : public UOakCharacterInputAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0130(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PlayerAbility_Mantle.PlayerAbility_Mantle_C");
		return ptr;
	}


	void GbxInpActEvt_InputAction_Discrete_Mantle_K2Node_GbxInputActionEvent_Discrete_4(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_Mantle_K2Node_GbxInputActionEvent_Discrete_3(class UGbxInputActionData_Discrete* Action);
	void OnPaused();
	void ExecuteUbergraph_PlayerAbility_Mantle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
