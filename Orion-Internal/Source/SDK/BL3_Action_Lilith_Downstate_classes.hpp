#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Lilith_Downstate_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Lilith_Downstate.Action_Lilith_Downstate_C
// 0x0000 (0x03B8 - 0x03B8)
class UAction_Lilith_Downstate_C : public UGbxAction_Loop
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Lilith_Downstate.Action_Lilith_Downstate_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
