#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWidget_VehicleBoostbar_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWidget_VehicleBoostbar.BPWidget_VehicleBoostbar_C
// 0x0000 (0x0650 - 0x0650)
class UBPWidget_VehicleBoostbar_C : public UGFxVehicleBoostbar
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWidget_VehicleBoostbar.BPWidget_VehicleBoostbar_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
