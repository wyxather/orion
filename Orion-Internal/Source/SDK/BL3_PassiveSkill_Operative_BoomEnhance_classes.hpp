#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_PassiveSkill_Operative_BoomEnhance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass PassiveSkill_Operative_BoomEnhance.PassiveSkill_Operative_BoomEnhance_C
// 0x0000 (0x01B0 - 0x01B0)
class UPassiveSkill_Operative_BoomEnhance_C : public UOakPassiveAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass PassiveSkill_Operative_BoomEnhance.PassiveSkill_Operative_BoomEnhance_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
