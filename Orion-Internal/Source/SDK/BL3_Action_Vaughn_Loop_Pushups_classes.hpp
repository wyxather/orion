#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Vaughn_Loop_Pushups_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Vaughn_Loop_Pushups.Action_Vaughn_Loop_Pushups_C
// 0x0000 (0x03B8 - 0x03B8)
class UAction_Vaughn_Loop_Pushups_C : public UGbxAction_Loop
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Vaughn_Loop_Pushups.Action_Vaughn_Loop_Pushups_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
