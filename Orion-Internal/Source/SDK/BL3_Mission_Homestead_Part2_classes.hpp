#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Homestead_Part2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Mission_Homestead_Part2.Mission_Homestead_Part2_C
// 0x0090 (0x05A0 - 0x0510)
class UMission_Homestead_Part2_C : public UBP_OakMission_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0510(0x0008) (Transient, DuplicateTransient)
	class UMissionObjectiveSet*                        Set_GoToDam_ObjSetVar;                                    // 0x0518(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Investigate_ObjVar;                                   // 0x0520(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        SET_DefeatBoss_ObjSetVar;                                 // 0x0528(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           OBJ_DefeatBoss_ObjVar;                                    // 0x0530(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_PlantExplosives_ObjSetVar;                            // 0x0538(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_PlantExplosives_ObjVar;                               // 0x0540(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_Return_ObjSetVar;                                     // 0x0548(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Return_ObjVar;                                        // 0x0550(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_CollectExplosives_ObjSetVar;                          // 0x0558(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_CollectExplosives_ObjVar;                             // 0x0560(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_Detonate_ObjSetVar;                                   // 0x0568(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_Detonate_ObjVar;                                      // 0x0570(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjectiveSet*                        Set_HelpPa_ObjSetVar;                                     // 0x0578(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Obj_HelpPa_ObjVar;                                        // 0x0580(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_Obj_OpenGate_ObjVar;                                  // 0x0588(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           INV_Obj_MeleedPoopPiles_ObjVar;                           // 0x0590(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UMissionObjective*                           Invs_StartWaterwheel_ObjVar;                              // 0x0598(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Mission_Homestead_Part2.Mission_Homestead_Part2_C");
		return ptr;
	}


	void OnDialogSequenceFinished_23();
	void OnDialogSequenceFinished_22();
	void OnDialogSequenceFinished_21();
	void OnDialogSequenceFinished_20();
	void OnDialogSequenceFinished_19();
	void OnDialogSequenceFinished_18();
	void OnDialogSequenceFinished_17();
	void OnDialogSequenceFinished_16();
	void OnDialogSequenceFinished_15();
	void OnDialogSequenceFinished_14();
	void OnDialogSequenceFinished_13();
	void ME_PlayerDetonatedExplosives(class UObject* Context);
	void ME_PlayerReturnedToHomestead(class UObject* Context);
	void ME_Player_Started_Homestead_Part_2(class UObject* Context);
	void Set_HelpPa(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_HelpPa(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ME_PlayerHelpedPa(class UObject* Context);
	void ME_PlayePlantedAnExplosive(class UObject* Context);
	void ME_PlayerKilledSkagEater(class UObject* Context);
	void ME_PlayerWentToSpring(class UObject* Context);
	void Obj_Detonate(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_Detonate(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void INV_Obj_OpenGate(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ME_PlayerHasOpenedGate(class UObject* Context);
	void INV_Obj_MeleedPoopPiles(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void ME_PlayerMeleedPoopPile(class UObject* Context);
	void Obj_CollectExplosives(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_CollectExplosives(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_Return(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_Return(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_PlantExplosives(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_PlantExplosives(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void OBJ_DefeatBoss(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void SET_DefeatBoss(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Obj_Investigate(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void Set_GoToDam(EMissionObjectiveSetEvent ObjectiveSetEvent);
	void Invs_StartWaterwheel(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount);
	void UPDATE_Invs_StartWaterwheel(class UObject* Context);
	void ExecuteUbergraph_Mission_Homestead_Part2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
