#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Ixora_VarkidBoss_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C
// 0x0078 (0x0588 - 0x0510)
class UMission_Ixora_VarkidBoss_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_GoToMap_ObjSetVar;                                    // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToMap_ObjVar;                                       // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_FindBoss_ObjSetVar;                                   // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FindBoss_ObjVar;                                      // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_KillBoss_ObjSetVar;                                   // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillBoss_ObjVar;                                      // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_OpenEridiumDoor_ObjSetVar;                            // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_OpenEridiumDoor_ObjVar;                               // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FindEridiumDoor_ObjVar;                               // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_EnterBossArena_ObjSetVar;                             // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_BC1_ObjVar;                                           // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_BC2_ObjVar;                                           // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_StartingEridium_ObjVar;                               // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_DoorUnlock_INV_ObjVar;                                // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_Ixora_VarkidBoss.Mission_Ixora_VarkidBoss_C");
		return ptr;
	}


	void OnDialogSequenceFinished_5();
	void OnDialogSequenceFinished_4();
	void Set_FindBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_FindBoss(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_FindBoss(class UObject* Context);
	void Set_OpenEridiumDoor(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_OpenEridiumDoor(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void _Obj_FindBoss_Objective__PROXY();
	void Obj_FindEridiumDoor(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_KillBoss(class UObject* Context);
	void Obj_KillBoss(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_OpenEridiumDoor(class UObject* Context);
	void MCE_Update_FindEridiumDoor(class UObject* Context);
	void MCE_Update_GoToMap(class UObject* Context);
	void Obj_GoToMap(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_KillBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_GoToMap(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MissionKickoff();
	void Set_EnterBossArena(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_FindBoss_Objective__PROXY_1();
	void Obj_BC1(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_BC2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_BC1(class UObject* Context);
	void MCE_Update_BC2(class UObject* Context);
	void Obj_StartingEridium(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_StartingEridium(class UObject* Context);
	void Obj_DoorUnlock_INV(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_DoorUnlock(class UObject* Context);
	void ExecuteUbergraph_Mission_Ixora_VarkidBoss(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
