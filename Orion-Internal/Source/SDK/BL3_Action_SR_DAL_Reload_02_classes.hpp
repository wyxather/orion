#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_SR_DAL_Reload_02_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_SR_DAL_Reload_02.Action_SR_DAL_Reload_02_C
// 0x0000 (0x0220 - 0x0220)
class UAction_SR_DAL_Reload_02_C : public UAction_Weapon_Reload_Master_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_SR_DAL_Reload_02.Action_SR_DAL_Reload_02_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
