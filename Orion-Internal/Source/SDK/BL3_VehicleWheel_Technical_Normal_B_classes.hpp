#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_VehicleWheel_Technical_Normal_B_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VehicleWheel_Technical_Normal_B.VehicleWheel_Technical_Normal_B_C
// 0x0000 (0x0130 - 0x0130)
class UVehicleWheel_Technical_Normal_B_C : public UVehicleWheel_Technical_Normal_F_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VehicleWheel_Technical_Normal_B.VehicleWheel_Technical_Normal_B_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
