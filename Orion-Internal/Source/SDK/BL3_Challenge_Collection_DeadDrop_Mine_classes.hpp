#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Collection_DeadDrop_Mine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Collection_DeadDrop_Mine.Challenge_Collection_DeadDrop_Mine_C
// 0x0000 (0x0348 - 0x0348)
class UChallenge_Collection_DeadDrop_Mine_C : public UChallenge_Collection_DeadDrop_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Collection_DeadDrop_Mine.Challenge_Collection_DeadDrop_Mine_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
