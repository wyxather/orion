#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Damage_Varkid_StingerImpact_Corrosive_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Damage_Varkid_StingerImpact_Corrosive.Damage_Varkid_StingerImpact_Corrosive_C
// 0x0000 (0x0310 - 0x0310)
class UDamage_Varkid_StingerImpact_Corrosive_C : public UDamage_Varkid_StingerImpact_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Damage_Varkid_StingerImpact_Corrosive.Damage_Varkid_StingerImpact_Corrosive_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
