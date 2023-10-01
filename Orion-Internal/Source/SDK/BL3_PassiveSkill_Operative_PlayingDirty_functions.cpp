// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_PlayingDirty_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.GetManualHUDIconValues
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int                            outStackCount                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          outDuration                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// float                          outTimeRemaining               (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_PlayingDirty_C::GetManualHUDIconValues(int* outStackCount, float* outDuration, float* outTimeRemaining)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.GetManualHUDIconValues");

	UPassiveSkill_Operative_PlayingDirty_C_GetManualHUDIconValues_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (outStackCount != nullptr)
		*outStackCount = params.outStackCount;
	if (outDuration != nullptr)
		*outDuration = params.outDuration;
	if (outTimeRemaining != nullptr)
		*outTimeRemaining = params.outTimeRemaining;
}


// Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.PlayingDirtyOnWeaponUsed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AWeapon*                 EventWeapon                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_PlayingDirty_C::PlayingDirtyOnWeaponUsed(class AWeapon* EventWeapon)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.PlayingDirtyOnWeaponUsed");

	UPassiveSkill_Operative_PlayingDirty_C_PlayingDirtyOnWeaponUsed_Params params;
	params.EventWeapon = EventWeapon;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.OperativeTriggerKillSkillEffect
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector*                KillLocation                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// class AActor**                 KilledEnemy                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_PlayingDirty_C::OperativeTriggerKillSkillEffect(struct FVector* KillLocation, class AActor** KilledEnemy)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.OperativeTriggerKillSkillEffect");

	UPassiveSkill_Operative_PlayingDirty_C_OperativeTriggerKillSkillEffect_Params params;
	params.KillLocation = KillLocation;
	params.KilledEnemy = KilledEnemy;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.ExecuteUbergraph_PassiveSkill_Operative_PlayingDirty
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_PlayingDirty_C::ExecuteUbergraph_PassiveSkill_Operative_PlayingDirty(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_PlayingDirty.PassiveSkill_Operative_PlayingDirty_C.ExecuteUbergraph_PassiveSkill_Operative_PlayingDirty");

	UPassiveSkill_Operative_PlayingDirty_C_ExecuteUbergraph_PassiveSkill_Operative_PlayingDirty_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
