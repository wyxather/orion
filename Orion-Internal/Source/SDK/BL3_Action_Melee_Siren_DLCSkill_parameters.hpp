#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Melee_Siren_DLCSkill_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Melee_Siren_DLCSkill.Action_Melee_Siren_DLCSkill_C.OnBegin
struct UAction_Melee_Siren_DLCSkill_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Melee_Siren_DLCSkill.Action_Melee_Siren_DLCSkill_C.ExecuteUbergraph_Action_Melee_Siren_DLCSkill
struct UAction_Melee_Siren_DLCSkill_C_ExecuteUbergraph_Action_Melee_Siren_DLCSkill_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
