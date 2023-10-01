// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_Action_AOE_Trinket_SoulEmber_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Action_AOE_Trinket_SoulEmber.Action_AOE_Trinket_SoulEmber_C.ModifyDamage
// 00007FF6F8B35350
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDamageInfo             Info                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                           Rtn                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAction_AOE_Trinket_SoulEmber_C::ModifyDamage(struct FDamageInfo* Info, bool* Rtn)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Trinket_SoulEmber.Action_AOE_Trinket_SoulEmber_C.ModifyDamage");

	UAction_AOE_Trinket_SoulEmber_C_ModifyDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Info != nullptr)
		*Info = params.Info;
	if (Rtn != nullptr)
		*Rtn = params.Rtn;
}


// Function Action_AOE_Trinket_SoulEmber.Action_AOE_Trinket_SoulEmber_C.GetDamage
// 00007FF6F8B35350
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// float                          Damage                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAction_AOE_Trinket_SoulEmber_C::GetDamage(float* Damage)
{
	static auto fn = UObject::FindObject<UFunction>("Function Action_AOE_Trinket_SoulEmber.Action_AOE_Trinket_SoulEmber_C.GetDamage");

	UAction_AOE_Trinket_SoulEmber_C_GetDamage_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Damage != nullptr)
		*Damage = params.Damage;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
