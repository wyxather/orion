#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPInvPart_AR_DAL_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPInvPart_AR_DAL.BPInvPart_AR_DAL_C
// 0x0000 (0x0268 - 0x0268)
class UBPInvPart_AR_DAL_C : public UWeaponPartData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPInvPart_AR_DAL.BPInvPart_AR_DAL_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
