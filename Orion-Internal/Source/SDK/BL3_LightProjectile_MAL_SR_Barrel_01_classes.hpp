#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_MAL_SR_Barrel_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_MAL_SR_Barrel_01.LightProjectile_MAL_SR_Barrel_01_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_MAL_SR_Barrel_01_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_MAL_SR_Barrel_01.LightProjectile_MAL_SR_Barrel_01_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
