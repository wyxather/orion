// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_HitReactionLayer_TinkTurret_FlinchOnly_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function HitReactionLayer_TinkTurret_FlinchOnly.HitReactionLayer_TinkTurret_FlinchOnly_C.EvaluateTag
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UDamageComponent**       Receiver                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// class UDamageCauserComponent** Causer                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// float*                         DamageAmount                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UGbxDamageType**         DamageType                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UDamageSource**          DamageSource                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UHitRegionData**         HitRegion                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         Force                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UHitReactionTag**        PreviousTag                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// class UHitReactionTag*         ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

class UHitReactionTag* UHitReactionLayer_TinkTurret_FlinchOnly_C::EvaluateTag(class UDamageComponent** Receiver, class UDamageCauserComponent** Causer, float* DamageAmount, class UGbxDamageType** DamageType, class UDamageSource** DamageSource, class UHitRegionData** HitRegion, float* Force, class UHitReactionTag** PreviousTag)
{
	static auto fn = UObject::FindObject<UFunction>("Function HitReactionLayer_TinkTurret_FlinchOnly.HitReactionLayer_TinkTurret_FlinchOnly_C.EvaluateTag");

	UHitReactionLayer_TinkTurret_FlinchOnly_C_EvaluateTag_Params params;
	params.Receiver = Receiver;
	params.Causer = Causer;
	params.DamageAmount = DamageAmount;
	params.DamageType = DamageType;
	params.DamageSource = DamageSource;
	params.HitRegion = HitRegion;
	params.Force = Force;
	params.PreviousTag = PreviousTag;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
