#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_APhys_Enemy_VehicleBump_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass APhys_Enemy_VehicleBump.APhys_Enemy_VehicleBump_C
// 0x0000 (0x0188 - 0x0188)
class UAPhys_Enemy_VehicleBump_C : public UGbxAction_Ragdoll
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass APhys_Enemy_VehicleBump.APhys_Enemy_VehicleBump_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
