#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ADirection_VarkidShared_NavJump_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ADirection_VarkidShared_NavJump.ADirection_VarkidShared_NavJump_C
// 0x0000 (0x00C8 - 0x00C8)
class UADirection_VarkidShared_NavJump_C : public UGbxAction_DirectionContainer
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ADirection_VarkidShared_NavJump.ADirection_VarkidShared_NavJump_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
