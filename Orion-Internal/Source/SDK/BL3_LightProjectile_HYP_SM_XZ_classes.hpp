#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_HYP_SM_XZ_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_HYP_SM_XZ.LightProjectile_HYP_SM_XZ_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_HYP_SM_XZ_C : public ULightProjectile_SMG_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_HYP_SM_XZ.LightProjectile_HYP_SM_XZ_C");
		return ptr;
	}


	void OnDamage(class ULightProjectile** Projectile, struct FHitResult* Hit, bool* bCritical);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
