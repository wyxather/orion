#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAug_BigBoomBlaster_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShieldAug_BigBoomBlaster.ShieldAug_BigBoomBlaster_C
// 0x0000 (0x0160 - 0x0160)
class UShieldAug_BigBoomBlaster_C : public UShieldAugment_ChargeSpawner
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAug_BigBoomBlaster.ShieldAug_BigBoomBlaster_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
