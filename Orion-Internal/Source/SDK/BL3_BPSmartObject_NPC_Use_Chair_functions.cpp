// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPSmartObject_NPC_Use_Chair_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPSmartObject_NPC_Use_Chair.BPSmartObject_NPC_Use_Chair_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPSmartObject_NPC_Use_Chair_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPSmartObject_NPC_Use_Chair.BPSmartObject_NPC_Use_Chair_C.UserConstructionScript");

	ABPSmartObject_NPC_Use_Chair_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
