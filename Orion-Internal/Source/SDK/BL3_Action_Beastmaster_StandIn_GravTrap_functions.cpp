// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Beastmaster_StandIn_GravTrap_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_Beastmaster_StandIn_GravTrap.Action_Beastmaster_StandIn_GravTrap_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Beastmaster_StandIn_GravTrap_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_StandIn_GravTrap.Action_Beastmaster_StandIn_GravTrap_C.OnBegin");

	UAction_Beastmaster_StandIn_GravTrap_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Action_Beastmaster_StandIn_GravTrap.Action_Beastmaster_StandIn_GravTrap_C.ExecuteUbergraph_Action_Beastmaster_StandIn_GravTrap
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAction_Beastmaster_StandIn_GravTrap_C::ExecuteUbergraph_Action_Beastmaster_StandIn_GravTrap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_Beastmaster_StandIn_GravTrap.Action_Beastmaster_StandIn_GravTrap_C.ExecuteUbergraph_Action_Beastmaster_StandIn_GravTrap");

	UAction_Beastmaster_StandIn_GravTrap_C_ExecuteUbergraph_Action_Beastmaster_StandIn_GravTrap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
