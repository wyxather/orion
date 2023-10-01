#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Operative_DLCSkill_8_AccuracyCalc_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_Operative_DLCSkill_8_AccuracyCalc.Init_Operative_DLCSkill_8_AccuracyCalc_C
// 0x0000 (0x0030 - 0x0030)
class UInit_Operative_DLCSkill_8_AccuracyCalc_C : public UInit_Operative_KillSkill_Parent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_Operative_DLCSkill_8_AccuracyCalc.Init_Operative_DLCSkill_8_AccuracyCalc_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
