// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PsychoMale_Shared_LeapingMelee_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function A_PsychoMale_Shared_LeapingMelee.A_PsychoMale_Shared_LeapingMelee_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_Shared_LeapingMelee_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Shared_LeapingMelee.A_PsychoMale_Shared_LeapingMelee_C.OnBegin");

	UA_PsychoMale_Shared_LeapingMelee_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_Shared_LeapingMelee.A_PsychoMale_Shared_LeapingMelee_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_Shared_LeapingMelee_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Shared_LeapingMelee.A_PsychoMale_Shared_LeapingMelee_C.OnEnd");

	UA_PsychoMale_Shared_LeapingMelee_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_Shared_LeapingMelee.A_PsychoMale_Shared_LeapingMelee_C.MeleeStrike
// (BlueprintCallable, BlueprintEvent)

void UA_PsychoMale_Shared_LeapingMelee_C::MeleeStrike()
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Shared_LeapingMelee.A_PsychoMale_Shared_LeapingMelee_C.MeleeStrike");

	UA_PsychoMale_Shared_LeapingMelee_C_MeleeStrike_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function A_PsychoMale_Shared_LeapingMelee.A_PsychoMale_Shared_LeapingMelee_C.ExecuteUbergraph_A_PsychoMale_Shared_LeapingMelee
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UA_PsychoMale_Shared_LeapingMelee_C::ExecuteUbergraph_A_PsychoMale_Shared_LeapingMelee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function A_PsychoMale_Shared_LeapingMelee.A_PsychoMale_Shared_LeapingMelee_C.ExecuteUbergraph_A_PsychoMale_Shared_LeapingMelee");

	UA_PsychoMale_Shared_LeapingMelee_C_ExecuteUbergraph_A_PsychoMale_Shared_LeapingMelee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
