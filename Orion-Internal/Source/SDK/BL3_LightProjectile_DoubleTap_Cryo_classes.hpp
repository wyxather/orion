#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_DoubleTap_Cryo_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_DoubleTap_Cryo.LightProjectile_DoubleTap_Cryo_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_DoubleTap_Cryo_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_DoubleTap_Cryo.LightProjectile_DoubleTap_Cryo_C");
		return ptr;
	}


	void OnDamage(class ULightProjectile** Projectile, struct FHitResult* Hit, bool* bCritical);
	void OnBegin(class ULightProjectile** Projectile);
	void OnLifetimeExpired(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
