#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_EridianWriting_Pandora_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_EridianWriting_Pandora.Challenge_EridianWriting_Pandora_C
// 0x0000 (0x02E8 - 0x02E8)
class UChallenge_EridianWriting_Pandora_C : public UChallenge_EridianWriting_Planet_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_EridianWriting_Pandora.Challenge_EridianWriting_Pandora_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
