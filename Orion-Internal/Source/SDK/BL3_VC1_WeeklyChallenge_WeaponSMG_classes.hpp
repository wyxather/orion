#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_VC1_WeeklyChallenge_WeaponSMG_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass VC1_WeeklyChallenge_WeaponSMG.VC1_WeeklyChallenge_WeaponSMG_C
// 0x0000 (0x0260 - 0x0260)
class UVC1_WeeklyChallenge_WeaponSMG_C : public UVC1_WeeklyChallenge_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass VC1_WeeklyChallenge_WeaponSMG.VC1_WeeklyChallenge_WeaponSMG_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
