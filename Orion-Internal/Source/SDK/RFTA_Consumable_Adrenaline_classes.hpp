#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Consumable_Adrenaline_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Consumable_Adrenaline.Consumable_Adrenaline_C
// 0x0027 (0x0650 - 0x0629)
class AConsumable_Adrenaline_C : public AItem_Potion_Base_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x0629(0x0007) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0630(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class URimComponent*                               Rim;                                                      // 0x0638(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                              Duration;                                                 // 0x0640(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MeleeAttackSpeedMod;                                      // 0x0644(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              MoveSpeedMod;                                             // 0x0648(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                              AimMoveSpeedMod;                                          // 0x064C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Consumable_Adrenaline.Consumable_Adrenaline_C");
		return ptr;
	}


	void ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn);
	void DoAction(class UActionComponent** ActionComponent, class AActor** Cause, class AActor** Target);
	void ExecuteUbergraph_Consumable_Adrenaline(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
