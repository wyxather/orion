#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_PetJabbermon_RocketLauncher_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C
// 0x0008 (0x0230 - 0x0228)
class UA_PetJabbermon_RocketLauncher_C : public UA_Pet_AttackCommand_Parent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0228(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_PetJabbermon_RocketLauncher.A_PetJabbermon_RocketLauncher_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void SpawnLauncher();
	void FireLauncher();
	void StartLauncherDespawn();
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_A_PetJabbermon_RocketLauncher(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
