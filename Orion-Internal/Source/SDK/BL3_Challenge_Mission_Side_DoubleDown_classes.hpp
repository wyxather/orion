#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Mission_Side_DoubleDown_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Mission_Side_DoubleDown.Challenge_Mission_Side_DoubleDown_C
// 0x0000 (0x0268 - 0x0268)
class UChallenge_Mission_Side_DoubleDown_C : public UChallenge_Mission_Side_Main_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Mission_Side_DoubleDown.Challenge_Mission_Side_DoubleDown_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
