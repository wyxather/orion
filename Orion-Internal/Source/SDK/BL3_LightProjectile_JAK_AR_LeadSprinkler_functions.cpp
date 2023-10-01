// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_JAK_AR_LeadSprinkler_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_JAK_AR_LeadSprinkler.LightProjectile_JAK_AR_LeadSprinkler_C.OnDamage
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// bool*                          bCritical                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_JAK_AR_LeadSprinkler_C::OnDamage(class ULightProjectile** Projectile, struct FHitResult* Hit, bool* bCritical)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_JAK_AR_LeadSprinkler.LightProjectile_JAK_AR_LeadSprinkler_C.OnDamage");

	ULightProjectile_JAK_AR_LeadSprinkler_C_OnDamage_Params params;
	params.Projectile = Projectile;
	params.Hit = Hit;
	params.bCritical = bCritical;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
