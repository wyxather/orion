// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ASpawn_TinkLoot_HoleGround3_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ASpawn_TinkLoot_HoleGround3.ASpawn_TinkLoot_HoleGround3_C.StopDigAudio
// (BlueprintCallable, BlueprintEvent)

void UASpawn_TinkLoot_HoleGround3_C::StopDigAudio()
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_TinkLoot_HoleGround3.ASpawn_TinkLoot_HoleGround3_C.StopDigAudio");

	UASpawn_TinkLoot_HoleGround3_C_StopDigAudio_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ASpawn_TinkLoot_HoleGround3.ASpawn_TinkLoot_HoleGround3_C.OnServerBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UASpawn_TinkLoot_HoleGround3_C::OnServerBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_TinkLoot_HoleGround3.ASpawn_TinkLoot_HoleGround3_C.OnServerBegin");

	UASpawn_TinkLoot_HoleGround3_C_OnServerBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ASpawn_TinkLoot_HoleGround3.ASpawn_TinkLoot_HoleGround3_C.OnServerEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UASpawn_TinkLoot_HoleGround3_C::OnServerEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_TinkLoot_HoleGround3.ASpawn_TinkLoot_HoleGround3_C.OnServerEnd");

	UASpawn_TinkLoot_HoleGround3_C_OnServerEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ASpawn_TinkLoot_HoleGround3.ASpawn_TinkLoot_HoleGround3_C.ExecuteUbergraph_ASpawn_TinkLoot_HoleGround3
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UASpawn_TinkLoot_HoleGround3_C::ExecuteUbergraph_ASpawn_TinkLoot_HoleGround3(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ASpawn_TinkLoot_HoleGround3.ASpawn_TinkLoot_HoleGround3_C.ExecuteUbergraph_ASpawn_TinkLoot_HoleGround3");

	UASpawn_TinkLoot_HoleGround3_C_ExecuteUbergraph_ASpawn_TinkLoot_HoleGround3_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
