// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Peashooter_Ricochet_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_Peashooter_Ricochet.LightProjectile_Peashooter_Ricochet_C.OnRicochet
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FVector*                ImpactVelocity                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ULightProjectile_Peashooter_Ricochet_C::OnRicochet(class ULightProjectile** Projectile, struct FHitResult* Hit, struct FVector* ImpactVelocity)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_Peashooter_Ricochet.LightProjectile_Peashooter_Ricochet_C.OnRicochet");

	ULightProjectile_Peashooter_Ricochet_C_OnRicochet_Params params;
	params.Projectile = Projectile;
	params.Hit = Hit;
	params.ImpactVelocity = ImpactVelocity;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
