// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Condition_ArtifactAbility_WeaponManufacturer_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Condition_ArtifactAbility_WeaponManufacturer.Condition_ArtifactAbility_WeaponManufacturer_C.EvaluateCondition
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject**                Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UObject**                OptionalContext                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UCondition_ArtifactAbility_WeaponManufacturer_C::EvaluateCondition(class UObject** Context, class UObject** OptionalContext)
{
	static auto fn = UObject::FindObject<UFunction>("Function Condition_ArtifactAbility_WeaponManufacturer.Condition_ArtifactAbility_WeaponManufacturer_C.EvaluateCondition");

	UCondition_ArtifactAbility_WeaponManufacturer_C_EvaluateCondition_Params params;
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
