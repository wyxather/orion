#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ImpactEffect_Projectile_Root_Rot_Bomb_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ImpactEffect_Projectile_Root_Rot_Bomb.ImpactEffect_Projectile_Root_Rot_Bomb_C
// 0x0008 (0x0490 - 0x0488)
class AImpactEffect_Projectile_Root_Rot_Bomb_C : public AImpactEffect
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0488(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ImpactEffect_Projectile_Root_Rot_Bomb.ImpactEffect_Projectile_Root_Rot_Bomb_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
