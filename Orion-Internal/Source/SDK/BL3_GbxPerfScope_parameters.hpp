#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GbxPerfScope_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GbxPerfScope.GbxPerfScopePerfSampleData.GetMapGPUHotspots
struct UGbxPerfScopePerfSampleData_GetMapGPUHotspots_Params
{
	class UObject*                                     WorldContext;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                NumSamples;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	struct FLatentActionInfo                           LatentInfo;                                               // (Parm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
