#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Pickup_BadReception_Fork_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Pickup_BadReception_Fork.Pickup_BadReception_Fork_C
// 0x0000 (0x0740 - 0x0740)
class APickup_BadReception_Fork_C : public ABP_OakMissionPickup_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Pickup_BadReception_Fork.Pickup_BadReception_Fork_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
