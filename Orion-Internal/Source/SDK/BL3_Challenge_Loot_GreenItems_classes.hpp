#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Loot_GreenItems_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Loot_GreenItems.Challenge_Loot_GreenItems_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_Loot_GreenItems_C : public UOakChallenge
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Loot_GreenItems.Challenge_Loot_GreenItems_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
