#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPCine_Actor_Ellie_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPCine_Actor_Ellie.BPCine_Actor_Ellie_C
// 0x0000 (0x0510 - 0x0510)
class ABPCine_Actor_Ellie_C : public ABPCine_Actor_Parent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPCine_Actor_Ellie.BPCine_Actor_Ellie_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
