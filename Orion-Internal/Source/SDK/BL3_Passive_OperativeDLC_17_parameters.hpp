#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_OperativeDLC_17_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Passive_OperativeDLC_17.Passive_OperativeDLC_16_C.GetManualHUDIconValues
struct UPassive_OperativeDLC_16_C_GetManualHUDIconValues_Params
{
	int                                                outStackCount;                                            // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              outDuration;                                              // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
	float                                              outTimeRemaining;                                         // (Parm, OutParm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_OperativeDLC_17.Passive_OperativeDLC_16_C.OnActivated
struct UPassive_OperativeDLC_16_C_OnActivated_Params
{
};

// Function Passive_OperativeDLC_17.Passive_OperativeDLC_16_C.DLCSkill16_OnCausedAnyDamage
struct UPassive_OperativeDLC_16_C_DLCSkill16_OnCausedAnyDamage_Params
{
	class AActor*                                      DamageInstigator;                                         // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              Damage;                                                   // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UGbxDamageType*                              DamageType;                                               // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class UDamageSource*                               DamageSource;                                             // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	class AActor*                                      DamagedActor;                                             // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FCausedDamageDetails                        Details;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm)
};

// Function Passive_OperativeDLC_17.Passive_OperativeDLC_16_C.SetDigicloneBinds
struct UPassive_OperativeDLC_16_C_SetDigicloneBinds_Params
{
	class UOakActionAbility*                           ActionAbility;                                            // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Passive_OperativeDLC_17.Passive_OperativeDLC_16_C.ExecuteUbergraph_Passive_OperativeDLC_17
struct UPassive_OperativeDLC_16_C_ExecuteUbergraph_Passive_OperativeDLC_17_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
