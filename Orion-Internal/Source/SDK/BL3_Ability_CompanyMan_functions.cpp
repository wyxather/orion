// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_CompanyMan_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_CompanyMan.Ability_CompanyMan_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_CompanyMan_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CompanyMan.Ability_CompanyMan_C.OnActivated");

	UAbility_CompanyMan_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_CompanyMan.Ability_CompanyMan_C.OnCausedDeath
// (HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UDamageComponent*        Damaged                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FCausedDeathDetails     Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAbility_CompanyMan_C::OnCausedDeath(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CompanyMan.Ability_CompanyMan_C.OnCausedDeath");

	UAbility_CompanyMan_C_OnCausedDeath_Params params;
	params.Damaged = Damaged;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_CompanyMan.Ability_CompanyMan_C.OnInventoryItemPickedUp
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  PickedUpActor                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            Quantity                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_CompanyMan_C::OnInventoryItemPickedUp(class AActor* PickedUpActor, int Quantity)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CompanyMan.Ability_CompanyMan_C.OnInventoryItemPickedUp");

	UAbility_CompanyMan_C_OnInventoryItemPickedUp_Params params;
	params.PickedUpActor = PickedUpActor;
	params.Quantity = Quantity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_CompanyMan.Ability_CompanyMan_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_CompanyMan_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CompanyMan.Ability_CompanyMan_C.OnDeactivated");

	UAbility_CompanyMan_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_CompanyMan.Ability_CompanyMan_C.Start Investing
// (BlueprintCallable, BlueprintEvent)

void UAbility_CompanyMan_C::Start_Investing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CompanyMan.Ability_CompanyMan_C.Start Investing");

	UAbility_CompanyMan_C_Start_Investing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_CompanyMan.Ability_CompanyMan_C.Stop Investing
// (BlueprintCallable, BlueprintEvent)

void UAbility_CompanyMan_C::Stop_Investing()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CompanyMan.Ability_CompanyMan_C.Stop Investing");

	UAbility_CompanyMan_C_Stop_Investing_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_CompanyMan.Ability_CompanyMan_C.ExecuteUbergraph_Ability_CompanyMan
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_CompanyMan_C::ExecuteUbergraph_Ability_CompanyMan(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_CompanyMan.Ability_CompanyMan_C.ExecuteUbergraph_Ability_CompanyMan");

	UAbility_CompanyMan_C_ExecuteUbergraph_Ability_CompanyMan_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
