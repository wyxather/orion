// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_ARAnim_PunkBadass_Melee_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function ARAnim_PunkBadass_Melee.ARAnim_PunkBadass_Melee_C.OnBegin
// (Event, Public, BlueprintEvent)
// Parameters:
// class AActor**                 Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_PunkBadass_Melee_C::OnBegin(class AActor** Actor)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_PunkBadass_Melee.ARAnim_PunkBadass_Melee_C.OnBegin");

	UARAnim_PunkBadass_Melee_C_OnBegin_Params params;
	params.Actor = Actor;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_PunkBadass_Melee.ARAnim_PunkBadass_Melee_C.Notify_MeleeKick
// (BlueprintCallable, BlueprintEvent)

void UARAnim_PunkBadass_Melee_C::Notify_MeleeKick()
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_PunkBadass_Melee.ARAnim_PunkBadass_Melee_C.Notify_MeleeKick");

	UARAnim_PunkBadass_Melee_C_Notify_MeleeKick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function ARAnim_PunkBadass_Melee.ARAnim_PunkBadass_Melee_C.ExecuteUbergraph_ARAnim_PunkBadass_Melee
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UARAnim_PunkBadass_Melee_C::ExecuteUbergraph_ARAnim_PunkBadass_Melee(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function ARAnim_PunkBadass_Melee.ARAnim_PunkBadass_Melee_C.ExecuteUbergraph_ARAnim_PunkBadass_Melee");

	UARAnim_PunkBadass_Melee_C_ExecuteUbergraph_ARAnim_PunkBadass_Melee_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
