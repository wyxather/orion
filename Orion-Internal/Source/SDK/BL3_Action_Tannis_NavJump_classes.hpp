#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Tannis_NavJump_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Tannis_NavJump.Action_Tannis_NavJump_C
// 0x0000 (0x02E8 - 0x02E8)
class UAction_Tannis_NavJump_C : public UGbxAction_NavJump
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Tannis_NavJump.Action_Tannis_NavJump_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
