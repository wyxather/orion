#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_NPC_HitReaction_Death_Ragdoll_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_NPC_HitReaction_Death_Ragdoll.Action_NPC_HitReaction_Death_Ragdoll_C
// 0x0000 (0x0200 - 0x0200)
class UAction_NPC_HitReaction_Death_Ragdoll_C : public UOakAction_PhysicalDeath
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_NPC_HitReaction_Death_Ragdoll.Action_NPC_HitReaction_Death_Ragdoll_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
