#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Map_Outskirts_2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Map_Outskirts_2.Challenge_Map_Outskirts_1_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_Map_Outskirts_1_C : public UChallenge_Map_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Map_Outskirts_2.Challenge_Map_Outskirts_1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
