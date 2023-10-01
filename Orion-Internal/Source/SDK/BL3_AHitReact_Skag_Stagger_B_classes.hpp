#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_Skag_Stagger_B_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AHitReact_Skag_Stagger_B.AHitReact_Skag_Stagger_B_C
// 0x0018 (0x0230 - 0x0218)
class UAHitReact_Skag_Stagger_B_C : public UOakAction_Anim
{
public:
	class AActor*                                      MySelf;                                                   // 0x0218(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class AActor*                                      MyTarget;                                                 // 0x0220(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UDamageCauserComponent*                      MyDamageCausingComponent;                                 // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AHitReact_Skag_Stagger_B.AHitReact_Skag_Stagger_B_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
