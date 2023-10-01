#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_ProvingGroundsDiscovery_Mission04_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_ProvingGroundsDiscovery_Mission04.Mission_ProvingGroundsDiscovery_Mission04_C
// 0x0038 (0x0548 - 0x0510)
class UMission_ProvingGroundsDiscovery_Mission04_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_UseDropPod_ObjSetVar;                                 // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_UseDropPod_ObjVar;                                    // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_NavigateTo_Trial4_ObjVar;                             // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_NavigateTo_Trial4_ObjSetVar;                          // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ReNavigate_NewPlanet_ObjVar;                          // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_ArriveAtMap_ObjSetVar;                                // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_ProvingGroundsDiscovery_Mission04.Mission_ProvingGroundsDiscovery_Mission04_C");
		return ptr;
	}


	void Obj_UseDropPod(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_NavigateTo_Trial4(class UObject* Context);
	void Obj_NavigateTo_Trial4(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_NavigateTo_Trial4(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_ArriveAt_Trial4(class UObject* Context);
	void Obj_ReNavigate_NewPlanet(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void AdvanceTo_ArriveAtMap(class UObject* Context);
	void Set_UseDropPod(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_ArriveAtMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _OBJ_UseDropPod_Objective__PROXY();
	void ExecuteUbergraph_Mission_ProvingGroundsDiscovery_Mission04(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
