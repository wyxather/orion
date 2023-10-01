#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_TechSlaughter1_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_TechSlaughter1.Mission_TechSlaughter1_C
// 0x0121 (0x0631 - 0x0510)
class UMission_TechSlaughter1_C : public UOakMissionCircleOfSlaughter
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_Round1_ObjSetVar;                                     // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_TurnIn_ObjSetVar;                                     // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_TurnIn_ObjVar;                                        // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ASlaughterGameMode*                          Slaughter_Game_Mode;                                      // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Rounds_ObjVar;                                        // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	int                                                RoundCounter;                                             // 0x0540(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0544(0x0004) MISSED OFFSET
	class UMissionObjective*                           Obj_INVIS_AssembleRound1_ObjVar;                          // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_StartRound_1_ObjVar;                                  // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_CompleteWave_1_ObjVar;                                // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_OptionalObjective_Round1_ObjVar;                      // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_Round_2_ObjSetVar;                                    // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_Round_3_ObjSetVar;                                    // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_Round_4_ObjSetVar;                                    // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_Round_5_ObjSetVar;                                    // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_INVIS_Assemble2_ObjVar;                               // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_StartRound_2_ObjVar;                                  // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_StartRound_3_ObjVar;                                  // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_StartRound_4_ObjVar;                                  // 0x05A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_StartRound_5_ObjVar;                                  // 0x05A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_INVIS_Assemble3_ObjVar;                               // 0x05B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_INVIS_Assemble4_ObjVar;                               // 0x05B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_INVIS_Assemble5_ObjVar;                               // 0x05C0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_CompleteWave_2_ObjVar;                                // 0x05C8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_OptionalObjective_Round2_ObjVar;                      // 0x05D0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_CompleteWave_3_ObjVar;                                // 0x05D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_OptionalObjective_Round3_ObjVar;                      // 0x05E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_CompleteWave_4_ObjVar;                                // 0x05E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_OptionalObjective_Round4_ObjVar;                      // 0x05F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_CompleteWave_5_ObjVar;                                // 0x05F8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_OptionalObjective_Round5_ObjVar;                      // 0x0600(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ABP_SlaughterGameState_C*                    SlaughterGameState;                                       // 0x0608(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_LightSwitchMover_ObjVar;                              // 0x0610(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FDialogConversation                         TorgueVO_StartSlaughter;                                  // 0x0618(0x000C) (Edit, BlueprintVisible, DisableEditOnInstance)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0624(0x0004) MISSED OFFSET
	class UMissionObjective*                           Obj_INVIS_PlayersDiedInRound_ObjVar;                      // 0x0628(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               PlayerUsedButton;                                         // 0x0630(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_TechSlaughter1.Mission_TechSlaughter1_C");
		return ptr;
	}


	void OnDialogSequenceFinished_9();
	void OnDialogSequenceFinished_8();
	void OnDialogSequenceFinished_7();
	void OnDialogSequenceFinished_6();
	void Set_Round1(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_TurnIn(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_TurnIn(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void MCE_Update_TurnIn(class UObject* Context);
	void Obj_Rounds(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_RoundCount(class UObject* Context);
	void MCE_PlayersAllDied(class UObject* Context);
	void MCE_SwitchUsed(class UObject* Context);
	void Obj_INVIS_AssembleRound1(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_StartRound_2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_CompleteWave_2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_CompleteWave_2(class UObject* Context);
	void Obj_OptionalObjective_Round1(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_Round_3(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_Round_4(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_Round_5(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Set_Round_6(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_INVIS_Assemble2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void _Obj_Rounds_Objective__PROXY();
	void _Obj_Rounds_Objective__PROXY_1();
	void _Obj_Rounds_Objective__PROXY_2();
	void _Obj_Rounds_Objective__PROXY_3();
	void Obj_StartRound_3(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_StartRound_4(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_StartRound_5(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_StartRound_6(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_INVIS_Assemble3(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_INVIS_Assemble4(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_INVIS_Assemble5(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_CompleteWave_3(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_Obj_CompleteWave_3(class UObject* Context);
	void Obj_OptionalObjective_Round2(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_CompleteWave_4(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_CompleteWave_4(class UObject* Context);
	void Obj_OptionalObjective_Round3(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_CompleteWave_5(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_CompleteWave_5(class UObject* Context);
	void Obj_OptionalObjective_Round4(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Obj_CompleteWave_6(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_Update_CompleteWave_6(class UObject* Context);
	void Obj_OptionalObjective_Round5(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_PlayersNotAssembled(class UObject* Context);
	void MCE_PlayersAssembled(class UObject* Context);
	void MCE_PlayerDied(class UObject* Context);
	void Obj_LightSwitchMover(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_ChangeLights(class UObject* Context);
	void MCE_ResetLights(class UObject* Context);
	void _Obj_LightSwitchMover_Objective__PROXY_4();
	void _Obj_LightSwitchMover_Objective__PROXY_5();
	void _Obj_LightSwitchMover_Objective__PROXY_6();
	void _Obj_LightSwitchMover_Objective__PROXY_7();
	void MCE_TorgueBossVO(class UObject* Context);
	void Obj_INVIS_PlayersDiedInRound(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void MCE_PlayersAllDiedInRound(class UObject* Context);
	void _Obj_INVIS_PlayersDiedInRound_Objective__PROXY_8();
	void _Obj_INVIS_PlayersDiedInRound_Objective__PROXY_9();
	void _Obj_INVIS_PlayersDiedInRound_Objective__PROXY_10();
	void _Obj_INVIS_PlayersDiedInRound_Objective__PROXY_11();
	void MissionActiveLoad();
	void MissionActive();
	void MCE_UpdateOptionals(class UObject* Context);
	void MissionKickoff();
	void MCE_BC_NotAllAssembled(class UObject* Context);
	void ExecuteUbergraph_Mission_TechSlaughter1(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
