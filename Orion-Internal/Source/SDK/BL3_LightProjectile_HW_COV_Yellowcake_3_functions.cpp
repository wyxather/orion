// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_HW_COV_Yellowcake_3_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_HW_COV_Yellowcake_3.LightProjectile_HW_COV_Yellowcake_2_C.OnDamage
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bCritical                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_HW_COV_Yellowcake_2_C::OnDamage(class ULightProjectile** Projectile, struct FHitResult* Hit, bool* bCritical)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_HW_COV_Yellowcake_3.LightProjectile_HW_COV_Yellowcake_2_C.OnDamage");

	ULightProjectile_HW_COV_Yellowcake_2_C_OnDamage_Params params;
	params.Projectile = Projectile;
	params.Hit = Hit;
	params.bCritical = bCritical;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_HW_COV_Yellowcake_3.LightProjectile_HW_COV_Yellowcake_2_C.OnLifetimeExpired
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_HW_COV_Yellowcake_2_C::OnLifetimeExpired(class ULightProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_HW_COV_Yellowcake_3.LightProjectile_HW_COV_Yellowcake_2_C.OnLifetimeExpired");

	ULightProjectile_HW_COV_Yellowcake_2_C_OnLifetimeExpired_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
