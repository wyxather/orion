// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Shield_Splitter_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Shield_Splitter.Action_Shield_Splitter_C.OnActionStop
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Shield_Splitter_C::OnActionStop()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Shield_Splitter.Action_Shield_Splitter_C.OnActionStop");

	UAction_Shield_Splitter_C_OnActionStop_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Shield_Splitter.Action_Shield_Splitter_C.ExecuteUbergraph_Action_Shield_Splitter
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Shield_Splitter_C::ExecuteUbergraph_Action_Shield_Splitter(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Shield_Splitter.Action_Shield_Splitter_C.ExecuteUbergraph_Action_Shield_Splitter");

	UAction_Shield_Splitter_C_ExecuteUbergraph_Action_Shield_Splitter_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
