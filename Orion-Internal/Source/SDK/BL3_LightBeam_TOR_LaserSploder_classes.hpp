#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightBeam_TOR_LaserSploder_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightBeam_TOR_LaserSploder.LightBeam_TOR_LaserSploder_C
// 0x0000 (0x01C8 - 0x01C8)
class ULightBeam_TOR_LaserSploder_C : public UOakLightBeamData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightBeam_TOR_LaserSploder.LightBeam_TOR_LaserSploder_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
