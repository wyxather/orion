#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProj_DAL_SR_Fbolt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass LightProj_DAL_SR_Fbolt.LightProj_DAL_SR_Fbolt_C
// 0x0000 (0x0340 - 0x0340)
class ULightProj_DAL_SR_Fbolt_C : public UOakLightProjectileData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass LightProj_DAL_SR_Fbolt.LightProj_DAL_SR_Fbolt_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
