#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ADodgePicker_Enforcer_Grenade_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ADodgePicker_Enforcer_Grenade.ADodgePicker_Enforcer_Grenade_C
// 0x0000 (0x00A0 - 0x00A0)
class UADodgePicker_Enforcer_Grenade_C : public UGbxAction_DodgePicker
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ADodgePicker_Enforcer_Grenade.ADodgePicker_Enforcer_Grenade_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
