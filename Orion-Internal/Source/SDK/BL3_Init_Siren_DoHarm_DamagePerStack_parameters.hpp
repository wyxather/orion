#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Siren_DoHarm_DamagePerStack_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Init_Siren_DoHarm_DamagePerStack.Init_Siren_DoHarm_DamagePerStack_C.CalculateAttributeInitialValue
struct UInit_Siren_DoHarm_DamagePerStack_C_CalculateAttributeInitialValue_Params
{
	class UObject**                                    Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
