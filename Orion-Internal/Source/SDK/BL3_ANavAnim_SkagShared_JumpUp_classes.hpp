#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANavAnim_SkagShared_JumpUp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ANavAnim_SkagShared_JumpUp.ANavAnim_SkagShared_JumpUp_C
// 0x0000 (0x02E8 - 0x02E8)
class UANavAnim_SkagShared_JumpUp_C : public UGbxAction_NavJump
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ANavAnim_SkagShared_JumpUp.ANavAnim_SkagShared_JumpUp_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
