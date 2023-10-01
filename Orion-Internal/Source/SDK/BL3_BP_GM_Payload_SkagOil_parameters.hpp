#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Payload_SkagOil_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function BP_GM_Payload_SkagOil.BP_GM_Payload_SkagOil_C.K2_GrenadeBounce
struct UBP_GM_Payload_SkagOil_C_K2_GrenadeBounce_Params
{
	class AGrenade**                                   Grenade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGrenadeMod**                                GrenadeMod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPayloadInstanceData                        InstanceData;                                             // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

// Function BP_GM_Payload_SkagOil.BP_GM_Payload_SkagOil_C.K2_GrenadeExplode
struct UBP_GM_Payload_SkagOil_C_K2_GrenadeExplode_Params
{
	class AGrenade**                                   Grenade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGrenadeMod**                                GrenadeMod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPayloadInstanceData                        InstanceData;                                             // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

// Function BP_GM_Payload_SkagOil.BP_GM_Payload_SkagOil_C.K2_GrenadeInitialized
struct UBP_GM_Payload_SkagOil_C_K2_GrenadeInitialized_Params
{
	class AGrenade**                                   Grenade;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AGrenadeMod**                                GrenadeMod;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FPayloadInstanceData                        InstanceData;                                             // (BlueprintVisible, Parm, OutParm, ReferenceParm)
};

// Function BP_GM_Payload_SkagOil.BP_GM_Payload_SkagOil_C.K2_UpdateChildGeneration
struct UBP_GM_Payload_SkagOil_C_K2_UpdateChildGeneration_Params
{
	struct FGrenadeChildGenerationData*                InGenerationData;                                         // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FGrenadeChildGenerationData                 GenerationData;                                           // (Parm, OutParm)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
