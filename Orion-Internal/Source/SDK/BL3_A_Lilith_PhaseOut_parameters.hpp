#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Lilith_PhaseOut_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_Lilith_PhaseOut.A_Lilith_PhaseOut_C.PhaseoutFX
struct UA_Lilith_PhaseOut_C_PhaseoutFX_Params
{
};

// Function A_Lilith_PhaseOut.A_Lilith_PhaseOut_C.OnBegin
struct UA_Lilith_PhaseOut_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_Lilith_PhaseOut.A_Lilith_PhaseOut_C.ExecuteUbergraph_A_Lilith_PhaseOut
struct UA_Lilith_PhaseOut_C_ExecuteUbergraph_A_Lilith_PhaseOut_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
