#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Dodge_Ape_Grenade_IdleR_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dodge_Ape_Grenade_IdleR.Dodge_Ape_Grenade_IdleR_C
// 0x0000 (0x0218 - 0x0218)
class UDodge_Ape_Grenade_IdleR_C : public UOakAction_Anim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dodge_Ape_Grenade_IdleR.Dodge_Ape_Grenade_IdleR_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
