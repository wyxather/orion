#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Condition_HasShields_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Condition_HasShields.Condition_HasShields_C
// 0x0000 (0x0088 - 0x0088)
class UCondition_HasShields_C : public UGbxCondition_Blueprint
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Condition_HasShields.Condition_HasShields_C");
		return ptr;
	}


	bool EvaluateCondition(class UObject** Context, class UObject** OptionalContext);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
