#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Resource_Swamp_UncleanHeart_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Resource_Swamp_UncleanHeart.Resource_Swamp_UncleanHeart_C
// 0x0000 (0x04E0 - 0x04E0)
class AResource_Swamp_UncleanHeart_C : public AItem_Material_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Resource_Swamp_UncleanHeart.Resource_Swamp_UncleanHeart_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
