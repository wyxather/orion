#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_FrozenMist_Projectile_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mod_FrozenMist_Projectile.Mod_FrozenMist_Projectile_C
// 0x0028 (0x04B0 - 0x0488)
class AMod_FrozenMist_Projectile_C : public AProjectileSphere
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0488(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                        Mesh;                                                     // 0x0490(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                             Weapon_Mod_FrozenMist_Shoot_SC;                           // 0x0498(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*                    VFX_Trail;                                                // 0x04A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatorComponent*                           Rotator;                                                  // 0x04A8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mod_FrozenMist_Projectile.Mod_FrozenMist_Projectile_C");
		return ptr;
	}


	void OnProjectileHit(struct FHitResult* Hit);
	void ExecuteUbergraph_Mod_FrozenMist_Projectile(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
