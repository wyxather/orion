#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANav_Tink_Anointed_LeapBig_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ANav_Tink_Anointed_LeapBig.ANav_Tink_Anointed_LeapBig_C
// 0x0008 (0x02F0 - 0x02E8)
class UANav_Tink_Anointed_LeapBig_C : public UGbxAction_NavJump
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02E8(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ANav_Tink_Anointed_LeapBig.ANav_Tink_Anointed_LeapBig_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void OnExit(class AActor** Actor);
	void ExecuteUbergraph_ANav_Tink_Anointed_LeapBig(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
