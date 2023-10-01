// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Operative_CoolHand_ReloadSpeedCalc_Kill_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Init_Operative_CoolHand_ReloadSpeedCalc_Kill.Init_Operative_CoolHand_ReloadSpeedCalc_Kill_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject**                Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInit_Operative_CoolHand_ReloadSpeedCalc_Kill_C::CalculateAttributeInitialValue(class UObject** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Init_Operative_CoolHand_ReloadSpeedCalc_Kill.Init_Operative_CoolHand_ReloadSpeedCalc_Kill_C.CalculateAttributeInitialValue");

	UInit_Operative_CoolHand_ReloadSpeedCalc_Kill_C_CalculateAttributeInitialValue_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
