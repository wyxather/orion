// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Payload_ObviousTrap_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GM_Payload_ObviousTrap.BP_GM_Payload_ObviousTrap_C.K2_GrenadeStuckTo
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AGrenade**               Grenade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGrenadeMod**            GrenadeMod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 StickTarget                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPayloadInstanceData    InstanceData                   (BlueprintVisible, Parm, OutParm, ReferenceParm)
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void UBP_GM_Payload_ObviousTrap_C::K2_GrenadeStuckTo(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, class AActor** StickTarget, struct FHitResult* HitResult, struct FPayloadInstanceData* InstanceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_ObviousTrap.BP_GM_Payload_ObviousTrap_C.K2_GrenadeStuckTo");

	UBP_GM_Payload_ObviousTrap_C_K2_GrenadeStuckTo_Params params;
	params.Grenade = Grenade;
	params.GrenadeMod = GrenadeMod;
	params.StickTarget = StickTarget;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InstanceData != nullptr)
		*InstanceData = params.InstanceData;
}


// Function BP_GM_Payload_ObviousTrap.BP_GM_Payload_ObviousTrap_C.K2_GrenadeExplode
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AGrenade**               Grenade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGrenadeMod**            GrenadeMod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FPayloadInstanceData    InstanceData                   (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UBP_GM_Payload_ObviousTrap_C::K2_GrenadeExplode(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FPayloadInstanceData* InstanceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_ObviousTrap.BP_GM_Payload_ObviousTrap_C.K2_GrenadeExplode");

	UBP_GM_Payload_ObviousTrap_C_K2_GrenadeExplode_Params params;
	params.Grenade = Grenade;
	params.GrenadeMod = GrenadeMod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InstanceData != nullptr)
		*InstanceData = params.InstanceData;
}


// Function BP_GM_Payload_ObviousTrap.BP_GM_Payload_ObviousTrap_C.K2_GrenadeImpact
// (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AGrenade**               Grenade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGrenadeMod**            GrenadeMod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FHitResult*             HitResult                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)
// struct FPayloadInstanceData    InstanceData                   (BlueprintVisible, Parm, OutParm, ReferenceParm)

void UBP_GM_Payload_ObviousTrap_C::K2_GrenadeImpact(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod, struct FHitResult* HitResult, struct FPayloadInstanceData* InstanceData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_Payload_ObviousTrap.BP_GM_Payload_ObviousTrap_C.K2_GrenadeImpact");

	UBP_GM_Payload_ObviousTrap_C_K2_GrenadeImpact_Params params;
	params.Grenade = Grenade;
	params.GrenadeMod = GrenadeMod;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (InstanceData != nullptr)
		*InstanceData = params.InstanceData;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
