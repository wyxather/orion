#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ANavAnim_Spiderant_DropDown_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ANavAnim_Spiderant_DropDown.ANavAnim_Spiderant_DropDown_C
// 0x0000 (0x01A8 - 0x01A8)
class UANavAnim_Spiderant_DropDown_C : public UGbxAction_NavAnim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ANavAnim_Spiderant_DropDown.ANavAnim_Spiderant_DropDown_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
