#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_CIN_TCB_Ellie_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass CIN_TCB_Ellie.CIN_TCB_Ellie_C
// 0x0000 (0x04EC - 0x04EC)
class ACIN_TCB_Ellie_C : public ACine_TitleCardBackground_Parent_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CIN_TCB_Ellie.CIN_TCB_Ellie_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
