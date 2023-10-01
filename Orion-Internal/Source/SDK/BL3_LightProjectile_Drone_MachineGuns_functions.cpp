// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_LightProjectile_Drone_MachineGuns_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function LightProjectile_Drone_MachineGuns.LightProjectile_Drone_MachineGuns_C.OnBegin
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class ULightProjectile**       Projectile                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ULightProjectile_Drone_MachineGuns_C::OnBegin(class ULightProjectile** Projectile)
{
	static auto fn = UObject::FindObject<UFunction>("Function LightProjectile_Drone_MachineGuns.LightProjectile_Drone_MachineGuns_C.OnBegin");

	ULightProjectile_Drone_MachineGuns_C_OnBegin_Params params;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
