#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_HeatToFireRateScale_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_HeatToFireRateScale.Ability_HeatToFireRateScale_C
// 0x0000 (0x00F8 - 0x00F8)
class UAbility_HeatToFireRateScale_C : public UOakAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_HeatToFireRateScale.Ability_HeatToFireRateScale_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
