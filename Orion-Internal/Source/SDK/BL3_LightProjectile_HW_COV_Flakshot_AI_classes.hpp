#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_HW_COV_Flakshot_AI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_HW_COV_Flakshot_AI.LightProjectile_HW_COV_Flakshot_AI_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_HW_COV_Flakshot_AI_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_HW_COV_Flakshot_AI.LightProjectile_HW_COV_Flakshot_AI_C");
		return ptr;
	}


	void OnExplode(class ULightProjectile** Projectile);
	void OnLifetimeExpired(class ULightProjectile** Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
