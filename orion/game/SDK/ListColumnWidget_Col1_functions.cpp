#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// WidgetBlueprintGeneratedClass ListColumnWidget_Col1.ListColumnWidget_Col1_C
// (None)

class UClass* UListColumnWidget_Col1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ListColumnWidget_Col1_C");

	return Clss;
}


// ListColumnWidget_Col1_C ListColumnWidget_Col1.Default__ListColumnWidget_Col1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UListColumnWidget_Col1_C* UListColumnWidget_Col1_C::GetDefaultObj()
{
	static class UListColumnWidget_Col1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UListColumnWidget_Col1_C*>(UListColumnWidget_Col1_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ListColumnWidget_Col1.ListColumnWidget_Col1_C.SetText_Column1
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Col1                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListColumnWidget_Col1_C::SetText_Column1(class FName Col1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListColumnWidget_Col1_C", "SetText_Column1");

	Params::UListColumnWidget_Col1_C_SetText_Column1_Params Parms{};

	Parms.Col1 = Col1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListColumnWidget_Col1.ListColumnWidget_Col1_C.SetText_Column3
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        Col1                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Col2                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Col3                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListColumnWidget_Col1_C::SetText_Column3(class FName Col1, class FName Col2, class FName Col3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListColumnWidget_Col1_C", "SetText_Column3");

	Params::UListColumnWidget_Col1_C_SetText_Column3_Params Parms{};

	Parms.Col1 = Col1;
	Parms.Col2 = Col2;
	Parms.Col3 = Col3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ListColumnWidget_Col1.ListColumnWidget_Col1_C.ExecuteUbergraph_ListColumnWidget_Col1
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UListColumnWidget_Col1_C::ExecuteUbergraph_ListColumnWidget_Col1(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ListColumnWidget_Col1_C", "ExecuteUbergraph_ListColumnWidget_Col1");

	Params::UListColumnWidget_Col1_C_ExecuteUbergraph_ListColumnWidget_Col1_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


