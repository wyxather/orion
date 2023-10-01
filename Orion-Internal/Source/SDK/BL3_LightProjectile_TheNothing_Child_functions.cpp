// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_TheNothing_Child_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_TheNothing_Child.LightProjectile_TheNothing_Child_C.OnRicochet
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                ImpactVelocity                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ULightProjectile_TheNothing_Child_C::OnRicochet(class ULightProjectile** Projectile, struct FHitResult* Hit, struct FVector* ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_TheNothing_Child.LightProjectile_TheNothing_Child_C.OnRicochet");

	ULightProjectile_TheNothing_Child_C_OnRicochet_Params params;
	params.Projectile = Projectile;
	params.Hit = Hit;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_TheNothing_Child.LightProjectile_TheNothing_Child_C.ExplodeChance
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakLightProjectile*     Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_TheNothing_Child_C::ExplodeChance(class UOakLightProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_TheNothing_Child.LightProjectile_TheNothing_Child_C.ExplodeChance");

	ULightProjectile_TheNothing_Child_C_ExplodeChance_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_TheNothing_Child.LightProjectile_TheNothing_Child_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_TheNothing_Child_C::OnLifetimeExpired(class ULightProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_TheNothing_Child.LightProjectile_TheNothing_Child_C.OnLifetimeExpired");

	ULightProjectile_TheNothing_Child_C_OnLifetimeExpired_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
