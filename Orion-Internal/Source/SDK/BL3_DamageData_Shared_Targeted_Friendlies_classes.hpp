#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DamageData_Shared_Targeted_Friendlies_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DamageData_Shared_Targeted_Friendlies.DamageData_Shared_Targeted_Friendlies_C
// 0x0000 (0x0310 - 0x0310)
class UDamageData_Shared_Targeted_Friendlies_C : public UOakDamageData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamageData_Shared_Targeted_Friendlies.DamageData_Shared_Targeted_Friendlies_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
