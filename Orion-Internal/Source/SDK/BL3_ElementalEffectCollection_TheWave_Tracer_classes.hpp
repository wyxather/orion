#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ElementalEffectCollection_TheWave_Tracer_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ElementalEffectCollection_TheWave_Tracer.ElementalEffectCollection_TheWave_Tracer_C
// 0x0000 (0x0090 - 0x0090)
class UElementalEffectCollection_TheWave_Tracer_C : public UElementalEffectCollectionData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ElementalEffectCollection_TheWave_Tracer.ElementalEffectCollection_TheWave_Tracer_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
