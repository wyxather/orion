#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_FalconStrike_Fire_Mod1_L_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_FalconStrike_Fire_Mod1_L.Action_FalconStrike_Fire_Mod1_L_C
// 0x0000 (0x0218 - 0x0218)
class UAction_FalconStrike_Fire_Mod1_L_C : public UOakAction_Anim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_FalconStrike_Fire_Mod1_L.Action_FalconStrike_Fire_Mod1_L_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
