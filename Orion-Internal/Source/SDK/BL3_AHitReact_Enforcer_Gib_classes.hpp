#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_Enforcer_Gib_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AHitReact_Enforcer_Gib.AHitReact_Enforcer_Gib_C
// 0x0000 (0x08F0 - 0x08F0)
class UAHitReact_Enforcer_Gib_C : public UOakAction_Gib
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AHitReact_Enforcer_Gib.AHitReact_Enforcer_Gib_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
