#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Proj_Artifact_Snowdrift_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C
// 0x0044 (0x0724 - 0x06E0)
class AProj_Artifact_Snowdrift_C : public AOakProjectile
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x06E0(0x0008) (Transient, DuplicateTransient)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x06E8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UParticleSystemComponent*                    PS_Snowdrift_Cryo_Iceball;                                // 0x06F0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USocketComponent*                            Socket_Splat;                                             // 0x06F8(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UProjectileHomingComponent*                  ProjectileHoming;                                         // 0x0700(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class USphereComponent*                            SphereCollision;                                          // 0x0708(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWalkingProjectileMovementComponent*         WalkingProjectileMovement;                                // 0x0710(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class AActor*                                      IceBall_Target;                                           // 0x0718(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData)
	float                                              FuseTime;                                                 // 0x0720(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Proj_Artifact_Snowdrift.Proj_Artifact_Snowdrift_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnHitDamagableObject(struct FHitResult* Hit);
	void OnExplode();
	void BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectilePostLastBounceDelegate__DelegateSignature_Proj_ApeCryo_IceBall(const struct FHitResult& ImpactResult);
	void BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature_Proj_Artifact_Snowdrift(const struct FHitResult& ImpactResult);
	void BndEvt__WalkingProjectileMovement_K2Node_ComponentBoundEvent_1_OnWalkingProjectileHitUnwalkableSurface__DelegateSignature_Proj_Artifact_Snowdrift(const struct FHitResult& ImpactResult);
	void ExecuteUbergraph_Proj_Artifact_Snowdrift(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
