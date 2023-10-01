#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ShieldAug_Recharge_Delay_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ShieldAug_Recharge_Delay.ShieldAug_Recharge_Delay_C
// 0x0018 (0x0040 - 0x0028)
class UShieldAug_Recharge_Delay_C : public UAttributeValueResolver
{
public:
	struct FDataTableRowHandle                         Table_ShieldAug;                                          // 0x0028(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	class UGbxAttributeData*                           Attribute_AugTier;                                        // 0x0038(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAug_Recharge_Delay.ShieldAug_Recharge_Delay_C");
		return ptr;
	}


	bool SetValueForAttribute(class UGbxAttributeData** Attribute, class UObject** Context, float* Value);
	float GetValueForAttribute(class UGbxAttributeData** Attribute, class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
