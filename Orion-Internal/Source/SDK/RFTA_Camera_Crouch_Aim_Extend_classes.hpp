#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Camera_Crouch_Aim_Extend_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Camera_Crouch_Aim_Extend.Camera_Crouch_Aim_Extend_C
// 0x0000 (0x0288 - 0x0288)
class UCamera_Crouch_Aim_Extend_C : public UThirdPersonCameraState
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Camera_Crouch_Aim_Extend.Camera_Crouch_Aim_Extend_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
