// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Mod_RadioactiveVolley_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Mod_RadioactiveVolley.Mod_RadioactiveVolley_C.ModifyInspectInfo
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemInstanceData**      InInstanceData                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInspectInfo            Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_RadioactiveVolley_C::ModifyInspectInfo(class AActor** Actor, class UItemInstanceData** InInstanceData, struct FInspectInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_RadioactiveVolley.Mod_RadioactiveVolley_C.ModifyInspectInfo");

	AMod_RadioactiveVolley_C_ModifyInspectInfo_Params params;
	params.Actor = Actor;
	params.InInstanceData = InInstanceData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Mod_RadioactiveVolley.Mod_RadioactiveVolley_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AMod_RadioactiveVolley_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_RadioactiveVolley.Mod_RadioactiveVolley_C.ModifyDamage");

	AMod_RadioactiveVolley_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Mod_RadioactiveVolley.Mod_RadioactiveVolley_C.OnFire
// 00007FF6F8B35350
// (Event, Public, HasOutParms, BlueprintEvent)
// Parameters:
// struct FVector*                from                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector*                to                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float*                         WeaponSpread                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_RadioactiveVolley_C::OnFire(struct FVector* from, struct FVector* to, float* WeaponSpread)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_RadioactiveVolley.Mod_RadioactiveVolley_C.OnFire");

	AMod_RadioactiveVolley_C_OnFire_Params params;
	params.from = from;
	params.to = to;
	params.WeaponSpread = WeaponSpread;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Mod_RadioactiveVolley.Mod_RadioactiveVolley_C.ExecuteUbergraph_Mod_RadioactiveVolley
// 00007FF6F8B35350
// (Final)
// Parameters:
// int*                           EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AMod_RadioactiveVolley_C::ExecuteUbergraph_Mod_RadioactiveVolley(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Mod_RadioactiveVolley.Mod_RadioactiveVolley_C.ExecuteUbergraph_Mod_RadioactiveVolley");

	AMod_RadioactiveVolley_C_ExecuteUbergraph_Mod_RadioactiveVolley_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
