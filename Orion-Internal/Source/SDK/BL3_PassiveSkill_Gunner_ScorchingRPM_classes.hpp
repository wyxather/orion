#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Gunner_ScorchingRPM_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Gunner_ScorchingRPM.PassiveSkill_Gunner_ScorchingRPM_C
// 0x0000 (0x01B0 - 0x01B0)
class UPassiveSkill_Gunner_ScorchingRPM_C : public UOakPassiveAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Gunner_ScorchingRPM.PassiveSkill_Gunner_ScorchingRPM_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
