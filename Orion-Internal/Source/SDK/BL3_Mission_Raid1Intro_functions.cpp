// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Mission_Raid1Intro_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mission_Raid1Intro.Mission_Raid1Intro_C.OnDialogSequenceFinished_5
// (BlueprintCallable, BlueprintEvent)

void UMission_Raid1Intro_C::OnDialogSequenceFinished_5()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Raid1Intro.Mission_Raid1Intro_C.OnDialogSequenceFinished_5");

	UMission_Raid1Intro_C_OnDialogSequenceFinished_5_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Raid1Intro.Mission_Raid1Intro_C.OnDialogSequenceFinished_4
// (BlueprintCallable, BlueprintEvent)

void UMission_Raid1Intro_C::OnDialogSequenceFinished_4()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Raid1Intro.Mission_Raid1Intro_C.OnDialogSequenceFinished_4");

	UMission_Raid1Intro_C_OnDialogSequenceFinished_4_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Raid1Intro.Mission_Raid1Intro_C.Set_Navigate_Raid1Planet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Raid1Intro_C::Set_Navigate_Raid1Planet(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Raid1Intro.Mission_Raid1Intro_C.Set_Navigate_Raid1Planet");

	UMission_Raid1Intro_C_Set_Navigate_Raid1Planet_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Raid1Intro.Mission_Raid1Intro_C.Obj_Navigate_Raid1Planet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Raid1Intro_C::Obj_Navigate_Raid1Planet(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Raid1Intro.Mission_Raid1Intro_C.Obj_Navigate_Raid1Planet");

	UMission_Raid1Intro_C_Obj_Navigate_Raid1Planet_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Raid1Intro.Mission_Raid1Intro_C.UPDATE_Navigate_Raid1Planet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Raid1Intro_C::UPDATE_Navigate_Raid1Planet(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Raid1Intro.Mission_Raid1Intro_C.UPDATE_Navigate_Raid1Planet");

	UMission_Raid1Intro_C_UPDATE_Navigate_Raid1Planet_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Raid1Intro.Mission_Raid1Intro_C.ADVANCE_Navigate_Raid1Planet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Raid1Intro_C::ADVANCE_Navigate_Raid1Planet(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Raid1Intro.Mission_Raid1Intro_C.ADVANCE_Navigate_Raid1Planet");

	UMission_Raid1Intro_C_ADVANCE_Navigate_Raid1Planet_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Raid1Intro.Mission_Raid1Intro_C.Set_UseDropPod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Raid1Intro_C::Set_UseDropPod(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Raid1Intro.Mission_Raid1Intro_C.Set_UseDropPod");

	UMission_Raid1Intro_C_Set_UseDropPod_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Raid1Intro.Mission_Raid1Intro_C.Set_PlanetTitleCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Raid1Intro_C::Set_PlanetTitleCard(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Raid1Intro.Mission_Raid1Intro_C.Set_PlanetTitleCard");

	UMission_Raid1Intro_C_Set_PlanetTitleCard_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Raid1Intro.Mission_Raid1Intro_C.Set_MissionEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveSetEvent      ObjectiveSetEvent              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Raid1Intro_C::Set_MissionEnd(EMissionObjectiveSetEvent ObjectiveSetEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Raid1Intro.Mission_Raid1Intro_C.Set_MissionEnd");

	UMission_Raid1Intro_C_Set_MissionEnd_Params params;
	params.ObjectiveSetEvent = ObjectiveSetEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Raid1Intro.Mission_Raid1Intro_C.Obj_ReNavigate_Raid1Planet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Raid1Intro_C::Obj_ReNavigate_Raid1Planet(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Raid1Intro.Mission_Raid1Intro_C.Obj_ReNavigate_Raid1Planet");

	UMission_Raid1Intro_C_Obj_ReNavigate_Raid1Planet_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Raid1Intro.Mission_Raid1Intro_C.UPDATE_ReNavigate_Raid1Planet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Raid1Intro_C::UPDATE_ReNavigate_Raid1Planet(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Raid1Intro.Mission_Raid1Intro_C.UPDATE_ReNavigate_Raid1Planet");

	UMission_Raid1Intro_C_UPDATE_ReNavigate_Raid1Planet_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Raid1Intro.Mission_Raid1Intro_C.Obj_UseDropPod
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Raid1Intro_C::Obj_UseDropPod(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Raid1Intro.Mission_Raid1Intro_C.Obj_UseDropPod");

	UMission_Raid1Intro_C_Obj_UseDropPod_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Raid1Intro.Mission_Raid1Intro_C.Obj_TITLECARD_RAIDPLANET
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Raid1Intro_C::Obj_TITLECARD_RAIDPLANET(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Raid1Intro.Mission_Raid1Intro_C.Obj_TITLECARD_RAIDPLANET");

	UMission_Raid1Intro_C_Obj_TITLECARD_RAIDPLANET_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Raid1Intro.Mission_Raid1Intro_C.Obj_MissionEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// EMissionObjectiveEvent         ObjectiveEvent                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// int                            ObjectiveCount                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Raid1Intro_C::Obj_MissionEnd(EMissionObjectiveEvent ObjectiveEvent, int ObjectiveCount)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Raid1Intro.Mission_Raid1Intro_C.Obj_MissionEnd");

	UMission_Raid1Intro_C_Obj_MissionEnd_Params params;
	params.ObjectiveEvent = ObjectiveEvent;
	params.ObjectiveCount = ObjectiveCount;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Raid1Intro.Mission_Raid1Intro_C.MissionKickoff
// (Event, Public, BlueprintEvent)

void UMission_Raid1Intro_C::MissionKickoff()
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Raid1Intro.Mission_Raid1Intro_C.MissionKickoff");

	UMission_Raid1Intro_C_MissionKickoff_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Raid1Intro.Mission_Raid1Intro_C.AdvanceTo_PlanetTitleCard
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                 Context                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Raid1Intro_C::AdvanceTo_PlanetTitleCard(class UObject* Context)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Raid1Intro.Mission_Raid1Intro_C.AdvanceTo_PlanetTitleCard");

	UMission_Raid1Intro_C_AdvanceTo_PlanetTitleCard_Params params;
	params.Context = Context;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mission_Raid1Intro.Mission_Raid1Intro_C.ExecuteUbergraph_Mission_Raid1Intro
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UMission_Raid1Intro_C::ExecuteUbergraph_Mission_Raid1Intro(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mission_Raid1Intro.Mission_Raid1Intro_C.ExecuteUbergraph_Mission_Raid1Intro");

	UMission_Raid1Intro_C_ExecuteUbergraph_Mission_Raid1Intro_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
