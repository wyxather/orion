// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Tink_Anointed_GiganticBall_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_Tink_Anointed_GiganticBall.LightProjectile_Tink_Anointed_GiganticBall_C.OnImpact
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ULightProjectile_Tink_Anointed_GiganticBall_C::OnImpact(class ULightProjectile** Projectile, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_Tink_Anointed_GiganticBall.LightProjectile_Tink_Anointed_GiganticBall_C.OnImpact");

	ULightProjectile_Tink_Anointed_GiganticBall_C_OnImpact_Params params;
	params.Projectile = Projectile;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
