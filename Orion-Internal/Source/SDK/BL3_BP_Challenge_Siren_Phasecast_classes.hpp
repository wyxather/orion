#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_Challenge_Siren_Phasecast_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Challenge_Siren_Phasecast.BP_Challenge_Siren_Phasecast_C
// 0x0000 (0x0269 - 0x0269)
class UBP_Challenge_Siren_Phasecast_C : public UBP_Challenge_CharacterSpecific_ActionSkill_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Challenge_Siren_Phasecast.BP_Challenge_Siren_Phasecast_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
