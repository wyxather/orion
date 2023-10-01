#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_BladeFury_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_BladeFury.LightProjectile_BladeFury_C
// 0x0000 (0x0490 - 0x0490)
class ULightProjectile_BladeFury_C : public ULightProjectile_JAK_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_BladeFury.LightProjectile_BladeFury_C");
		return ptr;
	}


	void OnBegin(class ULightProjectile** Projectile);
	void OnDamage(class ULightProjectile** Projectile, struct FHitResult* Hit, bool* bCritical);
	void OnLifetimeExpired(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
