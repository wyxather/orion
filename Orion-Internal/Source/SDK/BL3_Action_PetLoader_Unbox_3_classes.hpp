#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_PetLoader_Unbox_3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_PetLoader_Unbox_3.Action_PetLoader_Unbox_2_C
// 0x0008 (0x0230 - 0x0228)
class UAction_PetLoader_Unbox_2_C : public UAction_PetLoader_Unbox_Parent_C
{
public:
	class AActor*                                      MySelf_1;                                                 // 0x0228(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_PetLoader_Unbox_3.Action_PetLoader_Unbox_2_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
