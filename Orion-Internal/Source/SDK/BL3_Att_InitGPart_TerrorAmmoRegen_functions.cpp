// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Att_InitGPart_TerrorAmmoRegen_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Att_InitGPart_TerrorAmmoRegen.Att_InitGPart_TerrorAmmoRegen_C.CalculateAttributeInitialValue
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject**                Context                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float UAtt_InitGPart_TerrorAmmoRegen_C::CalculateAttributeInitialValue(class UObject** Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Att_InitGPart_TerrorAmmoRegen.Att_InitGPart_TerrorAmmoRegen_C.CalculateAttributeInitialValue");

	UAtt_InitGPart_TerrorAmmoRegen_C_CalculateAttributeInitialValue_Params params;
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
