#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPInvPart_PS_Mal_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPInvPart_PS_Mal.BPInvPart_PS_MAL_C
// 0x0000 (0x0268 - 0x0268)
class UBPInvPart_PS_MAL_C : public UWeaponPartData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPInvPart_PS_Mal.BPInvPart_PS_MAL_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
