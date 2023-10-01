#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Mantle_Armed_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_Mantle_Armed.Action_Mantle_Armed_C.OnBegin
struct UAction_Mantle_Armed_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Mantle_Armed.Action_Mantle_Armed_C.OnEnd
struct UAction_Mantle_Armed_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_Mantle_Armed.Action_Mantle_Armed_C.ExecuteUbergraph_Action_Mantle_Armed
struct UAction_Mantle_Armed_C_ExecuteUbergraph_Action_Mantle_Armed_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
