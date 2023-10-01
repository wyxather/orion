// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_DLCSkill_13_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Passive_Gunner_DLCSkill_13.Passive_Gunner_DLCSkill_12_C.GunnerCausedElementalEffect
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Causer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FStatusEffectSpec*      Spec                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassive_Gunner_DLCSkill_12_C::GunnerCausedElementalEffect(class AActor** Causer, struct FStatusEffectSpec* Spec)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_13.Passive_Gunner_DLCSkill_12_C.GunnerCausedElementalEffect");

	UPassive_Gunner_DLCSkill_12_C_GunnerCausedElementalEffect_Params params;
	params.Causer = Causer;
	params.Spec = Spec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Passive_Gunner_DLCSkill_13.Passive_Gunner_DLCSkill_12_C.ExecuteUbergraph_Passive_Gunner_DLCSkill_13
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassive_Gunner_DLCSkill_12_C::ExecuteUbergraph_Passive_Gunner_DLCSkill_13(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Passive_Gunner_DLCSkill_13.Passive_Gunner_DLCSkill_12_C.ExecuteUbergraph_Passive_Gunner_DLCSkill_13");

	UPassive_Gunner_DLCSkill_12_C_ExecuteUbergraph_Passive_Gunner_DLCSkill_13_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
