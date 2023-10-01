#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakAbility_Operative_ClassMod_Unique_01_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OakAbility_Operative_ClassMod_Unique_01.OakAbility_Operative_ClassMod_Unique_01_C
// 0x0030 (0x0128 - 0x00F8)
class UOakAbility_Operative_ClassMod_Unique_01_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x00F8(0x0008) (Transient, DuplicateTransient)
	struct FGbxAbilityResourceController_ScriptDelegate RsrcCntrlr_GbxAbilityResourceController_ScriptDelegate_OakAbility_Operative_ClassMod_Unique_01;// 0x0100(0x0028)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OakAbility_Operative_ClassMod_Unique_01.OakAbility_Operative_ClassMod_Unique_01_C");
		return ptr;
	}


	void OnActivated();
	void OnActionSkillActivated(class UOakActionAbility* ActionAbility);
	void ExecuteUbergraph_OakAbility_Operative_ClassMod_Unique_01(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
