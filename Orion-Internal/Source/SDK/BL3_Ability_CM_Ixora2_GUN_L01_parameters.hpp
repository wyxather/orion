#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_CM_Ixora2_GUN_L01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Ability_CM_Ixora2_GUN_L01.Ability_CM_Ixora2_GUN_L01_C.OnActivated
struct UAbility_CM_Ixora2_GUN_L01_C_OnActivated_Params
{
};

// Function Ability_CM_Ixora2_GUN_L01.Ability_CM_Ixora2_GUN_L01_C.CMIxora2_EnterIronBear
struct UAbility_CM_Ixora2_GUN_L01_C_CMIxora2_EnterIronBear_Params
{
	class AOakCharacter_IronBear*                      IronBear;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_CM_Ixora2_GUN_L01.Ability_CM_Ixora2_GUN_L01_C.CMIxora2_ExitIronBear
struct UAbility_CM_Ixora2_GUN_L01_C_CMIxora2_ExitIronBear_Params
{
	class AOakCharacter_IronBear*                      IronBear;                                                 // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Ability_CM_Ixora2_GUN_L01.Ability_CM_Ixora2_GUN_L01_C.ExecuteUbergraph_Ability_CM_Ixora2_GUN_L01
struct UAbility_CM_Ixora2_GUN_L01_C_ExecuteUbergraph_Ability_CM_Ixora2_GUN_L01_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
