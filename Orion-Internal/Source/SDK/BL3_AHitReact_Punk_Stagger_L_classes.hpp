#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_Punk_Stagger_L_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AHitReact_Punk_Stagger_L.AHitReact_Punk_Stagger_L_C
// 0x0000 (0x0238 - 0x0238)
class UAHitReact_Punk_Stagger_L_C : public UOakAction_RandomAnim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AHitReact_Punk_Stagger_L.AHitReact_Punk_Stagger_L_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
