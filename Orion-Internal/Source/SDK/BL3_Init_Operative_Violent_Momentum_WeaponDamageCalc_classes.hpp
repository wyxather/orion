#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Operative_Violent_Momentum_WeaponDamageCalc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_Operative_Violent_Momentum_WeaponDamageCalc.Init_Operative_Violent_Momentum_WeaponDamageCalc_C
// 0x0078 (0x00A8 - 0x0030)
class UInit_Operative_Violent_Momentum_WeaponDamageCalc_C : public UInit_Operative_KillSkill_Parent_C
{
public:
	struct FRuntimeFloatCurve                          Scalar;                                                   // 0x0030(0x0078) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_Operative_Violent_Momentum_WeaponDamageCalc.Init_Operative_Violent_Momentum_WeaponDamageCalc_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
