#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPInvPartSet_DAL_SM_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPInvPartSet_DAL_SM.BPInvPartSet_DAL_SM_C
// 0x0000 (0x00A0 - 0x00A0)
class UBPInvPartSet_DAL_SM_C : public UInventoryPartSetData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPInvPartSet_DAL_SM.BPInvPartSet_DAL_SM_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
