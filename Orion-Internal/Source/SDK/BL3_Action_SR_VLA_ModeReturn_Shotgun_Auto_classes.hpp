#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_SR_VLA_ModeReturn_Shotgun_Auto_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_SR_VLA_ModeReturn_Shotgun_Auto.Action_SR_VLA_ModeReturn_Shotgun_Auto_C
// 0x0000 (0x0218 - 0x0218)
class UAction_SR_VLA_ModeReturn_Shotgun_Auto_C : public UOakAction_Anim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_SR_VLA_ModeReturn_Shotgun_Auto.Action_SR_VLA_ModeReturn_Shotgun_Auto_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
