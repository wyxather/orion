#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_Collection_ActiveDeadDrop_Motorcade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_Collection_ActiveDeadDrop_Motorcade.Challenge_Collection_ActiveDeadDrop_Motorcade_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_Collection_ActiveDeadDrop_Motorcade_C : public UChallenge_Collection_ActiveDeadDrop_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_Collection_ActiveDeadDrop_Motorcade.Challenge_Collection_ActiveDeadDrop_Motorcade_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
