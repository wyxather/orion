// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AttInit_MoxxiEvent_MaxHealth_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AttInit_MoxxiEvent_MaxHealth.AttInit_MoxxiEvent_MaxHealth_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject**                Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAttInit_MoxxiEvent_MaxHealth_C::CalculateAttributeInitialValue(class UObject** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function AttInit_MoxxiEvent_MaxHealth.AttInit_MoxxiEvent_MaxHealth_C.CalculateAttributeInitialValue");

	UAttInit_MoxxiEvent_MaxHealth_C_CalculateAttributeInitialValue_Params params;
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
