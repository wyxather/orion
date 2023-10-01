#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_APhysDeath_Skag_TechDeathShock_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass APhysDeath_Skag_TechDeathShock.APhysDeath_Skag_TechDeathShock_C
// 0x0008 (0x0208 - 0x0200)
class UAPhysDeath_Skag_TechDeathShock_C : public UOakAction_PhysicalDeath
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0200(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass APhysDeath_Skag_TechDeathShock.APhysDeath_Skag_TechDeathShock_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_APhysDeath_Skag_TechDeathShock(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
