#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANavAnim_Ape_ClimbUp_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ANavAnim_Ape_ClimbUp.ANavAnim_Ape_ClimbUp_C
// 0x0000 (0x01A8 - 0x01A8)
class UANavAnim_Ape_ClimbUp_C : public UGbxAction_NavAnim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ANavAnim_Ape_ClimbUp.ANavAnim_Ape_ClimbUp_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
