#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_GFxOutOfBoundsWarning_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_GFxOutOfBoundsWarning.BPWidget_GFxOutOfBoundsWarning_C
// 0x0000 (0x0630 - 0x0630)
class UBPWidget_GFxOutOfBoundsWarning_C : public UGFxOutOfBoundsWarning
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_GFxOutOfBoundsWarning.BPWidget_GFxOutOfBoundsWarning_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
