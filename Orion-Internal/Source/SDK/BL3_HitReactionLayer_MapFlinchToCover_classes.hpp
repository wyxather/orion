#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_HitReactionLayer_MapFlinchToCover_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass HitReactionLayer_MapFlinchToCover.HitReactionLayer_MapFlinchToCover_C
// 0x0000 (0x0040 - 0x0040)
class UHitReactionLayer_MapFlinchToCover_C : public UHitReactionLayer_Map
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass HitReactionLayer_MapFlinchToCover.HitReactionLayer_MapFlinchToCover_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
