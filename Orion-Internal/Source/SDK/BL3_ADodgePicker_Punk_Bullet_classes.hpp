#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ADodgePicker_Punk_Bullet_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ADodgePicker_Punk_Bullet.ADodgePicker_Punk_Bullet_C
// 0x0000 (0x00A0 - 0x00A0)
class UADodgePicker_Punk_Bullet_C : public UGbxAction_DodgePicker
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ADodgePicker_Punk_Bullet.ADodgePicker_Punk_Bullet_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
