#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightBeam_Weapon_Fork2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightBeam_Weapon_Fork2.LightBeam_Weapon_Fork2_C
// 0x0000 (0x01C8 - 0x01C8)
class ULightBeam_Weapon_Fork2_C : public UOakLightBeamData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightBeam_Weapon_Fork2.LightBeam_Weapon_Fork2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
