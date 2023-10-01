#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_AnimTechDeath_InOutrunnerTurret_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Action_AnimTechDeath_InOutrunnerTurret.Action_AnimTechDeath_InOutrunnerTurret_C
// 0x0008 (0x0210 - 0x0208)
class UAction_AnimTechDeath_InOutrunnerTurret_C : public UAction_VehicleDeath_Base_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0208(0x0008) (Transient, DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Action_AnimTechDeath_InOutrunnerTurret.Action_AnimTechDeath_InOutrunnerTurret_C");
		return ptr;
	}


	void OnBegin(class AActor** Actor);
	void ExecuteUbergraph_Action_AnimTechDeath_InOutrunnerTurret(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
