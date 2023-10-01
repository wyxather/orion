#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_GBXAction_EnemyVariableParent_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GBXAction_EnemyVariableParent.GBXAction_EnemyVariableParent_C.GetLocation
struct UGBXAction_EnemyVariableParent_C_GetLocation_Params
{
	struct FVector                                     MyLocation;                                               // (Parm, OutParm, IsPlainOldData)
};

// Function GBXAction_EnemyVariableParent.GBXAction_EnemyVariableParent_C.OnBegin
struct UGBXAction_EnemyVariableParent_C_OnBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function GBXAction_EnemyVariableParent.GBXAction_EnemyVariableParent_C.ExecuteUbergraph_GBXAction_EnemyVariableParent
struct UGBXAction_EnemyVariableParent_C_ExecuteUbergraph_GBXAction_EnemyVariableParent_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
