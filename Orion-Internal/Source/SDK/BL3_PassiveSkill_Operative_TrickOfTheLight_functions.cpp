// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_TrickOfTheLight_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PassiveSkill_Operative_TrickOfTheLight.PassiveSkill_Operative_TrickOfTheLight_C.OnActivated
// (Event, Protected, BlueprintEvent)

void UPassiveSkill_Operative_TrickOfTheLight_C::OnActivated()
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_TrickOfTheLight.PassiveSkill_Operative_TrickOfTheLight_C.OnActivated");

	UPassiveSkill_Operative_TrickOfTheLight_C_OnActivated_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function PassiveSkill_Operative_TrickOfTheLight.PassiveSkill_Operative_TrickOfTheLight_C.ExecuteUbergraph_PassiveSkill_Operative_TrickOfTheLight
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UPassiveSkill_Operative_TrickOfTheLight_C::ExecuteUbergraph_PassiveSkill_Operative_TrickOfTheLight(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PassiveSkill_Operative_TrickOfTheLight.PassiveSkill_Operative_TrickOfTheLight_C.ExecuteUbergraph_PassiveSkill_Operative_TrickOfTheLight");

	UPassiveSkill_Operative_TrickOfTheLight_C_ExecuteUbergraph_PassiveSkill_Operative_TrickOfTheLight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
