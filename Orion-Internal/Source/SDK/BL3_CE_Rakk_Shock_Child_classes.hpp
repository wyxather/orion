#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CE_Rakk_Shock_Child_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CE_Rakk_Shock_Child.CE_Rakk_Shock_Child_C
// 0x0000 (0x0148 - 0x0148)
class UCE_Rakk_Shock_Child_C : public UOakAction_CoordinatedEffect
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CE_Rakk_Shock_Child.CE_Rakk_Shock_Child_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
