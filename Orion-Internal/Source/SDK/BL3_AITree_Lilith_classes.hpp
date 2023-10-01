#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_AITree_Lilith_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AITree_Lilith.AITree_Lilith_C
// 0x0008 (0x0178 - 0x0170)
class UAITree_Lilith_C : public UAIAction_AITree
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0170(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AITree_Lilith.AITree_Lilith_C");
		return ptr;
	}


	void ExecuteUbergraph_AITree_Lilith(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
