// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_DamageData_BloodyHarvestGhost_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DamageData_BloodyHarvestGhost.DamageData_BloodyHarvestGhost_C.OnHitAnyAttitude
// (Event, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class AActor**                 DamageInstigator               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageCauser                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class AActor**                 DamageTarget                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FDamageDataEventDetails* Details                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UDamageData_BloodyHarvestGhost_C::OnHitAnyAttitude(class AActor** DamageInstigator, class AActor** DamageCauser, class AActor** DamageTarget, struct FDamageDataEventDetails* Details)
{
	static auto fn = UObject::FindObject<UFunction>("Function DamageData_BloodyHarvestGhost.DamageData_BloodyHarvestGhost_C.OnHitAnyAttitude");

	UDamageData_BloodyHarvestGhost_C_OnHitAnyAttitude_Params params;
	params.DamageInstigator = DamageInstigator;
	params.DamageCauser = DamageCauser;
	params.DamageTarget = DamageTarget;
	params.Details = Details;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
