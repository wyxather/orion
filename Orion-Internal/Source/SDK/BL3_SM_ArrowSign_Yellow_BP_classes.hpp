#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_SM_ArrowSign_Yellow_BP_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass SM_ArrowSign_Yellow_BP.SM_ArrowSign_Yellow_BP_C
// 0x0000 (0x0598 - 0x0598)
class ASM_ArrowSign_Yellow_BP_C : public ABP_StaticMesh_Actor_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass SM_ArrowSign_Yellow_BP.SM_ArrowSign_Yellow_BP_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
