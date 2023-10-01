#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_VehicleDriver_Technical_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AIActionBlueprintGeneratedClass AITree_VehicleDriver_Technical.AITree_VehicleDriver_Technical_C
// 0x0008 (0x0178 - 0x0170)
class UAITree_VehicleDriver_Technical_C : public UAIAction_AITree
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AIActionBlueprintGeneratedClass AITree_VehicleDriver_Technical.AITree_VehicleDriver_Technical_C");
		return ptr;
	}


	void ExecuteUbergraph_AITree_VehicleDriver_Technical(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
