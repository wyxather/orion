#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Resource_Wasteland_TheUndyingHeart_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Resource_Wasteland_TheUndyingHeart.Resource_Wasteland_TheUndyingHeart_C
// 0x0000 (0x04E0 - 0x04E0)
class AResource_Wasteland_TheUndyingHeart_C : public AItem_Material_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Resource_Wasteland_TheUndyingHeart.Resource_Wasteland_TheUndyingHeart_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
