#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPInvPartSet_SG_TED_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPInvPartSet_SG_TED.BPInvPartSet_SG_TED_C
// 0x0000 (0x00A0 - 0x00A0)
class UBPInvPartSet_SG_TED_C : public UInventoryPartSetData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPInvPartSet_SG_TED.BPInvPartSet_SG_TED_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
