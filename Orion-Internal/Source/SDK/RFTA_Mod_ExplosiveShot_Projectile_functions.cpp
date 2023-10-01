// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_ExplosiveShot_Projectile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mod_ExplosiveShot_Projectile.Mod_ExplosiveShot_Projectile_C.OnProjectileHit
// 00007FF6F8B35350
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AMod_ExplosiveShot_Projectile_C::OnProjectileHit(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ExplosiveShot_Projectile.Mod_ExplosiveShot_Projectile_C.OnProjectileHit");

	AMod_ExplosiveShot_Projectile_C_OnProjectileHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_ExplosiveShot_Projectile.Mod_ExplosiveShot_Projectile_C.ExecuteUbergraph_Mod_ExplosiveShot_Projectile
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_ExplosiveShot_Projectile_C::ExecuteUbergraph_Mod_ExplosiveShot_Projectile(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_ExplosiveShot_Projectile.Mod_ExplosiveShot_Projectile_C.ExecuteUbergraph_Mod_ExplosiveShot_Projectile");

	AMod_ExplosiveShot_Projectile_C_ExecuteUbergraph_Mod_ExplosiveShot_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
