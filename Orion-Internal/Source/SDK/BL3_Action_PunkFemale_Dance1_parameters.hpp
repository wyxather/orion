#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PunkFemale_Dance1_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_PunkFemale_Dance1.Action_PunkFemale_Dance1_C.OnEnd
struct UAction_PunkFemale_Dance1_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_PunkFemale_Dance1.Action_PunkFemale_Dance1_C.ExecuteUbergraph_Action_PunkFemale_Dance1
struct UAction_PunkFemale_Dance1_C_ExecuteUbergraph_Action_PunkFemale_Dance1_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
