#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BPI_Lilith_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BPI_Lilith.BPI_Lilith_C
// 0x0000 (0x0028 - 0x0028)
class UBPI_Lilith_C : public UInterface
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BPI_Lilith.BPI_Lilith_C");
		return ptr;
	}


	void LilithWingsOff();
	void LilithWingsOn();
	void LilithPhaseTeleportTo(class AActor* TeleportToActor);
	void LilithSpecialDownstate();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
