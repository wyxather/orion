#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_FastTravel_Wetlands2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_FastTravel_Wetlands2.Challenge_FastTravel_Wetlands2_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_FastTravel_Wetlands2_C : public UChallenge_FastTravel_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_FastTravel_Wetlands2.Challenge_FastTravel_Wetlands2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
