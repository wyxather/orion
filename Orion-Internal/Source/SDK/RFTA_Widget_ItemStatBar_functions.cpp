// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Widget_ItemStatBar_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Widget_ItemStatBar.Widget_ItemStatBar_C.Refresh
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)

void UWidget_ItemStatBar_C::Refresh()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatBar.Widget_ItemStatBar_C.Refresh");

	UWidget_ItemStatBar_C_Refresh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemStatBar.Widget_ItemStatBar_C.Construct
// 00007FF6F8B35350
// (BlueprintCosmetic, Event, Public, BlueprintEvent)

void UWidget_ItemStatBar_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatBar.Widget_ItemStatBar_C.Construct");

	UWidget_ItemStatBar_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemStatBar.Widget_ItemStatBar_C.Init
// 00007FF6F8B35350
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FInspectStat*           Stat                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool*                          Comparing                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInspectStat*           CompareStat                    (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FInspectInfo*           InspectInfo                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UWidget_ItemStatBar_C::Init(struct FInspectStat* Stat, bool* Comparing, struct FInspectStat* CompareStat, struct FInspectInfo* InspectInfo)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatBar.Widget_ItemStatBar_C.Init");

	UWidget_ItemStatBar_C_Init_Params params;
	params.Stat = Stat;
	params.Comparing = Comparing;
	params.CompareStat = CompareStat;
	params.InspectInfo = InspectInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Widget_ItemStatBar.Widget_ItemStatBar_C.ExecuteUbergraph_Widget_ItemStatBar
// 00007FF6F8B35350
// (Final, HasDefaults)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWidget_ItemStatBar_C::ExecuteUbergraph_Widget_ItemStatBar(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Widget_ItemStatBar.Widget_ItemStatBar_C.ExecuteUbergraph_Widget_ItemStatBar");

	UWidget_ItemStatBar_C_ExecuteUbergraph_Widget_ItemStatBar_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
