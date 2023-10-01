#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_PunkBadass_Melee_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ARAnim_PunkBadass_Melee.ARAnim_PunkBadass_Melee_C
// 0x0010 (0x0248 - 0x0238)
class UARAnim_PunkBadass_Melee_C : public UOakAction_RandomAnim
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (Transient, DuplicateTransient)
	class AActor*                                      MySelf;                                                   // 0x0240(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ARAnim_PunkBadass_Melee.ARAnim_PunkBadass_Melee_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void Notify_MeleeKick();
	void ExecuteUbergraph_ARAnim_PunkBadass_Melee(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
