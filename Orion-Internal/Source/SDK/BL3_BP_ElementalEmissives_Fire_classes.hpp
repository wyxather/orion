#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ElementalEmissives_Fire_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_ElementalEmissives_Fire.BP_ElementalEmissives_Fire_C
// 0x0000 (0x00B8 - 0x00B8)
class UBP_ElementalEmissives_Fire_C : public UBP_ElementalEmissives_00_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_ElementalEmissives_Fire.BP_ElementalEmissives_Fire_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
