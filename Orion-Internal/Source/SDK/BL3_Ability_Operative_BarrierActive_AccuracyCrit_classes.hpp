#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Operative_BarrierActive_AccuracyCrit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Operative_BarrierActive_AccuracyCrit.Ability_Operative_BarrierActive_AccuracyCrit_C
// 0x0000 (0x0218 - 0x0218)
class UAbility_Operative_BarrierActive_AccuracyCrit_C : public UAbility_AnointParent_Operative_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Operative_BarrierActive_AccuracyCrit.Ability_Operative_BarrierActive_AccuracyCrit_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
