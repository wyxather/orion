#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ASpawn_Tink_ClimbOver_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ASpawn_Tink_ClimbOver.ASpawn_Tink_ClimbOver_C
// 0x0000 (0x01C0 - 0x01C0)
class UASpawn_Tink_ClimbOver_C : public UGbxAction_SpawnAnim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ASpawn_Tink_ClimbOver.ASpawn_Tink_ClimbOver_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
