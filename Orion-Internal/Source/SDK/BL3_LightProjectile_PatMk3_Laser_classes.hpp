#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_PatMk3_Laser_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_PatMk3_Laser.LightProjectile_PatMk3_Laser_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_PatMk3_Laser_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_PatMk3_Laser.LightProjectile_PatMk3_Laser_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
