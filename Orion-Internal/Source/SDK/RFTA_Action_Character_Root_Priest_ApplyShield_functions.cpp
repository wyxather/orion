// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_Character_Root_Priest_ApplyShield_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Character_Root_Priest_ApplyShield.Action_Character_Root_Priest_ApplyShield_C.OnActionStart
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UAction_Character_Root_Priest_ApplyShield_C::OnActionStart()
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Character_Root_Priest_ApplyShield.Action_Character_Root_Priest_ApplyShield_C.OnActionStart");

	UAction_Character_Root_Priest_ApplyShield_C_OnActionStart_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Character_Root_Priest_ApplyShield.Action_Character_Root_Priest_ApplyShield_C.ExecuteUbergraph_Action_Character_Root_Priest_ApplyShield
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_Character_Root_Priest_ApplyShield_C::ExecuteUbergraph_Action_Character_Root_Priest_ApplyShield(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Character_Root_Priest_ApplyShield.Action_Character_Root_Priest_ApplyShield_C.ExecuteUbergraph_Action_Character_Root_Priest_ApplyShield");

	UAction_Character_Root_Priest_ApplyShield_C_ExecuteUbergraph_Action_Character_Root_Priest_ApplyShield_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
