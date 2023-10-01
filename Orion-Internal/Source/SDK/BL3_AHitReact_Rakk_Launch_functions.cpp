// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_Rakk_Launch_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function AHitReact_Rakk_Launch.AHitReact_Rakk_Launch_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_Rakk_Launch_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_Rakk_Launch.AHitReact_Rakk_Launch_C.OnBegin");

	UAHitReact_Rakk_Launch_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AHitReact_Rakk_Launch.AHitReact_Rakk_Launch_C.OnEnd
// (Event, Public, BlueprintEvent)
// Parameters:
// EGbxActionEndState*            ActionEndState                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_Rakk_Launch_C::OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_Rakk_Launch.AHitReact_Rakk_Launch_C.OnEnd");

	UAHitReact_Rakk_Launch_C_OnEnd_Params params;
	params.ActionEndState = ActionEndState;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function AHitReact_Rakk_Launch.AHitReact_Rakk_Launch_C.ExecuteUbergraph_AHitReact_Rakk_Launch
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAHitReact_Rakk_Launch_C::ExecuteUbergraph_AHitReact_Rakk_Launch(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function AHitReact_Rakk_Launch.AHitReact_Rakk_Launch_C.ExecuteUbergraph_AHitReact_Rakk_Launch");

	UAHitReact_Rakk_Launch_C_ExecuteUbergraph_AHitReact_Rakk_Launch_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
