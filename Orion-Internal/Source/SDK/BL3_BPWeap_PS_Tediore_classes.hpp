#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPWeap_PS_Tediore_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPWeap_PS_Tediore.BPWeap_PS_Tediore_C
// 0x0000 (0x0A58 - 0x0A58)
class ABPWeap_PS_Tediore_C : public ABPWeap_Tediore_BaseWeapon_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPWeap_PS_Tediore.BPWeap_PS_Tediore_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
