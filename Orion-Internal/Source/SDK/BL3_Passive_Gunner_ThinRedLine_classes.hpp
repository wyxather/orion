#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Passive_Gunner_ThinRedLine_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Passive_Gunner_ThinRedLine.Passive_Gunner_ThinRedLine_C
// 0x0000 (0x01B0 - 0x01B0)
class UPassive_Gunner_ThinRedLine_C : public UOakPassiveAbility
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Passive_Gunner_ThinRedLine.Passive_Gunner_ThinRedLine_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
