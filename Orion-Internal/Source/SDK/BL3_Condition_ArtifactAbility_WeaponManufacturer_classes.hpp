#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Condition_ArtifactAbility_WeaponManufacturer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Condition_ArtifactAbility_WeaponManufacturer.Condition_ArtifactAbility_WeaponManufacturer_C
// 0x0008 (0x0090 - 0x0088)
class UCondition_ArtifactAbility_WeaponManufacturer_C : public UGbxCondition_Blueprint
{
public:
	class UOakManufacturerData*                        ActiveWeaponManufacturer;                                 // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Condition_ArtifactAbility_WeaponManufacturer.Condition_ArtifactAbility_WeaponManufacturer_C");
		return ptr;
	}


	bool EvaluateCondition(class UObject** Context, class UObject** OptionalContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
