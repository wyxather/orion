#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_HealthCalc_IO_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_HealthCalc_IO.Init_HealthCalc_IO_C
// 0x0018 (0x0048 - 0x0030)
class UInit_HealthCalc_IO_C : public UAttributeInitializer
{
public:
	struct FDataTableValueHandle                       IO_HealthScaler;                                          // 0x0030(0x0018) (Edit, BlueprintVisible, DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_HealthCalc_IO.Init_HealthCalc_IO_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
