// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Crew_Ger_Cemetery_00_AllComplete_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Challenge_Crew_Ger_Cemetery_00_AllComplete.Challenge_Crew_Ger_Cemetery_00_AllComplete_C.CompletedChallenge
// (Event, Public, BlueprintEvent)
// Parameters:
// class AGbxPlayerController**   CompletedPlayer                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Crew_Ger_Cemetery_00_AllComplete_C::CompletedChallenge(class AGbxPlayerController** CompletedPlayer)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Crew_Ger_Cemetery_00_AllComplete.Challenge_Crew_Ger_Cemetery_00_AllComplete_C.CompletedChallenge");

	UChallenge_Crew_Ger_Cemetery_00_AllComplete_C_CompletedChallenge_Params params;
	params.CompletedPlayer = CompletedPlayer;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Challenge_Crew_Ger_Cemetery_00_AllComplete.Challenge_Crew_Ger_Cemetery_00_AllComplete_C.ExecuteUbergraph_Challenge_Crew_Ger_Cemetery_00_AllComplete
// ()
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UChallenge_Crew_Ger_Cemetery_00_AllComplete_C::ExecuteUbergraph_Challenge_Crew_Ger_Cemetery_00_AllComplete(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Challenge_Crew_Ger_Cemetery_00_AllComplete.Challenge_Crew_Ger_Cemetery_00_AllComplete_C.ExecuteUbergraph_Challenge_Crew_Ger_Cemetery_00_AllComplete");

	UChallenge_Crew_Ger_Cemetery_00_AllComplete_C_ExecuteUbergraph_Challenge_Crew_Ger_Cemetery_00_AllComplete_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
