#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_DLCSkill_13_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_Gunner_DLCSkill_13.Passive_Gunner_DLCSkill_12_C.GunnerCausedElementalEffect
struct UPassive_Gunner_DLCSkill_12_C_GunnerCausedElementalEffect_Params
{
	class AActor**                                     Causer;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FStatusEffectSpec*                          Spec;                                                     // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// Function Passive_Gunner_DLCSkill_13.Passive_Gunner_DLCSkill_12_C.ExecuteUbergraph_Passive_Gunner_DLCSkill_13
struct UPassive_Gunner_DLCSkill_12_C_ExecuteUbergraph_Passive_Gunner_DLCSkill_13_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
