#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Crew_Geranium_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Crew_Geranium.Challenge_Crew_Geranium_C
// 0x00DC (0x033C - 0x0260)
class UChallenge_Crew_Geranium_C : public UOakChallenge
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0260(0x0008) (Transient, DuplicateTransient)
	struct FDialogTimeSlotReference                    CrewActivationDialog;                                     // 0x0268(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDialogTimeSlotReference                    CrewCompletionDialog;                                     // 0x02A8(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDialogTimeSlotReference                    CrewIntroDialog;                                          // 0x02E8(0x0040) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UGameStatData*                               CrewIntroStat;                                            // 0x0328(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TEnumAsByte<Enum_CrewChallengeType_Geranium>       Enum_CrewChallenge;                                       // 0x0330(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0331(0x0003) MISSED OFFSET
	float                                              ActivationStartDelay;                                     // 0x0334(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CompletionStartDelay;                                     // 0x0338(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Crew_Geranium.Challenge_Crew_Geranium_C");
		return ptr;
	}


	void PlayActivationAudio();
	void ShowTutorialPopup(class UGameInstance* GameInstance, class AOakPlayerController* TargetPlayer, bool* NewParam);
	void PlayCompletionAudio(class AGbxPlayerController* CompletedPlayer, bool* PlayedAudio);
	void OnInitChallengeInstance(class UChallengesComponent** OwningChallenges, class AGbxCharacter** AssociatedCharacter);
	void OnChallengeActivated();
	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void ExecuteUbergraph_Challenge_Crew_Geranium(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
