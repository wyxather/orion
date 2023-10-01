// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_HW_COV_SawBlade_AI_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_HW_COV_SawBlade_AI.LightProjectile_HW_COV_SawBlade_AI_C.OnImpact
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ULightProjectile_HW_COV_SawBlade_AI_C::OnImpact(class ULightProjectile** Projectile, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_HW_COV_SawBlade_AI.LightProjectile_HW_COV_SawBlade_AI_C.OnImpact");

	ULightProjectile_HW_COV_SawBlade_AI_C_OnImpact_Params params;
	params.Projectile = Projectile;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_HW_COV_SawBlade_AI.LightProjectile_HW_COV_SawBlade_AI_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_HW_COV_SawBlade_AI_C::OnLifetimeExpired(class ULightProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_HW_COV_SawBlade_AI.LightProjectile_HW_COV_SawBlade_AI_C.OnLifetimeExpired");

	ULightProjectile_HW_COV_SawBlade_AI_C_OnLifetimeExpired_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
