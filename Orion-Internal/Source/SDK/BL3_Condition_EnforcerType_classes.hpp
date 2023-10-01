#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Condition_EnforcerType_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Condition_EnforcerType.Condition_EnforcerType_C
// 0x0001 (0x0089 - 0x0088)
class UCondition_EnforcerType_C : public UGbxCondition_Blueprint
{
public:
	TEnumAsByte<Enum_EnforcerVariants>                 InputType;                                                // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Condition_EnforcerType.Condition_EnforcerType_C");
		return ptr;
	}


	bool EvaluateCondition(class UObject** Context, class UObject** OptionalContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
