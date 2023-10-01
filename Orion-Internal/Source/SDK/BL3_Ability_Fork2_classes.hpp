#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Fork2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Fork2.Ability_Fork2_C
// 0x0038 (0x0130 - 0x00F8)
class UAbility_Fork2_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FOakAbilityResourceController_WeaponShotModifier RsrcCntrlr_OakAbilityResourceController_WeaponShotModifier_Ability_Fork;// 0x0100(0x0028)
	class AOakCharacter*                               DmgCauser;                                                // 0x0128(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Fork2.Ability_Fork2_C");
		return ptr;
	}


	void OnActivated();
	void OnDeactivated();
	void ExecuteUbergraph_Ability_Fork2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
