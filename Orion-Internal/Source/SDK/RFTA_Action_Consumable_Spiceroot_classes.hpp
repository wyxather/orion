#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Consumable_Spiceroot_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Consumable_Spiceroot.Action_Consumable_Spiceroot_C
// 0x0010 (0x02E4 - 0x02D4)
class UAction_Consumable_Spiceroot_C : public UAction_Buff_DurationMod_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x02D4(0x0004) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02D8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              FrostResistance;                                          // 0x02E0(0x0004) (Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Consumable_Spiceroot.Action_Consumable_Spiceroot_C");
		return ptr;
	}


	void PlayFX();
	void SFX_Consumable_Spiceroot();
	void OnActionStart();
	void OnComputeStats();
	void OnReapplyBuff();
	void ExecuteUbergraph_Action_Consumable_Spiceroot(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
