#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetSkag_RangedAttack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function A_PetSkag_RangedAttack.A_PetSkag_RangedAttack_C.OnBegin
struct UA_PetSkag_RangedAttack_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function A_PetSkag_RangedAttack.A_PetSkag_RangedAttack_C.Notify_Spit
struct UA_PetSkag_RangedAttack_C_Notify_Spit_Params
{
};

// Function A_PetSkag_RangedAttack.A_PetSkag_RangedAttack_C.ExecuteUbergraph_A_PetSkag_RangedAttack
struct UA_PetSkag_RangedAttack_C_ExecuteUbergraph_A_PetSkag_RangedAttack_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
