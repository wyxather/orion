#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Challenge_VaultReward_Resonator_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Challenge_VaultReward_Resonator.Challenge_VaultReward_Resonator_C
// 0x0000 (0x0260 - 0x0260)
class UChallenge_VaultReward_Resonator_C : public UChallenge_VaultReward_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Challenge_VaultReward_Resonator.Challenge_VaultReward_Resonator_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
