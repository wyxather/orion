#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_DLC1_EchoLog_Trashtown7_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_DLC1_EchoLog_Trashtown7.Challenge_DLC1_EchoLog_Trashtown7_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_DLC1_EchoLog_Trashtown7_C : public UChallenge_Discovery_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_DLC1_EchoLog_Trashtown7.Challenge_DLC1_EchoLog_Trashtown7_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
