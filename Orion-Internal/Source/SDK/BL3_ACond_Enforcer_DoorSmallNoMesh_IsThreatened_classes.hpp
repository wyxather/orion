#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ACond_Enforcer_DoorSmallNoMesh_IsThreatened_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ACond_Enforcer_DoorSmallNoMesh_IsThreatened.ACond_Enforcer_DoorSmallNoMesh_IsThreatened_C
// 0x0000 (0x0078 - 0x0078)
class UACond_Enforcer_DoorSmallNoMesh_IsThreatened_C : public UGbxAction_ConditionContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ACond_Enforcer_DoorSmallNoMesh_IsThreatened.ACond_Enforcer_DoorSmallNoMesh_IsThreatened_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
