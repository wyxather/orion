#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Siren_Healing_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProjectile_Siren_Healing.LightProjectile_Siren_Healing_C
// 0x0000 (0x0340 - 0x0340)
class ULightProjectile_Siren_Healing_C : public ULightProjectile_Player_Healing_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProjectile_Siren_Healing.LightProjectile_Siren_Healing_C");
		return ptr;
	}


	void TryToEnabledHoming(class UOakLightProjectile* Projectile);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
