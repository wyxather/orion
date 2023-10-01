#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Siren_PhaseOrb_Flourish_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Siren_PhaseOrb_Flourish.Action_Siren_PhaseOrb_Flourish_C
// 0x0008 (0x0220 - 0x0218)
class UAction_Siren_PhaseOrb_Flourish_C : public UOakAction_Anim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0218(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Siren_PhaseOrb_Flourish.Action_Siren_PhaseOrb_Flourish_C");
		return ptr;
	}


	void OnEnd(EGbxActionEndState* ActionEndState, class AActor** Actor);
	void ExecuteUbergraph_Action_Siren_PhaseOrb_Flourish(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
