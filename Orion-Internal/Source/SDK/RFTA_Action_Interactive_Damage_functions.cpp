// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Interactive_Damage_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Interactive_Damage.Action_Interactive_Damage_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Interactive_Damage_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Interactive_Damage.Action_Interactive_Damage_C.OnActionStart");

	UAction_Interactive_Damage_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Interactive_Damage.Action_Interactive_Damage_C.ExecuteUbergraph_Action_Interactive_Damage
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Interactive_Damage_C::ExecuteUbergraph_Action_Interactive_Damage(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Interactive_Damage.Action_Interactive_Damage_C.ExecuteUbergraph_Action_Interactive_Damage");

	UAction_Interactive_Damage_C_ExecuteUbergraph_Action_Interactive_Damage_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
