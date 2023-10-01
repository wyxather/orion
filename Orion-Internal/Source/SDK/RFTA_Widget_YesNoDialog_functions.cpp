// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_YesNoDialog_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_YesNoDialog.Widget_YesNoDialog_C.Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FText*                  Title                          (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FText*                  Message                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_YesNoDialog_C::Init(struct FText* Title, struct FText* Message)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_YesNoDialog.Widget_YesNoDialog_C.Init");

	UWidget_YesNoDialog_C_Init_Params params;
	params.Title = Title;
	params.Message = Message;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_YesNoDialog.Widget_YesNoDialog_C.BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_YesNoDialog_C::BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_YesNoDialog.Widget_YesNoDialog_C.BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_YesNoDialog_C_BndEvt__No_K2Node_ComponentBoundEvent_240_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_YesNoDialog.Widget_YesNoDialog_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_YesNoDialog_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_YesNoDialog.Widget_YesNoDialog_C.Construct");

	UWidget_YesNoDialog_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_YesNoDialog.Widget_YesNoDialog_C.BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature
// 00007FF6F8B35350
// (BlueprintEvent)
// Parameters:
// class UWidget**                Widget                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_YesNoDialog_C::BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature(class UWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_YesNoDialog.Widget_YesNoDialog_C.BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature");

	UWidget_YesNoDialog_C_BndEvt__Yes_K2Node_ComponentBoundEvent_154_OnAdvButtonClickedEvent__DelegateSignature_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_YesNoDialog.Widget_YesNoDialog_C.ExecuteUbergraph_Widget_YesNoDialog
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_YesNoDialog_C::ExecuteUbergraph_Widget_YesNoDialog(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_YesNoDialog.Widget_YesNoDialog_C.ExecuteUbergraph_Widget_YesNoDialog");

	UWidget_YesNoDialog_C_ExecuteUbergraph_Widget_YesNoDialog_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
