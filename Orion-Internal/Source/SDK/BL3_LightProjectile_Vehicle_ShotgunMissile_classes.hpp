#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Vehicle_ShotgunMissile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Vehicle_ShotgunMissile.LightProjectile_Vehicle_ShotgunMissile_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_Vehicle_ShotgunMissile_C : public UWeapon_Default_LightProjectile_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Vehicle_ShotgunMissile.LightProjectile_Vehicle_ShotgunMissile_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
