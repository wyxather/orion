#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_APhys_Varkid_RagdollLaunch_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass APhys_Varkid_RagdollLaunch.APhys_Varkid_RagdollLaunch_C
// 0x0008 (0x0198 - 0x0190)
class UAPhys_Varkid_RagdollLaunch_C : public UAPhys_Enemy_RagdollLaunch_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0190(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass APhys_Varkid_RagdollLaunch.APhys_Varkid_RagdollLaunch_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_APhys_Varkid_RagdollLaunch(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
