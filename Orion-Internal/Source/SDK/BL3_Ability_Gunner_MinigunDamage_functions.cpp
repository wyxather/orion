// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Gunner_MinigunDamage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Ability_Gunner_MinigunDamage.Ability_Gunner_MinigunDamage_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UAbility_Gunner_MinigunDamage_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_MinigunDamage.Ability_Gunner_MinigunDamage_C.OnActivated");

	UAbility_Gunner_MinigunDamage_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_MinigunDamage.Ability_Gunner_MinigunDamage_C.OnDeactivated
// (Event, Protected, BlueprintEvent)

void UAbility_Gunner_MinigunDamage_C::OnDeactivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_MinigunDamage.Ability_Gunner_MinigunDamage_C.OnDeactivated");

	UAbility_Gunner_MinigunDamage_C_OnDeactivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Ability_Gunner_MinigunDamage.Ability_Gunner_MinigunDamage_C.ExecuteUbergraph_Ability_Gunner_MinigunDamage
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAbility_Gunner_MinigunDamage_C::ExecuteUbergraph_Ability_Gunner_MinigunDamage(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Ability_Gunner_MinigunDamage.Ability_Gunner_MinigunDamage_C.ExecuteUbergraph_Ability_Gunner_MinigunDamage");

	UAbility_Gunner_MinigunDamage_C_ExecuteUbergraph_Ability_Gunner_MinigunDamage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
