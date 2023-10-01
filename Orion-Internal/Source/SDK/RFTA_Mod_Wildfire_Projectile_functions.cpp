// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_Wildfire_Projectile_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mod_Wildfire_Projectile.Mod_Wildfire_Projectile_C.ReceiveBeginPlay
// 00007FF6F8B35350
// (Event, Protected, BlueprintEvent)

void AMod_Wildfire_Projectile_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Wildfire_Projectile.Mod_Wildfire_Projectile_C.ReceiveBeginPlay");

	AMod_Wildfire_Projectile_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_Wildfire_Projectile.Mod_Wildfire_Projectile_C.ReceiveTick
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Wildfire_Projectile_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Wildfire_Projectile.Mod_Wildfire_Projectile_C.ReceiveTick");

	AMod_Wildfire_Projectile_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_Wildfire_Projectile.Mod_Wildfire_Projectile_C.OnProjectileHit
// 00007FF6F8B35350
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void AMod_Wildfire_Projectile_C::OnProjectileHit(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Wildfire_Projectile.Mod_Wildfire_Projectile_C.OnProjectileHit");

	AMod_Wildfire_Projectile_C_OnProjectileHit_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_Wildfire_Projectile.Mod_Wildfire_Projectile_C.ExecuteUbergraph_Mod_Wildfire_Projectile
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_Wildfire_Projectile_C::ExecuteUbergraph_Mod_Wildfire_Projectile(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_Wildfire_Projectile.Mod_Wildfire_Projectile_C.ExecuteUbergraph_Mod_Wildfire_Projectile");

	AMod_Wildfire_Projectile_C_ExecuteUbergraph_Mod_Wildfire_Projectile_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
