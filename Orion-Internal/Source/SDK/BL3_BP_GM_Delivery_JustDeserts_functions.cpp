// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_GM_Delivery_JustDeserts_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GM_Delivery_JustDeserts.BP_GM_Delivery_JustDeserts_C.K2_GrenadeExplode
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AGrenade**               Grenade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGrenadeMod**            GrenadeMod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GM_Delivery_JustDeserts_C::K2_GrenadeExplode(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_Delivery_JustDeserts.BP_GM_Delivery_JustDeserts_C.K2_GrenadeExplode");

	UBP_GM_Delivery_JustDeserts_C_K2_GrenadeExplode_Params params;
	params.Grenade = Grenade;
	params.GrenadeMod = GrenadeMod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GM_Delivery_JustDeserts.BP_GM_Delivery_JustDeserts_C.K2_GrenadeInitialized
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AGrenade**               Grenade                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AGrenadeMod**            GrenadeMod                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void UBP_GM_Delivery_JustDeserts_C::K2_GrenadeInitialized(class AGrenade** Grenade, class AGrenadeMod** GrenadeMod)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GM_Delivery_JustDeserts.BP_GM_Delivery_JustDeserts_C.K2_GrenadeInitialized");

	UBP_GM_Delivery_JustDeserts_C_K2_GrenadeInitialized_Params params;
	params.Grenade = Grenade;
	params.GrenadeMod = GrenadeMod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
