#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ShieldBoosterPickup_MEAT_Tender_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ShieldBoosterPickup_MEAT_Tender.BP_ShieldBoosterPickup_MEAT_Tender_C
// 0x0010 (0x04F8 - 0x04E8)
class ABP_ShieldBoosterPickup_MEAT_Tender_C : public AShieldChargeInventoryPickup
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x04E8(0x0008) (Transient, DuplicateTransient)
	class AOakCharacter_Player*                        PickerUpper;                                              // 0x04F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ShieldBoosterPickup_MEAT_Tender.BP_ShieldBoosterPickup_MEAT_Tender_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void PickedUp(class AOakCharacter* PickupInstigator);
	void ExecuteUbergraph_BP_ShieldBoosterPickup_MEAT_Tender(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
