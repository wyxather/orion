#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_SMG_PredatoryLending_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_SMG_PredatoryLending.LightProjectile_SMG_PredatoryLending_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_SMG_PredatoryLending_C : public ULightProjectile_SMG_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_SMG_PredatoryLending.LightProjectile_SMG_PredatoryLending_C");
		return ptr;
	}


	void OnImpact(class ULightProjectile** Projectile, struct FHitResult* Hit);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
