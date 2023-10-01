#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Ability_Kaos_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ability_Kaos.Ability_Kaos_C
// 0x0038 (0x0130 - 0x00F8)
class UAbility_Kaos_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      Killed;                                                   // 0x0100(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_Ability_BOTD;// 0x0108(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ability_Kaos.Ability_Kaos_C");
		return ptr;
	}


	void OnCausedDeath_Event(class UDamageComponent* Damaged, const struct FCausedDeathDetails& Details);
	void OnActivated();
	void ExecuteUbergraph_Ability_Kaos(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
