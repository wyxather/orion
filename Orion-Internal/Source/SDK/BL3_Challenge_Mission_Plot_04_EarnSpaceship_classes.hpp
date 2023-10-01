#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Mission_Plot_04_EarnSpaceship_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Mission_Plot_04_EarnSpaceship.Challenge_Mission_Plot_04_EarnSpaceship_C
// 0x0008 (0x0278 - 0x0270)
class UChallenge_Mission_Plot_04_EarnSpaceship_C : public UChallenge_Mission_Plot_Achievement_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0270(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Mission_Plot_04_EarnSpaceship.Challenge_Mission_Plot_04_EarnSpaceship_C");
		return ptr;
	}


	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void ExecuteUbergraph_Challenge_Mission_Plot_04_EarnSpaceship(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
