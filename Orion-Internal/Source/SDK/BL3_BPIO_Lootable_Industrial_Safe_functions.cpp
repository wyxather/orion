// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPIO_Lootable_Industrial_Safe_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BPIO_Lootable_Industrial_Safe.BPIO_Lootable_Industrial_Safe_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)

void ABPIO_Lootable_Industrial_Safe_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BPIO_Lootable_Industrial_Safe.BPIO_Lootable_Industrial_Safe_C.UserConstructionScript");

	ABPIO_Lootable_Industrial_Safe_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
