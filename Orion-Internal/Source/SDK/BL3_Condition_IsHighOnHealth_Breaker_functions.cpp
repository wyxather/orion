// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Condition_IsHighOnHealth_Breaker_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Condition_IsHighOnHealth_Breaker.Condition_IsHighOnHealth_Breaker_C.EvaluateCondition
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject**                Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                OptionalContext                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCondition_IsHighOnHealth_Breaker_C::EvaluateCondition(class UObject** Context, class UObject** OptionalContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Condition_IsHighOnHealth_Breaker.Condition_IsHighOnHealth_Breaker_C.EvaluateCondition");

	UCondition_IsHighOnHealth_Breaker_C_EvaluateCondition_Params params;
	params.Context = Context;
	params.OptionalContext = OptionalContext;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
