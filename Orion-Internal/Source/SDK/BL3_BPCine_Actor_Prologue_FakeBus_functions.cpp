// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCine_Actor_Prologue_FakeBus_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPCine_Actor_Prologue_FakeBus.BPCine_Actor_Prologue_FakeBus_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPCine_Actor_Prologue_FakeBus_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPCine_Actor_Prologue_FakeBus.BPCine_Actor_Prologue_FakeBus_C.UserConstructionScript");

	ABPCine_Actor_Prologue_FakeBus_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
