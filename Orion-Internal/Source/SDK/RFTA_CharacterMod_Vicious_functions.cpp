// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_CharacterMod_Vicious_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function CharacterMod_Vicious.CharacterMod_Vicious_C.OnComputeStats
// 00007FF6F8B35350
// (Event, Public, BlueprintEvent)

void UCharacterMod_Vicious_C::OnComputeStats()
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Vicious.CharacterMod_Vicious_C.OnComputeStats");

	UCharacterMod_Vicious_C_OnComputeStats_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function CharacterMod_Vicious.CharacterMod_Vicious_C.ExecuteUbergraph_CharacterMod_Vicious
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacterMod_Vicious_C::ExecuteUbergraph_CharacterMod_Vicious(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function CharacterMod_Vicious.CharacterMod_Vicious_C.ExecuteUbergraph_CharacterMod_Vicious");

	UCharacterMod_Vicious_C_ExecuteUbergraph_CharacterMod_Vicious_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
