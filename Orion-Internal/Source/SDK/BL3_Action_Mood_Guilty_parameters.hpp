#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Mood_Guilty_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mood_Guilty.Action_Mood_Guilty_C.OnBegin
struct UAction_Mood_Guilty_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Mood_Guilty.Action_Mood_Guilty_C.ExecuteUbergraph_Action_Mood_Guilty
struct UAction_Mood_Guilty_C_ExecuteUbergraph_Action_Mood_Guilty_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
