#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPChar_AI_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPChar_AI.BPChar_AI_C
// 0x0028 (0x2348 - 0x2320)
class ABPChar_AI_C : public AOakCharacter_Default
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x2320(0x0008) (Transient, DuplicateTransient)
	class UOakCharacterSoundLogicComponent*            OakCharacterSoundLogic;                                   // 0x2328(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UBP_OakAttributeComponent_C*                 BP_OakAttributeComponent;                                 // 0x2330(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UClass*                                      VehicleDriverAction;                                      // 0x2338(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UVehicleDrivingDataAsset*                    VehicleDrivingData;                                       // 0x2340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPChar_AI.BPChar_AI_C");
		return ptr;
	}


	void AIStolenProj_AttemptDetonate(bool* Success);
	void AIStolenProj_GetElementalTypeFromStolenProjectile(EOakElementalType* StolenProjectileElement);
	void AIStolenProj_AttemptDisarm(bool* Success);
	void AIStolenProj_AttemptDestroy(bool* Success);
	void AIStolenProj_AttemptAttach(const struct FName& SocketName, bool* Success);
	void AIStolenProj_AttemptReturnTo(TEnumAsByte<Enum_AIThrowAtStyle> ReturnTo, const struct FName& TargetSocket, float MaxPrediction, float Speed, float AnglePercent, const struct FRotator& DirectionOffset, const struct FVector& TargetOffset, class AActor* SpecifiedActor, const struct FVector& WorldLocation, bool* Success);
	void AIStolenProj_AttemptLerpToSocket(const struct FName& SocketToLerpTo, float LerpDuration, bool* Success);
	void AIMelee_GetElementalTypeFromMeleeWeapon(EOakElementalType* MeleeWeaponElement);
	void UserConstructionScript();
	void AIMelee_Drop(bool RequestNewMeleeWeapon);
	void AIMelee_Spawn();
	void AIMelee_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, const struct FName& TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist);
	void AIExplosive_Spawn();
	void AIExplosive_Prime();
	void AIExplosive_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, const struct FName& TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewExplosive, bool SpawnIfDoesn_tExist);
	void AIExplosive_Detonate(bool KillSelfOnDetonate, bool RequestNewExplosive, class AActor* InstigatorOverride);
	void AIExplosive_Drop(bool RequestNewExplosive, class AActor* InstigatorOverride);
	void AIExplosive_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, const struct FName& ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewExplosive, bool SpawnIfDoesntExist);
	void AIExplosive_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewExplosive, bool SpawnIfDoesntExist);
	void AIMelee_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, const struct FName& ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist);
	void AIMelee_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewMeleeWeapon, bool SpawnIfDoesntExist);
	void AIMelee_SetNewMeleeWeaponClass(class UClass* NewMeleeWeaponClass);
	void AIExplosive_SetNewExplosiveClass(class UClass* NewExplosiveClass);
	void AIShield_SetNewShieldClass(class UClass* NewShieldClass);
	void AIShield_Spawn();
	void AIShield_ThrowAtTarget(float ThrowSpeed, float ThrowAnglePercent, const struct FName& TargetSocket, const struct FVector& TargetOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewShield, bool SpawnIfDoesntExist);
	void AIShield_ThrowAtActor(class AActor* ActorToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, const struct FName& ActorSocket, const struct FVector& ActorOffset, const struct FRotator& ThrowAngleOffset, float MaxPrediction, bool RequestNewShield, bool SpawnIfDoesntExist);
	void AIShield_ThrowAtLocation(const struct FVector& LocationToThrowAt, float ThrowSpeed, float ThrowAnglePercentage, bool RequestNewShield, bool SpawnIfDoesntExist);
	void AIShield_Drop(bool RequestNewShield);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BPChar_AI(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
