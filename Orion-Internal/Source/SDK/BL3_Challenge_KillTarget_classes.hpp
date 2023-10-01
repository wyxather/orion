#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_KillTarget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_KillTarget.Challenge_KillTarget_C
// 0x0018 (0x0350 - 0x0338)
class UChallenge_KillTarget_C : public UChallenge_Crew_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0338(0x0008) (Transient, DuplicateTransient)
	struct FDataTableRowHandle                         KillMailRow;                                              // 0x0340(0x0010) (Edit, BlueprintVisible)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_KillTarget.Challenge_KillTarget_C");
		return ptr;
	}


	void CompletedChallenge(class AGbxPlayerController** CompletedPlayer);
	void ExecuteUbergraph_Challenge_KillTarget(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
