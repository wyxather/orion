#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_EnforcerGun_Taunt_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARAnim_EnforcerGun_Taunt.ARAnim_EnforcerGun_Taunt_C
// 0x0000 (0x0238 - 0x0238)
class UARAnim_EnforcerGun_Taunt_C : public UOakAction_RandomAnim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARAnim_EnforcerGun_Taunt.ARAnim_EnforcerGun_Taunt_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
