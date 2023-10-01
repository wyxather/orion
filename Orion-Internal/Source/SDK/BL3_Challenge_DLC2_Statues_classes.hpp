#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_DLC2_Statues_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_DLC2_Statues.Challenge_DLC2_Statues_C
// 0x0010 (0x0348 - 0x0338)
class UChallenge_DLC2_Statues_C : public UDLC2_Challenge_Crew_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	class UGameStatData*                               MancubusRewardStat;                                       // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_DLC2_Statues.Challenge_DLC2_Statues_C");
		return ptr;
	}


	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void ExecuteUbergraph_Challenge_DLC2_Statues(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
