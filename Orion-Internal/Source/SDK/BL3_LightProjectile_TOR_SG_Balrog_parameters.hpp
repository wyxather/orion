#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_TOR_SG_Balrog_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function LightProjectile_TOR_SG_Balrog.LightProjectile_TOR_SG_Balrog_C.OnLifetimeExpired
struct ULightProjectile_TOR_SG_Balrog_C_OnLifetimeExpired_Params
{
	class ULightProjectile**                           Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function LightProjectile_TOR_SG_Balrog.LightProjectile_TOR_SG_Balrog_C.Boom
struct ULightProjectile_TOR_SG_Balrog_C_Boom_Params
{
	class UOakLightProjectile*                         Projectile;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
