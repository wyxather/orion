#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// BlueprintGeneratedClass BP_FCv2_FieldCommandFlow_Steal.BP_FCv2_FieldCommandFlow_Steal_C
// (Actor)

class UClass* ABP_FCv2_FieldCommandFlow_Steal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_FCv2_FieldCommandFlow_Steal_C");

	return Clss;
}


// BP_FCv2_FieldCommandFlow_Steal_C BP_FCv2_FieldCommandFlow_Steal.Default__BP_FCv2_FieldCommandFlow_Steal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_FCv2_FieldCommandFlow_Steal_C* ABP_FCv2_FieldCommandFlow_Steal_C::GetDefaultObj()
{
	static class ABP_FCv2_FieldCommandFlow_Steal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_FCv2_FieldCommandFlow_Steal_C*>(ABP_FCv2_FieldCommandFlow_Steal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_FCv2_FieldCommandFlow_Steal.BP_FCv2_FieldCommandFlow_Steal_C.IsAvailable
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UNpcPropertyComponent*       TargetNpc                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlow_Steal_C::IsAvailable(class UNpcPropertyComponent* TargetNpc, bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Steal_C", "IsAvailable");

	Params::ABP_FCv2_FieldCommandFlow_Steal_C_IsAvailable_Params Parms{};

	Parms.TargetNpc = TargetNpc;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_FCv2_FieldCommandFlow_Steal.BP_FCv2_FieldCommandFlow_Steal_C.IsCompleted
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlow_Steal_C::IsCompleted(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Steal_C", "IsCompleted");

	Params::ABP_FCv2_FieldCommandFlow_Steal_C_IsCompleted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_FCv2_FieldCommandFlow_Steal.BP_FCv2_FieldCommandFlow_Steal_C.WillPlayEvent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_FCv2_FieldCommandFlow_Steal_C::WillPlayEvent(bool* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Steal_C", "WillPlayEvent");

	Params::ABP_FCv2_FieldCommandFlow_Steal_C_WillPlayEvent_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_FCv2_FieldCommandFlow_Steal.BP_FCv2_FieldCommandFlow_Steal_C.UpdateFlow
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsInterruptPlay                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESequenceResult         Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlow_Steal_C::UpdateFlow(bool IsInterruptPlay, enum class ESequenceResult* Result)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Steal_C", "UpdateFlow");

	Params::ABP_FCv2_FieldCommandFlow_Steal_C_UpdateFlow_Params Parms{};

	Parms.IsInterruptPlay = IsInterruptPlay;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function BP_FCv2_FieldCommandFlow_Steal.BP_FCv2_FieldCommandFlow_Steal_C.PreProcess
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FCv2_FieldCommandFlow_Steal_C::PreProcess()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Steal_C", "PreProcess");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FCv2_FieldCommandFlow_Steal.BP_FCv2_FieldCommandFlow_Steal_C.OnFinishFieldCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FCv2_FieldCommandFlow_Steal_C::OnFinishFieldCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Steal_C", "OnFinishFieldCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FCv2_FieldCommandFlow_Steal.BP_FCv2_FieldCommandFlow_Steal_C.OnStartFieldCommand
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FCv2_FieldCommandFlow_Steal_C::OnStartFieldCommand()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Steal_C", "OnStartFieldCommand");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_FCv2_FieldCommandFlow_Steal.BP_FCv2_FieldCommandFlow_Steal_C.GetState
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EFCV2_SequenceState_StealReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EFCV2_SequenceState_Steal ABP_FCv2_FieldCommandFlow_Steal_C::GetState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Steal_C", "GetState");

	Params::ABP_FCv2_FieldCommandFlow_Steal_C_GetState_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BP_FCv2_FieldCommandFlow_Steal.BP_FCv2_FieldCommandFlow_Steal_C.SetState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFCV2_SequenceState_StealNewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_FCv2_FieldCommandFlow_Steal_C::SetState(enum class EFCV2_SequenceState_Steal NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Steal_C", "SetState");

	Params::ABP_FCv2_FieldCommandFlow_Steal_C_SetState_Params Parms{};

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_FCv2_FieldCommandFlow_Steal.BP_FCv2_FieldCommandFlow_Steal_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_FCv2_FieldCommandFlow_Steal_C::UserConstructionScript()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("BP_FCv2_FieldCommandFlow_Steal_C", "UserConstructionScript");



	UObject::ProcessEvent(Func, nullptr);

}

}


