#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_MonkMission_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_MonkMission.Mission_MonkMission_C
// 0x00D0 (0x05E0 - 0x0510)
class UMission_MonkMission_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjective*                           Obj_HarvestLivers_ObjVar;                                 // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_EnterCellar_ObjSetVar;                                // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_EnterCellar_ObjVar;                                   // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_TalkToMendel_ObjSetVar;                               // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               GatheredLivers;                                           // 0x0538(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0539(0x0007) MISSED OFFSET
	class UMissionObjective*                           Obj_TalkToMendel_ObjVar;                                  // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_KillBirthers_ObjSetVar;                               // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_KillHive_ObjSetVar;                                   // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillBirthers_ObjVar;                                  // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_KillHive_ObjVar;                                      // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_RingBell_ObjVar;                                      // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_OpenBarrel01_ObjVar;                                  // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_OpenBarrel02_ObjVar;                                  // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_OpenBarrel03_ObjVar;                                  // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GetStriker_ObjVar;                                    // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_PlaceStriker_ObjVar;                                  // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_FloodRatch_ObjVar;                                    // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDialogConversation                         MendelConvo;                                              // 0x05A0(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x4];                                       // 0x05AC(0x0004) MISSED OFFSET
	class UMissionObjectiveSet*                        SET_FollowMonk_ObjSetVar;                                 // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_FollowMonk_ObjVar;                                    // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_ClearInitialGunk_ObjSetVar;                           // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_FindLivers_ObjSetVar;                                 // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_PlaceLivers_ObjVar;                                   // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Invisible_OpenRewardDoor_ObjVar;                      // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_MonkMission.Mission_MonkMission_C");
		return ptr;
	}


	void OnDialogSequenceFinished_13();
	void OnDialogSequenceFinished_12();
	void OnDialogSequenceFinished_11();
	void OnDialogSequenceFinished_10();
	void OnDialogSequenceFinished_9();
	void OnDialogSequenceFinished_8();
	void Obj_HarvestLivers(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_EnterCellar(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_EnterCellar(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_EnterCellar(class UObject* Context);
	void Set_TalkToMendel(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_Update_TalkToMendel(class UObject* Context);
	void Obj_TalkToMendel(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_KillBirthers(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_KillHive(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Update_OpenBarrel01(class UObject* Context);
	void Obj_KillBirthers(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_KillBirthers(class UObject* Context);
	void Obj_KillHive(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_KillHive(class UObject* Context);
	void OBJ_RingBell(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_RingBell(class UObject* Context);
	void Obj_OpenBarrel01(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_OpenBarrel02(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_OpenBarrel03(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_OpenBarrel02(class UObject* Context);
	void Update_OpenBarrel03(class UObject* Context);
	void _Obj_HarvestLivers_Objective__PROXY();
	void Obj_GetStriker(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_PlaceStriker(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_FloodRatch(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_FollowMonk(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_FollowMonk(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_FollowMonk(class UObject* Context);
	void SET_ClearInitialGunk(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MissionKickoff();
	void SET_FindLivers(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Advance_FindLivers(class UObject* Context);
	void Update_HarvestLivers(class UObject* Context);
	void Update_PlaceStriker(class UObject* Context);
	void OBJ_PlaceLivers(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_PlaceLivers(class UObject* Context);
	void _Obj_FloodRatch_Objective__PROXY_1();
	void _Obj_KillBirthers_Objective__PROXY_2();
	void _Obj_OpenBarrel02_Objective__PROXY_3();
	void _Obj_OpenBarrel03_Objective__PROXY_4();
	void Obj_Invisible_OpenRewardDoor(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Update_Invisible_OpenRewardDoor(class UObject* Context);
	void ExecuteUbergraph_Mission_MonkMission(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
