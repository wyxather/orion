#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_PS_ATL_Barrel_02_Rocket_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_PS_ATL_Barrel_02_Rocket.LightProjectile_PS_ATL_Barrel_02_Rocket_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_PS_ATL_Barrel_02_Rocket_C : public ULightProjectile_ATL_SmartBullet_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_PS_ATL_Barrel_02_Rocket.LightProjectile_PS_ATL_Barrel_02_Rocket_C");
		return ptr;
	}


	void OnLifetimeExpired(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
