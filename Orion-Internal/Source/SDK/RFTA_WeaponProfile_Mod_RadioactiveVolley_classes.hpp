#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_WeaponProfile_Mod_RadioactiveVolley_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponProfile_Mod_RadioactiveVolley.WeaponProfile_Mod_RadioactiveVolley_C
// 0x0000 (0x0170 - 0x0170)
class UWeaponProfile_Mod_RadioactiveVolley_C : public URangedWeaponProfile
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponProfile_Mod_RadioactiveVolley.WeaponProfile_Mod_RadioactiveVolley_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
