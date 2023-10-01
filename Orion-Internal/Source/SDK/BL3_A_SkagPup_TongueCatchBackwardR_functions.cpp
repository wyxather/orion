// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_SkagPup_TongueCatchBackwardR_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_SkagPup_TongueCatchBackwardR.A_SkagPup_TongueCatchBackwardR_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_SkagPup_TongueCatchBackwardR_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagPup_TongueCatchBackwardR.A_SkagPup_TongueCatchBackwardR_C.OnEnd");

	UA_SkagPup_TongueCatchBackwardR_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_SkagPup_TongueCatchBackwardR.A_SkagPup_TongueCatchBackwardR_C.Notify_TongueCatch
// (BlueprintCallable, BlueprintEvent)

void UA_SkagPup_TongueCatchBackwardR_C::Notify_TongueCatch()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagPup_TongueCatchBackwardR.A_SkagPup_TongueCatchBackwardR_C.Notify_TongueCatch");

	UA_SkagPup_TongueCatchBackwardR_C_Notify_TongueCatch_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_SkagPup_TongueCatchBackwardR.A_SkagPup_TongueCatchBackwardR_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_SkagPup_TongueCatchBackwardR_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagPup_TongueCatchBackwardR.A_SkagPup_TongueCatchBackwardR_C.OnBegin");

	UA_SkagPup_TongueCatchBackwardR_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_SkagPup_TongueCatchBackwardR.A_SkagPup_TongueCatchBackwardR_C.ExecuteUbergraph_A_SkagPup_TongueCatchBackwardR
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_SkagPup_TongueCatchBackwardR_C::ExecuteUbergraph_A_SkagPup_TongueCatchBackwardR(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_SkagPup_TongueCatchBackwardR.A_SkagPup_TongueCatchBackwardR_C.ExecuteUbergraph_A_SkagPup_TongueCatchBackwardR");

	UA_SkagPup_TongueCatchBackwardR_C_ExecuteUbergraph_A_SkagPup_TongueCatchBackwardR_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
