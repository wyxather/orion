#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCamShake_Damage_Projectile_Neg_F_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPCamShake_Damage_Projectile_Neg_F.BPCamShake_Damage_Projectile_Neg_F_C
// 0x0000 (0x0180 - 0x0180)
class UBPCamShake_Damage_Projectile_Neg_F_C : public UCameraShake
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPCamShake_Damage_Projectile_Neg_F.BPCamShake_Damage_Projectile_Neg_F_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
