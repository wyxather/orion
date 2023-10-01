// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_PS_MAL_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPWeap_PS_MAL.BPWeap_PS_MAL_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPWeap_PS_MAL_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_MAL.BPWeap_PS_MAL_C.UserConstructionScript");

	ABPWeap_PS_MAL_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_MAL.BPWeap_PS_MAL_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABPWeap_PS_MAL_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_MAL.BPWeap_PS_MAL_C.ReceiveBeginPlay");

	ABPWeap_PS_MAL_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BPWeap_PS_MAL.BPWeap_PS_MAL_C.ExecuteUbergraph_BPWeap_PS_MAL
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABPWeap_PS_MAL_C::ExecuteUbergraph_BPWeap_PS_MAL(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BPWeap_PS_MAL.BPWeap_PS_MAL_C.ExecuteUbergraph_BPWeap_PS_MAL");

	ABPWeap_PS_MAL_C_ExecuteUbergraph_BPWeap_PS_MAL_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
