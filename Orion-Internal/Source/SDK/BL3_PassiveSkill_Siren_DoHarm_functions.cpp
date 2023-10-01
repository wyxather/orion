// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Siren_DoHarm_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Siren_DoHarm.PassiveSkill_Siren_DoHarm_C.CalculateAbilityState
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// EGbxAbilityState               ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

EGbxAbilityState UPassiveSkill_Siren_DoHarm_C::CalculateAbilityState()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_DoHarm.PassiveSkill_Siren_DoHarm_C.CalculateAbilityState");

	UPassiveSkill_Siren_DoHarm_C_CalculateAbilityState_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function PassiveSkill_Siren_DoHarm.PassiveSkill_Siren_DoHarm_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Siren_DoHarm_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_DoHarm.PassiveSkill_Siren_DoHarm_C.OnActivated");

	UPassiveSkill_Siren_DoHarm_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_DoHarm.PassiveSkill_Siren_DoHarm_C.DoHarmOnKilledEnemy
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPassiveSkill_Siren_DoHarm_C::DoHarmOnKilledEnemy(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_DoHarm.PassiveSkill_Siren_DoHarm_C.DoHarmOnKilledEnemy");

	UPassiveSkill_Siren_DoHarm_C_DoHarmOnKilledEnemy_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_DoHarm.PassiveSkill_Siren_DoHarm_C.TriggerRushEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            RushStacks                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_DoHarm_C::TriggerRushEffect(int RushStacks)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_DoHarm.PassiveSkill_Siren_DoHarm_C.TriggerRushEffect");

	UPassiveSkill_Siren_DoHarm_C_TriggerRushEffect_Params params;
	params.RushStacks = RushStacks;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Siren_DoHarm.PassiveSkill_Siren_DoHarm_C.ExecuteUbergraph_PassiveSkill_Siren_DoHarm
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Siren_DoHarm_C::ExecuteUbergraph_PassiveSkill_Siren_DoHarm(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Siren_DoHarm.PassiveSkill_Siren_DoHarm_C.ExecuteUbergraph_PassiveSkill_Siren_DoHarm");

	UPassiveSkill_Siren_DoHarm_C_ExecuteUbergraph_PassiveSkill_Siren_DoHarm_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
