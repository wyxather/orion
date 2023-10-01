#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Punk_Anointed_Teleport_Uncloak_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Punk_Anointed_Teleport_Uncloak.A_Punk_Anointed_Teleport_Uncloak_C.OnBegin
struct UA_Punk_Anointed_Teleport_Uncloak_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Punk_Anointed_Teleport_Uncloak.A_Punk_Anointed_Teleport_Uncloak_C.OnEnd
struct UA_Punk_Anointed_Teleport_Uncloak_C_OnEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Punk_Anointed_Teleport_Uncloak.A_Punk_Anointed_Teleport_Uncloak_C.ExecuteUbergraph_A_Punk_Anointed_Teleport_Uncloak
struct UA_Punk_Anointed_Teleport_Uncloak_C_ExecuteUbergraph_A_Punk_Anointed_Teleport_Uncloak_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
