#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Phasetrance_DLCSkill_2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Phasetrance_DLCSkill_2.Action_Phasetrance_DLCSkill_1_C
// 0x0000 (0x030C - 0x030C)
class UAction_Phasetrance_DLCSkill_1_C : public UAction_Phasetrance_DLCSkill_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Phasetrance_DLCSkill_2.Action_Phasetrance_DLCSkill_1_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
