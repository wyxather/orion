#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Damage_Tink_Anointed_MeleeOverTime_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Damage_Tink_Anointed_MeleeOverTime.Damage_Tink_Anointed_MeleeOverTime_C
// 0x0000 (0x0310 - 0x0310)
class UDamage_Tink_Anointed_MeleeOverTime_C : public UOakDamageData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Damage_Tink_Anointed_MeleeOverTime.Damage_Tink_Anointed_MeleeOverTime_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
