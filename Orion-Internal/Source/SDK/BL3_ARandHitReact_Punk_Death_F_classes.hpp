#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARandHitReact_Punk_Death_F_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARandHitReact_Punk_Death_F.ARandHitReact_Punk_Death_F_C
// 0x0000 (0x0070 - 0x0070)
class UARandHitReact_Punk_Death_F_C : public UGbxAction_RandomContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARandHitReact_Punk_Death_F.ARandHitReact_Punk_Death_F_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
