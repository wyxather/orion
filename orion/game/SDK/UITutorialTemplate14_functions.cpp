#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass UITutorialTemplate14.UITutorialTemplate14_C
// (None)

class UClass* UUITutorialTemplate14_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UITutorialTemplate14_C");

	return Clss;
}


// UITutorialTemplate14_C UITutorialTemplate14.Default__UITutorialTemplate14_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUITutorialTemplate14_C* UUITutorialTemplate14_C::GetDefaultObj()
{
	static class UUITutorialTemplate14_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUITutorialTemplate14_C*>(UUITutorialTemplate14_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UITutorialTemplate14.UITutorialTemplate14_C.GetTemplateType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UUITutorialTemplate14_C::GetTemplateType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate14_C", "GetTemplateType");

	Params::UUITutorialTemplate14_C_GetTemplateType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UITutorialTemplate14.UITutorialTemplate14_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUITutorialTemplate14_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate14_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UITutorialTemplate14.UITutorialTemplate14_C.ExecuteUbergraph_UITutorialTemplate14
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUITutorialTemplate14_C::ExecuteUbergraph_UITutorialTemplate14(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("UITutorialTemplate14_C", "ExecuteUbergraph_UITutorialTemplate14");

	Params::UUITutorialTemplate14_C_ExecuteUbergraph_UITutorialTemplate14_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


