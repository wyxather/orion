#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_FastTravel_DesertVault_Parent_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_FastTravel_DesertVault_Parent.Challenge_FastTravel_DesertVault_Parent_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_FastTravel_DesertVault_Parent_C : public UChallenge_FastTravel_Parent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_FastTravel_DesertVault_Parent.Challenge_FastTravel_DesertVault_Parent_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
