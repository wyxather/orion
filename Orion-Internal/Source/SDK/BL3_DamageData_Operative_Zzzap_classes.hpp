#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DamageData_Operative_Zzzap_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DamageData_Operative_Zzzap.DamageData_Operative_Zzzap_C
// 0x0000 (0x0310 - 0x0310)
class UDamageData_Operative_Zzzap_C : public UOakDamageData
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DamageData_Operative_Zzzap.DamageData_Operative_Zzzap_C");
		return ptr;
	}


	void OnHitEnemy(class AActor** DamageInstigator, class AActor** DamageCauser, class AActor** DamageTarget, struct FDamageDataEventDetails* Details);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
