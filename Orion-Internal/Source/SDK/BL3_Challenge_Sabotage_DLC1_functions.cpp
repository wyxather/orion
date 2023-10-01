// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Sabotage_DLC1_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_Sabotage_DLC1.Challenge_Sabotage_DLC1_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController**   CompletedPlayer                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Sabotage_DLC1_C::CompletedChallenge(class AGbxPlayerController** CompletedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Sabotage_DLC1.Challenge_Sabotage_DLC1_C.CompletedChallenge");

	UChallenge_Sabotage_DLC1_C_CompletedChallenge_Params params;
	params.CompletedPlayer = CompletedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Sabotage_DLC1.Challenge_Sabotage_DLC1_C.ExecuteUbergraph_Challenge_Sabotage_DLC1
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Sabotage_DLC1_C::ExecuteUbergraph_Challenge_Sabotage_DLC1(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Sabotage_DLC1.Challenge_Sabotage_DLC1_C.ExecuteUbergraph_Challenge_Sabotage_DLC1");

	UChallenge_Sabotage_DLC1_C_ExecuteUbergraph_Challenge_Sabotage_DLC1_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
