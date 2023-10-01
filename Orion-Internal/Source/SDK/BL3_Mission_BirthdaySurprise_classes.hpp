#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_BirthdaySurprise_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_BirthdaySurprise.Mission_BirthdaySurprise_C
// 0x01D0 (0x06E0 - 0x0510)
class UMission_BirthdaySurprise_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	int                                                GrenadeScore;                                             // 0x0518(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RecordsBroken;                                            // 0x051C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_CollectFlowers_ObjSetVar;                             // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_CollectFlowers_ObjVar;                                // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_MeetWithMordecai_ObjSetVar;                           // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_MeetWithMordecai_ObjVar;                              // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_PlaceFlowers_ObjSetVar;                               // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_PlaceFlowers_ObjVar;                                  // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_TalkToFather2_ObjSetVar;                              // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_TalkToFather2_ObjVar;                                 // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_DestroyPinata_ObjSetVar;                              // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_DestroyPinata_ObjVar;                                 // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_TalkToFather1_ObjSetVar;                              // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_TalkToFather1_ObjVar;                                 // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_HaveCake_ObjSetVar;                                   // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_BreakOrLeaveCakeRecord_ObjSetVar;                     // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_SayYoureFull_ObjVar;                                  // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_ThrowGrenades_ObjSetVar;                              // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ThrowGrenades_ObjVar;                                 // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_BreakOrLeaveGrenadeRecord_ObjSetVar;                  // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_BreakGrenadeRecord_ObjVar;                            // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_SayYoureTired_ObjVar;                                 // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_BreakCakeRecord_ObjVar;                               // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_MoveToShootingRange_ObjSetVar;                        // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_BreakOrLeaveShootingRecord_ObjSetVar;                 // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_MoveToShootingRange_ObjVar;                           // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_ConfirmReadiness_ObjVar;                              // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_BreakShootingRecord_ObjVar;                           // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_LeaveShootingRecord_ObjVar;                           // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_GoToGrenadeThrow_ObjSetVar;                           // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToGrenadeThrow_ObjVar;                              // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_HaveSomeCake_ObjVar;                                  // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bWentToGrenadeThrow;                                      // 0x0610(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bFatherGrenadeSpeakDone;                                  // 0x0611(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x6];                                       // 0x0612(0x0006) MISSED OFFSET
	class UMissionObjectiveSet*                        Set_AttendParty_ObjSetVar;                                // 0x0618(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_AttendParty_ObjVar;                                   // 0x0620(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_VO_CakeRecordBroken_ObjSetVar;                        // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_VO_CakeRecordBroken_INVS_ObjVar;                      // 0x0630(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_VO_CakeRecordStands_ObjSetVar;                        // 0x0638(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_VO_CakeRecordStands_INVS_ObjVar;                      // 0x0640(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_VO_GrenadeRecordBroken_ObjSetVar;                     // 0x0648(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_VO_GrenadeRecordStands_ObjSetVar;                     // 0x0650(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_VO_GrenadeRecordBroken_INVS_ObjVar;                   // 0x0658(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_VO_GrenadeRecordStands_INVS_ObjVar;                   // 0x0660(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_VO_ShootingRecordBroken_ObjSetVar;                    // 0x0668(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_VO_ShootingRecordStands_ObjSetVar;                    // 0x0670(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_VO_ShootingRecordBroken_INVS_ObjVar;                  // 0x0678(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_VO_ShootingRecordStands_INVS_ObjVar;                  // 0x0680(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_BrokenRecordTracker_INVS_ObjVar;                      // 0x0688(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Timer_60sLeft_ObjVar;                                 // 0x0690(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Timer_30sLeft_ObjVar;                                 // 0x0698(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Timer_10sLeft_ObjVar;                                 // 0x06A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Timer_5sLeft_ObjVar;                                  // 0x06A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_GoToMesa_ObjSetVar;                                   // 0x06B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GoToMesa_INVS_ObjVar;                                 // 0x06B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bBrokeGrenadeRecord;                                      // 0x06C0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x06C1(0x0007) MISSED OFFSET
	class UMissionObjective*                           Obj_SpawnRakk_INVS_ObjVar;                                // 0x06C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_MordecaiRecord_ObjVar;                                // 0x06D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_GrenadeThrowVO_INVS_ObjVar;                           // 0x06D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_BirthdaySurprise.Mission_BirthdaySurprise_C");
		return ptr;
	}


	void OnDialogSequenceFinished_67();
	void OnDialogSequenceFinished_66();
	void OnDialogSequenceFinished_65();
	void OnDialogSequenceFinished_64();
	void OnDialogSequenceFinished_63();
	void OnDialogSequenceFinished_62();
	void OnDialogSequenceFinished_61();
	void OnDialogSequenceFinished_60();
	void OnDialogSequenceFinished_59();
	void OnDialogSequenceFinished_58();
	void OnDialogSequenceFinished_57();
	void OnDialogSequenceFinished_56();
	void OnDialogSequenceFinished_55();
	void OnDialogSequenceFinished_54();
	void OnDialogSequenceFinished_53();
	void OnDialogSequenceFinished_52();
	void OnDialogSequenceFinished_51();
	void OnDialogSequenceFinished_50();
	void OnDialogSequenceFinished_49();
	void OnDialogSequenceFinished_48();
	void OnDialogSequenceFinished_47();
	void OnDialogSequenceFinished_46();
	void OnDialogSequenceFinished_45();
	void OnDialogSequenceFinished_44();
	void OnDialogSequenceFinished_43();
	void OnDialogSequenceFinished_42();
	void OnDialogSequenceFinished_41();
	void OnDialogSequenceFinished_40();
	void OnDialogSequenceFinished_39();
	void OnDialogSequenceFinished_38();
	void OnDialogSequenceFinished_37();
	void OnDialogSequenceFinished_36();
	void OnDialogSequenceFinished_35();
	void SET_CollectFlowers(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_CollectFlowers(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_MeetWithMordecai(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_MeetWithMordecai(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_PlaceFlowers(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_PlaceFlowers(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_TalkToFather2(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_TalkToFather2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_MetWithMordecai(class UObject* Context);
	void MCE_PlacedFlowers(class UObject* Context);
	void MCE_TalkedToFather2(class UObject* Context);
	void SET_DestroyPinata(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_PinataDestroyed(class UObject* Context);
	void Obj_DestroyPinata(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_TalkToFather1(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_TalkToFather1(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_TalkedToFather1(class UObject* Context);
	void SET_HaveCake(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void SET_BreakOrLeaveCakeRecord(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_SayYoureFull(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_SaidYoureFull(class UObject* Context);
	void SET_ThrowGrenades(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_ThrowGrenades(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_ThrewGrenade(class UObject* Context);
	void SET_BreakOrLeaveGrenadeRecord(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_BreakGrenadeRecord(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_SayYoureTired(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_SaidYoureTired(class UObject* Context);
	void Obj_BreakCakeRecord(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_MoveToShootingRange(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void SET_BreakOrLeaveShootingRecord(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_MoveToShootingRange(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_MovedToShootingRange(class UObject* Context);
	void Obj_ConfirmReadiness(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_ConfirmedReady(class UObject* Context);
	void Obj_BreakShootingRecord(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_PlayerKilledRakk(class UObject* Context);
	void Obj_LeaveShootingRecord(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_GoToGrenadeThrow(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_GoToGrenadeThrow(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_WentToGrenadeThrow(class UObject* Context);
	void Obj_HaveSomeCake(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Grenade_1pnt(class UObject* Context);
	void MCE_BrokeGrenadeRecord(class UObject* Context);
	void MCE_Grenade_5pnts(class UObject* Context);
	void MCE_Grenade_10pnts(class UObject* Context);
	void Set_AttendParty(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_AttendParty(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void UPDATE_AttendParty(class UObject* Context);
	void UPDATE_CollectFlowers(class UObject* Context);
	void UPDATE_CakeRecord(class UObject* Context);
	void _Obj_BreakCakeRecord_Objective__PROXY();
	void Set_VO_CakeRecordBroken(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_BreakCakeRecord_Objective__PROXY_1();
	void Obj_VO_CakeRecordBroken_INVS(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_VO_CakeRecordStands(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_SayYoureFull_Objective__PROXY_2();
	void Obj_VO_CakeRecordStands_INVS(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void _!_Set_an_Objective_in_the_Details_!__3();
	void _!_Set_an_Objective_in_the_Details_!__4();
	void _Obj_BreakGrenadeRecord_Objective__PROXY_5();
	void Set_VO_GrenadeRecordBroken(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_VO_GrenadeRecordStands(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_BreakGrenadeRecord_Objective__PROXY_6();
	void Obj_VO_GrenadeRecordBroken_INVS(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void _Obj_SayYoureTired_Objective__PROXY_7();
	void Obj_VO_GrenadeRecordStands_INVS(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_VO_ShootingRecordBroken(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_VO_ShootingRecordStands(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void _Obj_BreakShootingRecord_Objective__PROXY_8();
	void Obj_VO_ShootingRecordBroken_INVS(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void _Obj_LeaveShootingRecord_Objective__PROXY_9();
	void Obj_VO_ShootingRecordStands_INVS(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_BrokenRecordTracker_INVS(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void _Obj_BrokenRecordTracker_INVS_Objective__PROXY_10();
	void _Obj_BrokenRecordTracker_INVS_Objective__PROXY_11();
	void UPDATE_LeaveShootingRecord(class UObject* Context);
	void Obj_Timer_60sLeft(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void UPDATE_Timer_60sLeft(class UObject* Context);
	void Obj_Timer_30sLeft(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void UPDATE_Timer_30sLeft(class UObject* Context);
	void Obj_Timer_10sLeft(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void UPDATE_Timer_10sLeft(class UObject* Context);
	void Obj_Timer_5sLeft(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void UPDATE_Timer_5sLeft(class UObject* Context);
	void SET_GoToMesa(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_GoToMesa_INVS(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void UPDATE_GoToMesa(class UObject* Context);
	void _Obj_CollectFlowers_Objective__PROXY_12();
	void Obj_SpawnRakk_INVS(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void UPDATE_SpawnRakk(class UObject* Context);
	void Obj_MordecaiRecord(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void UPDATE_MordecaiRecord(class UObject* Context);
	void Obj_GrenadeThrowVO_INVS(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ExecuteUbergraph_Mission_BirthdaySurprise(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
