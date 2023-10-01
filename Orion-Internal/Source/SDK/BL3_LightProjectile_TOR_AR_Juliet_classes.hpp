#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_TOR_AR_Juliet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_TOR_AR_Juliet.LightProjectile_TOR_AR_Juliet_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_TOR_AR_Juliet_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_TOR_AR_Juliet.LightProjectile_TOR_AR_Juliet_C");
		return ptr;
	}


	void OnImpact(class ULightProjectile** Projectile, struct FHitResult* Hit);
	void OnLifetimeExpired(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
