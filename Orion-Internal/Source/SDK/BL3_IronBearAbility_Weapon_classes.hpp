#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_IronBearAbility_Weapon_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass IronBearAbility_Weapon.IronBearAbility_Weapon_C
// 0x0010 (0x0140 - 0x0130)
class UIronBearAbility_Weapon_C : public UOakCharacterInputAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0130(0x0008) (Transient, DuplicateTransient)
	class AOakCharacter_IronBear*                      IronBear;                                                 // 0x0138(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass IronBearAbility_Weapon.IronBearAbility_Weapon_C");
		return ptr;
	}


	void GetRightFireHardPointSlot(class UOakActionAbilityAugmentSlotData** res);
	void GetLeftFireHardPointSlot(class UOakActionAbilityAugmentSlotData** res);
	void QuickSelectWeapon(class UInventorySlotData* InvSlot, class UWeaponSlotData* WeaponSlot);
	void GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_10(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_IronBear_LeftHardPoint_K2Node_GbxInputActionEvent_Discrete_9(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_8(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_IronBear_RightHardPoint_K2Node_GbxInputActionEvent_Discrete_7(class UGbxInputActionData_Discrete* Action);
	void GbxInpActEvt_InputAction_Discrete_Melee_K2Node_GbxInputActionEvent_Discrete_6(class UGbxInputActionData_Discrete* Action);
	void OnActivated();
	void OnPaused();
	void ExecuteUbergraph_IronBearAbility_Weapon(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
