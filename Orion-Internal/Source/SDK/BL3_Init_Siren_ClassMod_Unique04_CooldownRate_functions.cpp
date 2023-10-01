// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Siren_ClassMod_Unique04_CooldownRate_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Init_Siren_ClassMod_Unique04_CooldownRate.Init_Siren_ClassMod_Unique04_CooldownRate_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject**                Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UInit_Siren_ClassMod_Unique04_CooldownRate_C::CalculateAttributeInitialValue(class UObject** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Init_Siren_ClassMod_Unique04_CooldownRate.Init_Siren_ClassMod_Unique04_CooldownRate_C.CalculateAttributeInitialValue");

	UInit_Siren_ClassMod_Unique04_CooldownRate_C_CalculateAttributeInitialValue_Params params;
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
