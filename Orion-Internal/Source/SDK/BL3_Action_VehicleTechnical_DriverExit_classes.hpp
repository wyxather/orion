#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_VehicleTechnical_DriverExit_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_VehicleTechnical_DriverExit.Action_VehicleTechnical_DriverExit_C
// 0x0000 (0x0220 - 0x0220)
class UAction_VehicleTechnical_DriverExit_C : public UAction_Vehicle_SharedSettings_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_VehicleTechnical_DriverExit.Action_VehicleTechnical_DriverExit_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
