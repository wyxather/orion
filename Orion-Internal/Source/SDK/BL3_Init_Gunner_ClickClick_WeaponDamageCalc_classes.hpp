#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Gunner_ClickClick_WeaponDamageCalc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_Gunner_ClickClick_WeaponDamageCalc.Init_Gunner_ClickClick_WeaponDamageCalc_C
// 0x0000 (0x0030 - 0x0030)
class UInit_Gunner_ClickClick_WeaponDamageCalc_C : public UAttributeInitializer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_Gunner_ClickClick_WeaponDamageCalc.Init_Gunner_ClickClick_WeaponDamageCalc_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
