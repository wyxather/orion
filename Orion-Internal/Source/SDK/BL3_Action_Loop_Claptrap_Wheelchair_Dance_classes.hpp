#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_Loop_Claptrap_Wheelchair_Dance_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_Loop_Claptrap_Wheelchair_Dance.Action_Loop_Claptrap_Wheelchair_Dance_C
// 0x0000 (0x03B8 - 0x03B8)
class UAction_Loop_Claptrap_Wheelchair_Dance_C : public UGbxAction_Loop
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_Loop_Claptrap_Wheelchair_Dance.Action_Loop_Claptrap_Wheelchair_Dance_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
