#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPInvPart_GrenadeMod_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPInvPart_GrenadeMod.BPInvPart_GrenadeMod_C
// 0x0000 (0x0250 - 0x0250)
class UBPInvPart_GrenadeMod_C : public UInventoryPartData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPInvPart_GrenadeMod.BPInvPart_GrenadeMod_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
