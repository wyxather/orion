#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ElementalEffectCollection_SMG_Charge_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElementalEffectCollection_SMG_Charge.ElementalEffectCollection_SMG_Charge_C
// 0x0000 (0x0090 - 0x0090)
class UElementalEffectCollection_SMG_Charge_C : public UElementalEffectCollectionData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElementalEffectCollection_SMG_Charge.ElementalEffectCollection_SMG_Charge_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
