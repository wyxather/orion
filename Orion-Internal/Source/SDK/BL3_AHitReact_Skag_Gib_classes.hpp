#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AHitReact_Skag_Gib_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AHitReact_Skag_Gib.AHitReact_Skag_Gib_C
// 0x0000 (0x08F0 - 0x08F0)
class UAHitReact_Skag_Gib_C : public UOakAction_Gib
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AHitReact_Skag_Gib.AHitReact_Skag_Gib_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
