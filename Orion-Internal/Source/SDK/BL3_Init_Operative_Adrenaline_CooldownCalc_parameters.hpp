#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Operative_Adrenaline_CooldownCalc_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Init_Operative_Adrenaline_CooldownCalc.Init_Operative_Adrenaline_CooldownCalc_C.CalculateAttributeInitialValue
struct UInit_Operative_Adrenaline_CooldownCalc_C_CalculateAttributeInitialValue_Params
{
	class UObject**                                    Context;                                                  // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	float                                              ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
