#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeaponFireProjectileComponent_ATL_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeaponFireProjectileComponent_ATL.BPWeaponFireProjectileComponent_ATL_C
// 0x0018 (0x0970 - 0x0958)
class UBPWeaponFireProjectileComponent_ATL_C : public UWeaponFireProjectileComponent
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0958(0x0008) (Transient, DuplicateTransient)
	class ABPWeap_ATL_BaseWeapon_C*                    ATL_BaseWeapon;                                           // 0x0960(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	int                                                CurrentTargetIndex;                                       // 0x0968(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              CloseHoodDelay;                                           // 0x096C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeaponFireProjectileComponent_ATL.BPWeaponFireProjectileComponent_ATL_C");
		return ptr;
	}


	class AActor* GetLockedTarget();
	void ReceiveBeginPlay();
	void Notify_WeaponFired();
	void ExecuteUbergraph_BPWeaponFireProjectileComponent_ATL(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
