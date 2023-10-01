#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_VarkidPod_Idle_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_VarkidPod_Idle.A_VarkidPod_Idle_C
// 0x0008 (0x0250 - 0x0248)
class UA_VarkidPod_Idle_C : public UGBXAction_EnemyVariableParent_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0248(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_VarkidPod_Idle.A_VarkidPod_Idle_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_A_VarkidPod_Idle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
