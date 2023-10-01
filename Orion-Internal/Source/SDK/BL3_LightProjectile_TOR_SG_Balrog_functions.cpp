// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_TOR_SG_Balrog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_TOR_SG_Balrog.LightProjectile_TOR_SG_Balrog_C.OnLifetimeExpired
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_TOR_SG_Balrog_C::OnLifetimeExpired(class ULightProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_TOR_SG_Balrog.LightProjectile_TOR_SG_Balrog_C.OnLifetimeExpired");

	ULightProjectile_TOR_SG_Balrog_C_OnLifetimeExpired_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function LightProjectile_TOR_SG_Balrog.LightProjectile_TOR_SG_Balrog_C.Boom
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UOakLightProjectile*     Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_TOR_SG_Balrog_C::Boom(class UOakLightProjectile* Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_TOR_SG_Balrog.LightProjectile_TOR_SG_Balrog_C.Boom");

	ULightProjectile_TOR_SG_Balrog_C_Boom_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
