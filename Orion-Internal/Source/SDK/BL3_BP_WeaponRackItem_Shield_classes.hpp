#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_WeaponRackItem_Shield_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_WeaponRackItem_Shield.BP_WeaponRackItem_Shield_C
// 0x0000 (0x04B0 - 0x04B0)
class ABP_WeaponRackItem_Shield_C : public ABP_WeaponRackItem_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_WeaponRackItem_Shield.BP_WeaponRackItem_Shield_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
