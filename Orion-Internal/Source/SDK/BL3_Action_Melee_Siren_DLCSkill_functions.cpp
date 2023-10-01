// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Melee_Siren_DLCSkill_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Melee_Siren_DLCSkill.Action_Melee_Siren_DLCSkill_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Melee_Siren_DLCSkill_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Melee_Siren_DLCSkill.Action_Melee_Siren_DLCSkill_C.OnBegin");

	UAction_Melee_Siren_DLCSkill_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Melee_Siren_DLCSkill.Action_Melee_Siren_DLCSkill_C.ExecuteUbergraph_Action_Melee_Siren_DLCSkill
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Melee_Siren_DLCSkill_C::ExecuteUbergraph_Action_Melee_Siren_DLCSkill(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Melee_Siren_DLCSkill.Action_Melee_Siren_DLCSkill_C.ExecuteUbergraph_Action_Melee_Siren_DLCSkill");

	UAction_Melee_Siren_DLCSkill_C_ExecuteUbergraph_Action_Melee_Siren_DLCSkill_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
