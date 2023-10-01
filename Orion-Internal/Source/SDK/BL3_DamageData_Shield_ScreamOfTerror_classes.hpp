#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DamageData_Shield_ScreamOfTerror_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DamageData_Shield_ScreamOfTerror.DamageData_Shield_ScreamOfTerror_C
// 0x0000 (0x0310 - 0x0310)
class UDamageData_Shield_ScreamOfTerror_C : public UOakDamageData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamageData_Shield_ScreamOfTerror.DamageData_Shield_ScreamOfTerror_C");
		return ptr;
	}


	void OnHitEnemy(class AActor** DamageInstigator, class AActor** DamageCauser, class AActor** DamageTarget, struct FDamageDataEventDetails* Details);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
