#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_ProvingGroundsDiscovery_Mission01_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Set_Navigate_NewPlanet
struct UMission_ProvingGroundsDiscovery_Mission01_C_Set_Navigate_NewPlanet_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Advance_Navigate_NewPlanet
struct UMission_ProvingGroundsDiscovery_Mission01_C_Advance_Navigate_NewPlanet_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Obj_Navigate_NewPlanet
struct UMission_ProvingGroundsDiscovery_Mission01_C_Obj_Navigate_NewPlanet_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Obj_ReNavigate_NewPlanet
struct UMission_ProvingGroundsDiscovery_Mission01_C_Obj_ReNavigate_NewPlanet_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Update_Navigate_NewPlanet
struct UMission_ProvingGroundsDiscovery_Mission01_C_Update_Navigate_NewPlanet_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.AdvanceTo_ArriveAtMap
struct UMission_ProvingGroundsDiscovery_Mission01_C_AdvanceTo_ArriveAtMap_Params
{
	class UObject*                                     Context;                                                  // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Obj_UseDropPod
struct UMission_ProvingGroundsDiscovery_Mission01_C_Obj_UseDropPod_Params
{
	EMissionObjectiveEvent                             ObjectiveEvent;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
	int                                                ObjectiveCount;                                           // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.SET_UseDropPod_OnSanctuary
struct UMission_ProvingGroundsDiscovery_Mission01_C_SET_UseDropPod_OnSanctuary_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.Set_ArriveAtMap
struct UMission_ProvingGroundsDiscovery_Mission01_C_Set_ArriveAtMap_Params
{
	EMissionObjectiveSetEvent                          ObjectiveSetEvent;                                        // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.[OBJ_UseDropPod_Objective] PROXY
struct UMission_ProvingGroundsDiscovery_Mission01_C__OBJ_UseDropPod_Objective__PROXY_Params
{
};

// Function Mission_ProvingGroundsDiscovery_Mission01.Mission_ProvingGroundsDiscovery_Mission01_C.ExecuteUbergraph_Mission_ProvingGroundsDiscovery_Mission01
struct UMission_ProvingGroundsDiscovery_Mission01_C_ExecuteUbergraph_Mission_ProvingGroundsDiscovery_Mission01_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
