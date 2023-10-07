#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass WBP_FieldCommandPreviewPanel_Dose.WBP_FieldCommandPreviewPanel_Dose_C
// (None)

class UClass* UWBP_FieldCommandPreviewPanel_Dose_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_FieldCommandPreviewPanel_Dose_C");

	return Clss;
}


// WBP_FieldCommandPreviewPanel_Dose_C WBP_FieldCommandPreviewPanel_Dose.Default__WBP_FieldCommandPreviewPanel_Dose_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_FieldCommandPreviewPanel_Dose_C* UWBP_FieldCommandPreviewPanel_Dose_C::GetDefaultObj()
{
	static class UWBP_FieldCommandPreviewPanel_Dose_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_FieldCommandPreviewPanel_Dose_C*>(UWBP_FieldCommandPreviewPanel_Dose_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_FieldCommandPreviewPanel_Dose.WBP_FieldCommandPreviewPanel_Dose_C.SetupPanel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_FCv2_FieldCommandFlowBase_C*Flow                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Dose_C::SetupPanel(class ABP_FCv2_FieldCommandFlowBase_C* Flow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Dose_C", "SetupPanel");

	Params::UWBP_FieldCommandPreviewPanel_Dose_C_SetupPanel_Params Parms{};

	Parms.Flow = Flow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Dose.WBP_FieldCommandPreviewPanel_Dose_C.SetupNpcStatus
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        NPCLabel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Dose_C::SetupNpcStatus(class FName NPCLabel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Dose_C", "SetupNpcStatus");

	Params::UWBP_FieldCommandPreviewPanel_Dose_C_SetupNpcStatus_Params Parms{};

	Parms.NPCLabel = NPCLabel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Dose.WBP_FieldCommandPreviewPanel_Dose_C.SetupTemplate
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_FCv2_FieldCommandFlowBase_C*Flow                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Dose_C::SetupTemplate(class ABP_FCv2_FieldCommandFlowBase_C* Flow)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Dose_C", "SetupTemplate");

	Params::UWBP_FieldCommandPreviewPanel_Dose_C_SetupTemplate_Params Parms{};

	Parms.Flow = Flow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_FieldCommandPreviewPanel_Dose.WBP_FieldCommandPreviewPanel_Dose_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_FieldCommandPreviewPanel_Dose_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Dose_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_FieldCommandPreviewPanel_Dose.WBP_FieldCommandPreviewPanel_Dose_C.ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Dose
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_FieldCommandPreviewPanel_Dose_C::ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Dose(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("WBP_FieldCommandPreviewPanel_Dose_C", "ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Dose");

	Params::UWBP_FieldCommandPreviewPanel_Dose_C_ExecuteUbergraph_WBP_FieldCommandPreviewPanel_Dose_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


