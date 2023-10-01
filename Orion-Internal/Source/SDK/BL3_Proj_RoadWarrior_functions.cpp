// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_RoadWarrior_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Proj_RoadWarrior.Proj_RoadWarrior_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void AProj_RoadWarrior_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_RoadWarrior.Proj_RoadWarrior_C.UserConstructionScript");

	AProj_RoadWarrior_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_RoadWarrior.Proj_RoadWarrior_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void AProj_RoadWarrior_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_RoadWarrior.Proj_RoadWarrior_C.ReceiveBeginPlay");

	AProj_RoadWarrior_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_RoadWarrior.Proj_RoadWarrior_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_WalkingProjectileEvent__DelegateSignature_Proj_BladesOfTerror
// (BlueprintEvent)

void AProj_RoadWarrior_C::BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_WalkingProjectileEvent__DelegateSignature_Proj_BladesOfTerror()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_RoadWarrior.Proj_RoadWarrior_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_WalkingProjectileEvent__DelegateSignature_Proj_BladesOfTerror");

	AProj_RoadWarrior_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_WalkingProjectileEvent__DelegateSignature_Proj_BladesOfTerror_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_RoadWarrior.Proj_RoadWarrior_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_WalkingProjectileEvent__DelegateSignature_Proj_BladesOfTerror
// (BlueprintEvent)

void AProj_RoadWarrior_C::BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_WalkingProjectileEvent__DelegateSignature_Proj_BladesOfTerror()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_RoadWarrior.Proj_RoadWarrior_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_WalkingProjectileEvent__DelegateSignature_Proj_BladesOfTerror");

	AProj_RoadWarrior_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_WalkingProjectileEvent__DelegateSignature_Proj_BladesOfTerror_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_RoadWarrior.Proj_RoadWarrior_C.OnHitEnemy
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult*             Hit                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_RoadWarrior_C::OnHitEnemy(struct FHitResult* Hit)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_RoadWarrior.Proj_RoadWarrior_C.OnHitEnemy");

	AProj_RoadWarrior_C_OnHitEnemy_Params params;
	params.Hit = Hit;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_RoadWarrior.Proj_RoadWarrior_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_BladesOfTerror
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_RoadWarrior_C::BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_BladesOfTerror(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_RoadWarrior.Proj_RoadWarrior_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_BladesOfTerror");

	AProj_RoadWarrior_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_2_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_BladesOfTerror_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_RoadWarrior.Proj_RoadWarrior_C.OnExplode
// (Event, Protected, BlueprintEvent)

void AProj_RoadWarrior_C::OnExplode()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_RoadWarrior.Proj_RoadWarrior_C.OnExplode");

	AProj_RoadWarrior_C_OnExplode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_RoadWarrior.Proj_RoadWarrior_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_3_ProjectileHomingComponentEvent__DelegateSignature_Proj_BladesOfTerror
// (BlueprintEvent)

void AProj_RoadWarrior_C::BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_3_ProjectileHomingComponentEvent__DelegateSignature_Proj_BladesOfTerror()
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_RoadWarrior.Proj_RoadWarrior_C.BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_3_ProjectileHomingComponentEvent__DelegateSignature_Proj_BladesOfTerror");

	AProj_RoadWarrior_C_BndEvt__ProjectileHoming_K2Node_ComponentBoundEvent_3_ProjectileHomingComponentEvent__DelegateSignature_Proj_BladesOfTerror_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_RoadWarrior.Proj_RoadWarrior_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature_Proj_RoadWarrior
// (HasOutParms, BlueprintEvent)
// Parameters:
// struct FHitResult              ImpactResult                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void AProj_RoadWarrior_C::BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature_Proj_RoadWarrior(const struct FHitResult& ImpactResult)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_RoadWarrior.Proj_RoadWarrior_C.BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature_Proj_RoadWarrior");

	AProj_RoadWarrior_C_BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_4_OnProjectileStopDelegate__DelegateSignature_Proj_RoadWarrior_Params params;
	params.ImpactResult = ImpactResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Proj_RoadWarrior.Proj_RoadWarrior_C.ExecuteUbergraph_Proj_RoadWarrior
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void AProj_RoadWarrior_C::ExecuteUbergraph_Proj_RoadWarrior(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Proj_RoadWarrior.Proj_RoadWarrior_C.ExecuteUbergraph_Proj_RoadWarrior");

	AProj_RoadWarrior_C_ExecuteUbergraph_Proj_RoadWarrior_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
