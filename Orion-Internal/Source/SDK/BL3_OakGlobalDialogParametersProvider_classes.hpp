#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_OakGlobalDialogParametersProvider_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass OakGlobalDialogParametersProvider.OakGlobalDialogParametersProvider_C
// 0x0000 (0x0028 - 0x0028)
class UOakGlobalDialogParametersProvider_C : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass OakGlobalDialogParametersProvider.OakGlobalDialogParametersProvider_C");
		return ptr;
	}


	void InitDialogContext(struct FDialogContext* Parameters);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
