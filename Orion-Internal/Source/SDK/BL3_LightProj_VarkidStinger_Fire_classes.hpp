#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProj_VarkidStinger_Fire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProj_VarkidStinger_Fire.LightProj_VarkidStinger_Fire_C
// 0x0000 (0x0340 - 0x0340)
class ULightProj_VarkidStinger_Fire_C : public ULightProj_VarkidStinger_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProj_VarkidStinger_Fire.LightProj_VarkidStinger_Fire_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
