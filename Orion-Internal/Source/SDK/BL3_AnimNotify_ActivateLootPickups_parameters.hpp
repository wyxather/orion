#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AnimNotify_ActivateLootPickups_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function AnimNotify_ActivateLootPickups.AnimNotify_ActivateLootPickups_C.Received_Notify
struct UAnimNotify_ActivateLootPickups_C_Received_Notify_Params
{
	class USkeletalMeshComponent**                     MeshComp;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UAnimSequenceBase**                          Animation;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
