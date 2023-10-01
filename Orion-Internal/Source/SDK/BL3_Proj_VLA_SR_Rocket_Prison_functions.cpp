// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_VLA_SR_Rocket_Prison_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_VLA_SR_Rocket_Prison.Proj_VLA_SR_Rocket_Prison_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_VLA_SR_Rocket_Prison_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VLA_SR_Rocket_Prison.Proj_VLA_SR_Rocket_Prison_C.UserConstructionScript");

	AProj_VLA_SR_Rocket_Prison_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VLA_SR_Rocket_Prison.Proj_VLA_SR_Rocket_Prison_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_VLA_SR_Rocket_Prison_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VLA_SR_Rocket_Prison.Proj_VLA_SR_Rocket_Prison_C.ReceiveBeginPlay");

	AProj_VLA_SR_Rocket_Prison_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VLA_SR_Rocket_Prison.Proj_VLA_SR_Rocket_Prison_C.ReceiveHit
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent**    MyComp                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class AActor**                 Other                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UPrimitiveComponent**    OtherComp                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// bool*                          bSelfMoved                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                HitLocation                    (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                HitNormal                      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                NormalImpulse                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_VLA_SR_Rocket_Prison_C::ReceiveHit(class UPrimitiveComponent** MyComp, class AActor** Other, class UPrimitiveComponent** OtherComp, bool* bSelfMoved, struct FVector* HitLocation, struct FVector* HitNormal, struct FVector* NormalImpulse, struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VLA_SR_Rocket_Prison.Proj_VLA_SR_Rocket_Prison_C.ReceiveHit");

	AProj_VLA_SR_Rocket_Prison_C_ReceiveHit_Params params;
	params.MyComp = MyComp;
	params.Other = Other;
	params.OtherComp = OtherComp;
	params.bSelfMoved = bSelfMoved;
	params.HitLocation = HitLocation;
	params.HitNormal = HitNormal;
	params.NormalImpulse = NormalImpulse;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VLA_SR_Rocket_Prison.Proj_VLA_SR_Rocket_Prison_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_VLA_SR_Rocket_Prison_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VLA_SR_Rocket_Prison.Proj_VLA_SR_Rocket_Prison_C.OnExplode");

	AProj_VLA_SR_Rocket_Prison_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_VLA_SR_Rocket_Prison.Proj_VLA_SR_Rocket_Prison_C.ExecuteUbergraph_Proj_VLA_SR_Rocket_Prison
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_VLA_SR_Rocket_Prison_C::ExecuteUbergraph_Proj_VLA_SR_Rocket_Prison(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_VLA_SR_Rocket_Prison.Proj_VLA_SR_Rocket_Prison_C.ExecuteUbergraph_Proj_VLA_SR_Rocket_Prison");

	AProj_VLA_SR_Rocket_Prison_C_ExecuteUbergraph_Proj_VLA_SR_Rocket_Prison_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
