#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPInvPart_JAK_AR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPInvPart_JAK_AR.BPInvPart_JAK_AR_C
// 0x0000 (0x0268 - 0x0268)
class UBPInvPart_JAK_AR_C : public UWeaponPartData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPInvPart_JAK_AR.BPInvPart_JAK_AR_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
