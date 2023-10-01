// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_APhysDeath_Varkid_Death_B_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function APhysDeath_Varkid_Death_B.APhysDeath_Varkid_Death_B_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAPhysDeath_Varkid_Death_B_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function APhysDeath_Varkid_Death_B.APhysDeath_Varkid_Death_B_C.OnBegin");

	UAPhysDeath_Varkid_Death_B_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function APhysDeath_Varkid_Death_B.APhysDeath_Varkid_Death_B_C.ExecuteUbergraph_APhysDeath_Varkid_Death_B
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UAPhysDeath_Varkid_Death_B_C::ExecuteUbergraph_APhysDeath_Varkid_Death_B(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function APhysDeath_Varkid_Death_B.APhysDeath_Varkid_Death_B_C.ExecuteUbergraph_APhysDeath_Varkid_Death_B");

	UAPhysDeath_Varkid_Death_B_C_ExecuteUbergraph_APhysDeath_Varkid_Death_B_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
