#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PS_TED_Reload_Master_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_PS_TED_Reload_Master.Action_PS_TED_Reload_Master_C
// 0x0000 (0x0228 - 0x0228)
class UAction_PS_TED_Reload_Master_C : public UOakAction_Anim_TedioreReload
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_PS_TED_Reload_Master.Action_PS_TED_Reload_Master_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
