#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_CE_OperativeCannon_Digistruct_In_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_CE_OperativeCannon_Digistruct_In.BP_CE_OperativeCannon_Digistruct_In_C.OnServerEnd
struct UBP_CE_OperativeCannon_Digistruct_In_C_OnServerEnd_Params
{
	EGbxActionEndState*                                ActionEndState;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function BP_CE_OperativeCannon_Digistruct_In.BP_CE_OperativeCannon_Digistruct_In_C.ExecuteUbergraph_BP_CE_OperativeCannon_Digistruct_In
struct UBP_CE_OperativeCannon_Digistruct_In_C_ExecuteUbergraph_BP_CE_OperativeCannon_Digistruct_In_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
