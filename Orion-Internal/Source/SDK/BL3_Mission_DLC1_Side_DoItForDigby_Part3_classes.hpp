#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_DLC1_Side_DoItForDigby_Part3_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_DLC1_Side_DoItForDigby_Part3.Mission_DLC1_Side_DoItForDigby_Part3_C
// 0x0080 (0x0590 - 0x0510)
class UMission_DLC1_Side_DoItForDigby_Part3_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_EscortDigby_ObjSetVar;                                // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_EscortDigby_ObjVar;                                   // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_TurnOnEquipment_ObjSetVar;                            // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_TurnOnEquipment_ObjVar;                               // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_DestroySpeakers_ObjSetVar;                            // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_DestroySpeaker_ObjVar;                                // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_DefendDigby_ObjSetVar;                                // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_DefendDigby_ObjVar;                                   // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_KillBoss_ObjSetVar;                                   // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillBoss_ObjVar;                                      // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_PlayTrack_ObjSetVar;                                  // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_PlayTrack_ObjVar;                                     // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_INV_MetalMusic_Start_ObjVar;                          // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_Obj_EscortDigbyToHimPlaying_ObjVar;                   // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_Obj_EscortDigbyToEnemies_ObjVar;                      // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_DLC1_Side_DoItForDigby_Part3.Mission_DLC1_Side_DoItForDigby_Part3_C");
		return ptr;
	}


	void OnDialogSequenceFinished_19();
	void OnDialogSequenceFinished_18();
	void OnDialogSequenceFinished_17();
	void OnDialogSequenceFinished_16();
	void OnDialogSequenceFinished_15();
	void OnDialogSequenceFinished_14();
	void OnDialogSequenceFinished_13();
	void OnDialogSequenceFinished_12();
	void OnDialogSequenceFinished_11();
	void MCE_TurnedOnEquipment(class UObject* Context);
	void Set_DestroySpeakers(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_DestroySpeaker(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_DestroyedSpeakers(class UObject* Context);
	void Set_DefendDigby(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_DefendDigby(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_DefendDigby(class UObject* Context);
	void Set_KillBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_KillBoss(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_KilledBoss(class UObject* Context);
	void Set_PlayTrack(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_PlayTrack(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_PlayedTrack(class UObject* Context);
	void Obj_TurnOnEquipment(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MissionKickoff();
	void Set_TurnOnEquipment(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_EscortedDigby(class UObject* Context);
	void Obj_EscortDigby(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_INV_MetalMusic_Start(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_EscortedDigbyToHimPlaying(class UObject* Context);
	void INV_Obj_EscortDigbyToHimPlaying(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void INV_Obj_EscortDigbyToEnemies(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_EscortedDigbyToEnemies(class UObject* Context);
	void Set_EscortDigby(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void ExecuteUbergraph_Mission_DLC1_Side_DoItForDigby_Part3(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
