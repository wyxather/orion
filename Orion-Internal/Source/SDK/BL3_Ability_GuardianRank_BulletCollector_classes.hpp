#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_GuardianRank_BulletCollector_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_GuardianRank_BulletCollector.Ability_GuardianRank_BulletCollector_C
// 0x0000 (0x01B0 - 0x01B0)
class UAbility_GuardianRank_BulletCollector_C : public UOakPassiveAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_GuardianRank_BulletCollector.Ability_GuardianRank_BulletCollector_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
