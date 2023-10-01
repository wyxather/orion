#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Init_Event02_MissionDropConditional_R_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Init_Event02_MissionDropConditional_R.Init_Event02_MissionDropConditional_R_C
// 0x0008 (0x0038 - 0x0030)
class UInit_Event02_MissionDropConditional_R_C : public UAttributeInitializer
{
public:
	class UGbxCondition*                               ConditionIsSeasonObjActive;                               // 0x0030(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Init_Event02_MissionDropConditional_R.Init_Event02_MissionDropConditional_R_C");
		return ptr;
	}


	float CalculateAttributeInitialValue(class UObject** Context);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
