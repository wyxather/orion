#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Mood_Embarrased_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Mood_Embarrased.Action_Mood_Embarrased_C
// 0x0008 (0x03C0 - 0x03B8)
class UAction_Mood_Embarrased_C : public UGbxAction_Loop
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03B8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Mood_Embarrased.Action_Mood_Embarrased_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_Action_Mood_Embarrased(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
