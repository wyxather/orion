#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_TOR_SG_CriticalThug_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LightProjectile_TOR_SG_CriticalThug.LightProjectile_TOR_SG_CriticalThug_C.OnImpact
struct ULightProjectile_TOR_SG_CriticalThug_C_OnImpact_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
};

// Function LightProjectile_TOR_SG_CriticalThug.LightProjectile_TOR_SG_CriticalThug_C.OnDamage
struct ULightProjectile_TOR_SG_CriticalThug_C_OnDamage_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
	bool*                                              bCritical;                                                // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_TOR_SG_CriticalThug.LightProjectile_TOR_SG_CriticalThug_C.OnLifetimeExpired
struct ULightProjectile_TOR_SG_CriticalThug_C_OnLifetimeExpired_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
