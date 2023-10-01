#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_OperativeDLC_10_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_OperativeDLC_10.Passive_OperativeDLC_9_C
// 0x0048 (0x01F8 - 0x01B0)
class UPassive_OperativeDLC_9_C : public UOakPassiveAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x01B0(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Passive_OperativeDLC_10;// 0x01B8(0x0028)
	struct FDataTableValueHandle                       RefundChance;                                             // 0x01E0(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_OperativeDLC_10.Passive_OperativeDLC_9_C");
		return ptr;
	}


	void OnActivated();
	void ResetGate();
	void CustomEvent_1(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void ExecuteUbergraph_Passive_OperativeDLC_10(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
