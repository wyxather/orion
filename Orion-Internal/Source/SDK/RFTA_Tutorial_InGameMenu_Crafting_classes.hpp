#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Tutorial_InGameMenu_Crafting_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Tutorial_InGameMenu_Crafting.Tutorial_InGameMenu_Crafting_C
// 0x0000 (0x0061 - 0x0061)
class UTutorial_InGameMenu_Crafting_C : public UTutorial_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Tutorial_InGameMenu_Crafting.Tutorial_InGameMenu_Crafting_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
