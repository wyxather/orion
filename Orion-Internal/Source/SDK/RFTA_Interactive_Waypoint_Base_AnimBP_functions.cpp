// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Interactive_Waypoint_Base_AnimBP_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Interactive_Waypoint_Base_AnimBP.Interactive_Waypoint_Base_AnimBP_C.ExecuteUbergraph_Interactive_Waypoint_Base_AnimBP
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInteractive_Waypoint_Base_AnimBP_C::ExecuteUbergraph_Interactive_Waypoint_Base_AnimBP(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Interactive_Waypoint_Base_AnimBP.Interactive_Waypoint_Base_AnimBP_C.ExecuteUbergraph_Interactive_Waypoint_Base_AnimBP");

	UInteractive_Waypoint_Base_AnimBP_C_ExecuteUbergraph_Interactive_Waypoint_Base_AnimBP_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
