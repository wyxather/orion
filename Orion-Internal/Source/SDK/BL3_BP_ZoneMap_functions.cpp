// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_BP_ZoneMap_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ZoneMap.BP_ZoneMap_C.PlanetMap_ZoneMagnetism
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Magnetized                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::PlanetMap_ZoneMagnetism(bool* Magnetized)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.PlanetMap_ZoneMagnetism");

	ABP_ZoneMap_C_PlanetMap_ZoneMagnetism_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Magnetized != nullptr)
		*Magnetized = params.Magnetized;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Initialize_Level_Map_DMIs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Initialize_Level_Map_DMIs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Initialize_Level_Map_DMIs");

	ABP_ZoneMap_C_Initialize_Level_Map_DMIs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Set_Keyframes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 Transform_Target_Keyframe      (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          Rotation_Pitch_Target_Keyframe (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale_Target_Keyframe          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::Set_Keyframes(const struct FVector& Transform_Target_Keyframe, float Rotation_Pitch_Target_Keyframe, float Scale_Target_Keyframe)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Set_Keyframes");

	ABP_ZoneMap_C_Set_Keyframes_Params params;
	params.Transform_Target_Keyframe = Transform_Target_Keyframe;
	params.Rotation_Pitch_Target_Keyframe = Rotation_Pitch_Target_Keyframe;
	params.Scale_Target_Keyframe = Scale_Target_Keyframe;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Clear_Keyframes
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Clear_Keyframes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Clear_Keyframes");

	ABP_ZoneMap_C_Clear_Keyframes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Get_Planet_Gimbal_Target
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Get_Planet_Gimbal_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Get_Planet_Gimbal_Target");

	ABP_ZoneMap_C_Get_Planet_Gimbal_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Get_Planet_and_Galaxy_Scale_Target
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Get_Planet_and_Galaxy_Scale_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Get_Planet_and_Galaxy_Scale_Target");

	ABP_ZoneMap_C_Get_Planet_and_Galaxy_Scale_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Get_Planet_Rotation_Target
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Get_Planet_Rotation_Target()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Get_Planet_Rotation_Target");

	ABP_ZoneMap_C_Get_Planet_Rotation_Target_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Initialize_LevelMap_Camera_Properties
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Initialize_LevelMap_Camera_Properties()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Initialize_LevelMap_Camera_Properties");

	ABP_ZoneMap_C_Initialize_LevelMap_Camera_Properties_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.SetGamma
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Gamma                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::SetGamma(float Gamma)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.SetGamma");

	ABP_ZoneMap_C_SetGamma_Params params;
	params.Gamma = Gamma;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Planet_Recenter
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInstant                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::Planet_Recenter(bool bInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Planet_Recenter");

	ABP_ZoneMap_C_Planet_Recenter_Params params;
	params.bInstant = bInstant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.SetCameraLag
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Location_Lag                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Rotation_Lag                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Location_Lag_Speed             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Rotation_Lag_Speed             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::SetCameraLag(bool Location_Lag, bool Rotation_Lag, float Location_Lag_Speed, float Rotation_Lag_Speed)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.SetCameraLag");

	ABP_ZoneMap_C_SetCameraLag_Params params;
	params.Location_Lag = Location_Lag;
	params.Rotation_Lag = Rotation_Lag;
	params.Location_Lag_Speed = Location_Lag_Speed;
	params.Rotation_Lag_Speed = Rotation_Lag_Speed;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.ViewChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bShowingZoneMap                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::ViewChanged(bool bShowingZoneMap)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.ViewChanged");

	ABP_ZoneMap_C_ViewChanged_Params params;
	params.bShowingZoneMap = bShowingZoneMap;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Update_ZoneMap_DMIs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Update_ZoneMap_DMIs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Update_ZoneMap_DMIs");

	ABP_ZoneMap_C_Update_ZoneMap_DMIs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.FocusOnPlanet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlanetData*             Planet                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::FocusOnPlanet(class UPlanetData* Planet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.FocusOnPlanet");

	ABP_ZoneMap_C_FocusOnPlanet_Params params;
	params.Planet = Planet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.SpawnGalaxyMapPOIs
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGalaxyMapData_C*        Galaxy_Map_Data                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::SpawnGalaxyMapPOIs(class UGalaxyMapData_C* Galaxy_Map_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.SpawnGalaxyMapPOIs");

	ABP_ZoneMap_C_SpawnGalaxyMapPOIs_Params params;
	params.Galaxy_Map_Data = Galaxy_Map_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.GetGalaxyRotationTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::GetGalaxyRotationTarget(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.GetGalaxyRotationTarget");

	ABP_ZoneMap_C_GetGalaxyRotationTarget_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.SetLevelMapPostProcess
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::SetLevelMapPostProcess()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.SetLevelMapPostProcess");

	ABP_ZoneMap_C_SetLevelMapPostProcess_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.K2_GetRotationYawTarget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         YawMin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         YawMax                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ZoneMap_C::K2_GetRotationYawTarget(float* DeltaSeconds, float* YawMin, float* YawMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.K2_GetRotationYawTarget");

	ABP_ZoneMap_C_K2_GetRotationYawTarget_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.YawMin = YawMin;
	params.YawMax = YawMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ZoneMap.BP_ZoneMap_C.K2_GetRotationPitchTarget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ZoneMap_C::K2_GetRotationPitchTarget(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.K2_GetRotationPitchTarget");

	ABP_ZoneMap_C_K2_GetRotationPitchTarget_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ZoneMap.BP_ZoneMap_C.K2_GetNewTransformTarget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector*                TransformMin                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector*                TransformMax                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float*                         TransformBuffer                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         GlobalTransformScale           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float*                         ZoomDelta                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ZoneMap_C::K2_GetNewTransformTarget(float* DeltaSeconds, struct FVector* TransformMin, struct FVector* TransformMax, float* TransformBuffer, float* GlobalTransformScale, float* ZoomDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.K2_GetNewTransformTarget");

	ABP_ZoneMap_C_K2_GetNewTransformTarget_Params params;
	params.DeltaSeconds = DeltaSeconds;
	params.TransformMin = TransformMin;
	params.TransformMax = TransformMax;
	params.TransformBuffer = TransformBuffer;
	params.GlobalTransformScale = GlobalTransformScale;
	params.ZoomDelta = ZoomDelta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ZoneMap.BP_ZoneMap_C.K2_GetNewScaleTarget
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          ZoomDelta                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ZoneMap_C::K2_GetNewScaleTarget(float* DeltaSeconds, float* ZoomDelta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.K2_GetNewScaleTarget");

	ABP_ZoneMap_C_K2_GetNewScaleTarget_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (ZoomDelta != nullptr)
		*ZoomDelta = params.ZoomDelta;

	return params.ReturnValue;
}


// Function BP_ZoneMap.BP_ZoneMap_C.K2_UpdateTransforms
// (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ZoneMap_C::K2_UpdateTransforms(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.K2_UpdateTransforms");

	ABP_ZoneMap_C_K2_UpdateTransforms_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ZoneMap.BP_ZoneMap_C.SetVisibleRadiusBP
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UMaterialInstanceDynamic*> DMIArray                       (BlueprintVisible, Parm, OutParm, ZeroConstructor, ReferenceParm)
// float                          Alpha                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          RadiusAlpha                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Distortion                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::SetVisibleRadiusBP(float Alpha, float RadiusAlpha, float Distortion, TArray<class UMaterialInstanceDynamic*>* DMIArray)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.SetVisibleRadiusBP");

	ABP_ZoneMap_C_SetVisibleRadiusBP_Params params;
	params.Alpha = Alpha;
	params.RadiusAlpha = RadiusAlpha;
	params.Distortion = Distortion;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (DMIArray != nullptr)
		*DMIArray = params.DMIArray;
}


// Function BP_ZoneMap.BP_ZoneMap_C.LevelMapTickNative
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::LevelMapTickNative()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.LevelMapTickNative");

	ABP_ZoneMap_C_LevelMapTickNative_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Set Transitioning
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           transitioning                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::Set_Transitioning(bool transitioning)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Set Transitioning");

	ABP_ZoneMap_C_Set_Transitioning_Params params;
	params.transitioning = transitioning;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Set Global LUT Visibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Visibile                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::Set_Global_LUT_Visibility(bool Visibile)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Set Global LUT Visibility");

	ABP_ZoneMap_C_Set_Global_LUT_Visibility_Params params;
	params.Visibile = Visibile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Get New Scale Target
// (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Seconds                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale_Min                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale_Max                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Scale_Rate                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Zoom_Delta                     (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::Get_New_Scale_Target(float Delta_Seconds, float Scale_Min, float Scale_Max, float Scale_Rate, float* Zoom_Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Get New Scale Target");

	ABP_ZoneMap_C_Get_New_Scale_Target_Params params;
	params.Delta_Seconds = Delta_Seconds;
	params.Scale_Min = Scale_Min;
	params.Scale_Max = Scale_Max;
	params.Scale_Rate = Scale_Rate;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Zoom_Delta != nullptr)
		*Zoom_Delta = params.Zoom_Delta;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Get Normalized Distance To POI Center
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class USphereComponent*        POI_Collision_Sphere           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData)
// struct FVector                 Hit_Location                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

float ABP_ZoneMap_C::Get_Normalized_Distance_To_POI_Center(class USphereComponent* POI_Collision_Sphere, const struct FVector& Hit_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Get Normalized Distance To POI Center");

	ABP_ZoneMap_C_Get_Normalized_Distance_To_POI_Center_Params params;
	params.POI_Collision_Sphere = POI_Collision_Sphere;
	params.Hit_Location = Hit_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Reset Axis Input
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Reset_Axis_Input()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Reset Axis Input");

	ABP_ZoneMap_C_Reset_Axis_Input_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.K2_HandleInputAction
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  InputAction                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ZoneMap_C::K2_HandleInputAction(struct FName* InputAction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.K2_HandleInputAction");

	ABP_ZoneMap_C_K2_HandleInputAction_Params params;
	params.InputAction = InputAction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ZoneMap.BP_ZoneMap_C.K2_HandleAxisInput
// (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FName*                  InputAction                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData)
// float*                         AxisValue                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool ABP_ZoneMap_C::K2_HandleAxisInput(struct FName* InputAction, float* AxisValue)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.K2_HandleAxisInput");

	ABP_ZoneMap_C_K2_HandleAxisInput_Params params;
	params.InputAction = InputAction;
	params.AxisValue = AxisValue;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Update Party Memeber Locations
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Update_Party_Memeber_Locations()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Update Party Memeber Locations");

	ABP_ZoneMap_C_Update_Party_Memeber_Locations_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Focus Level
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UZoneMapData*            Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInstant                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::Focus_Level(class UZoneMapData* Level, bool bInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Focus Level");

	ABP_ZoneMap_C_Focus_Level_Params params;
	params.Level = Level;
	params.bInstant = bInstant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Get Rotation For Level Transition
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FRotator                ReturnValue                    (Parm, OutParm, ReturnParm, IsPlainOldData)

struct FRotator ABP_ZoneMap_C::Get_Rotation_For_Level_Transition()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Get Rotation For Level Transition");

	ABP_ZoneMap_C_Get_Rotation_For_Level_Transition_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function BP_ZoneMap.BP_ZoneMap_C.TransitionToLevel
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UZoneMapData*            Level_Data                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::TransitionToLevel(class UZoneMapData* Level_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.TransitionToLevel");

	ABP_ZoneMap_C_TransitionToLevel_Params params;
	params.Level_Data = Level_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.TransitionToPlanet
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlanetMapData_C*        Planet_Map_Data                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::TransitionToPlanet(class UPlanetMapData_C* Planet_Map_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.TransitionToPlanet");

	ABP_ZoneMap_C_TransitionToPlanet_Params params;
	params.Planet_Map_Data = Planet_Map_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Get Default Level Map Pivot
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Point_Of_Interest_Transform_Location (Parm, OutParm, IsPlainOldData)

void ABP_ZoneMap_C::Get_Default_Level_Map_Pivot(struct FVector* Point_Of_Interest_Transform_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Get Default Level Map Pivot");

	ABP_ZoneMap_C_Get_Default_Level_Map_Pivot_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Point_Of_Interest_Transform_Location != nullptr)
		*Point_Of_Interest_Transform_Location = params.Point_Of_Interest_Transform_Location;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Base Tick
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Seconds                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::Base_Tick(float Delta_Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Base Tick");

	ABP_ZoneMap_C_Base_Tick_Params params;
	params.Delta_Seconds = Delta_Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.DestroyGalaxyMapComponents
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::DestroyGalaxyMapComponents()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.DestroyGalaxyMapComponents");

	ABP_ZoneMap_C_DestroyGalaxyMapComponents_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.GalaxyMapTick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::GalaxyMapTick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.GalaxyMapTick");

	ABP_ZoneMap_C_GalaxyMapTick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.InitializeMapForGalaxy
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UGalaxyMapData_C*        Galaxy_Map_Data                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::InitializeMapForGalaxy(class UGalaxyMapData_C* Galaxy_Map_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.InitializeMapForGalaxy");

	ABP_ZoneMap_C_InitializeMapForGalaxy_Params params;
	params.Galaxy_Map_Data = Galaxy_Map_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Destroy Planet Map Components
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Destroy_Planet_Map_Components()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Destroy Planet Map Components");

	ABP_ZoneMap_C_Destroy_Planet_Map_Components_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Destroy Map Actor
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Destroy_Map_Actor()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Destroy Map Actor");

	ABP_ZoneMap_C_Destroy_Map_Actor_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Get Rotation Pitch Target
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::Get_Rotation_Pitch_Target(float DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Get Rotation Pitch Target");

	ABP_ZoneMap_C_Get_Rotation_Pitch_Target_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Get Rotation Yaw Target
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Seconds                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          YawMin                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          YawMax                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::Get_Rotation_Yaw_Target(float Delta_Seconds, float YawMin, float YawMax)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Get Rotation Yaw Target");

	ABP_ZoneMap_C_Get_Rotation_Yaw_Target_Params params;
	params.Delta_Seconds = Delta_Seconds;
	params.YawMin = YawMin;
	params.YawMax = YawMax;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Planet Map Tick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Planet_Map_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Planet Map Tick");

	ABP_ZoneMap_C_Planet_Map_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Level Map Tick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Level_Map_Tick()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Level Map Tick");

	ABP_ZoneMap_C_Level_Map_Tick_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Create Compass and Grid
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Create_Compass_and_Grid()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Create Compass and Grid");

	ABP_ZoneMap_C_Create_Compass_and_Grid_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.InitializeMapForPlanet
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlanetData*             Planet_Data                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::InitializeMapForPlanet(class UPlanetData* Planet_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.InitializeMapForPlanet");

	ABP_ZoneMap_C_InitializeMapForPlanet_Params params;
	params.Planet_Data = Planet_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Set Pivot to Actor World Location
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                 World_Location                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)

void ABP_ZoneMap_C::Set_Pivot_to_Actor_World_Location(const struct FVector& World_Location)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Set Pivot to Actor World Location");

	ABP_ZoneMap_C_Set_Pivot_to_Actor_World_Location_Params params;
	params.World_Location = World_Location;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Destroy Level Map Components
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Destroy_Level_Map_Components()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Destroy Level Map Components");

	ABP_ZoneMap_C_Destroy_Level_Map_Components_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Get New Transform Target
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Seconds                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// struct FVector                 TransformMin                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 TransformMax                   (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// float                          TransformBuffer                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Global_Transform_Scale         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// float                          Zoom_Delta                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::Get_New_Transform_Target(float Delta_Seconds, const struct FVector& TransformMin, const struct FVector& TransformMax, float TransformBuffer, float Global_Transform_Scale, float Zoom_Delta)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Get New Transform Target");

	ABP_ZoneMap_C_Get_New_Transform_Target_Params params;
	params.Delta_Seconds = Delta_Seconds;
	params.TransformMin = TransformMin;
	params.TransformMax = TransformMax;
	params.TransformBuffer = TransformBuffer;
	params.Global_Transform_Scale = Global_Transform_Scale;
	params.Zoom_Delta = Zoom_Delta;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Add Zone Map Mesh Sections
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UZoneMapMeshData*        Zone_Map_Mesh_Data             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::Add_Zone_Map_Mesh_Sections(class UZoneMapMeshData* Zone_Map_Mesh_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Add Zone Map Mesh Sections");

	ABP_ZoneMap_C_Add_Zone_Map_Mesh_Sections_Params params;
	params.Zone_Map_Mesh_Data = Zone_Map_Mesh_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Get Player's Current Zone Section
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Section_Index                  (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::Get_Player_s_Current_Zone_Section(int* Section_Index)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Get Player's Current Zone Section");

	ABP_ZoneMap_C_Get_Player_s_Current_Zone_Section_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Section_Index != nullptr)
		*Section_Index = params.Section_Index;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Cycle Zone Map Sections
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int                            Direction                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::Cycle_Zone_Map_Sections(int Direction)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Cycle Zone Map Sections");

	ABP_ZoneMap_C_Cycle_Zone_Map_Sections_Params params;
	params.Direction = Direction;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Box Constraint
// (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector                 Vector_To_Constrain            (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Bounds_Origin                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Bounds_Extent                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData)
// struct FVector                 Result                         (Parm, OutParm, IsPlainOldData)

void ABP_ZoneMap_C::Box_Constraint(const struct FVector& Vector_To_Constrain, const struct FVector& Bounds_Origin, const struct FVector& Bounds_Extent, struct FVector* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Box Constraint");

	ABP_ZoneMap_C_Box_Constraint_Params params;
	params.Vector_To_Constrain = Vector_To_Constrain;
	params.Bounds_Origin = Bounds_Origin;
	params.Bounds_Extent = Bounds_Extent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Initialize Point Cloud Particle System
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UZoneMapMeshData*        Zone_Map_Mesh_Data             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::Initialize_Point_Cloud_Particle_System(class UZoneMapMeshData* Zone_Map_Mesh_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Initialize Point Cloud Particle System");

	ABP_ZoneMap_C_Initialize_Point_Cloud_Particle_System_Params params;
	params.Zone_Map_Mesh_Data = Zone_Map_Mesh_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Update Transforms For Level Map
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Delta_Seconds                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::Update_Transforms_For_Level_Map(float Delta_Seconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Update Transforms For Level Map");

	ABP_ZoneMap_C_Update_Transforms_For_Level_Map_Params params;
	params.Delta_Seconds = Delta_Seconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.InitializeMapForLevel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UZoneMapData*            Level_Map_Data                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::InitializeMapForLevel(class UZoneMapData* Level_Map_Data)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.InitializeMapForLevel");

	ABP_ZoneMap_C_InitializeMapForLevel_Params params;
	params.Level_Map_Data = Level_Map_Data;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Set Pivot To Actor
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  Actor                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           bInstant                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::Set_Pivot_To_Actor(class AActor* Actor, bool bInstant)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Set Pivot To Actor");

	ABP_ZoneMap_C_Set_Pivot_To_Actor_Params params;
	params.Actor = Actor;
	params.bInstant = bInstant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Reset Map Orienation 
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           Snap_to_Player                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Reset_Orientation              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
// bool                           Instant                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::Reset_Map_Orienation_(bool Snap_to_Player, bool Reset_Orientation, bool Instant)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Reset Map Orienation ");

	ABP_ZoneMap_C_Reset_Map_Orienation__Params params;
	params.Snap_to_Player = Snap_to_Player;
	params.Reset_Orientation = Reset_Orientation;
	params.Instant = Instant;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Add Decoration Meshes
// (Public, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Add_Decoration_Meshes()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Add Decoration Meshes");

	ABP_ZoneMap_C_Add_Decoration_Meshes_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.UserConstructionScript");

	ABP_ZoneMap_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Alpha__FinishedFunc
// (BlueprintEvent)

void ABP_ZoneMap_C::Alpha__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Alpha__FinishedFunc");

	ABP_ZoneMap_C_Alpha__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Alpha__UpdateFunc
// (BlueprintEvent)

void ABP_ZoneMap_C::Alpha__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Alpha__UpdateFunc");

	ABP_ZoneMap_C_Alpha__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Alpha__Transition Done__EventFunc
// (BlueprintEvent)

void ABP_ZoneMap_C::Alpha__Transition_Done__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Alpha__Transition Done__EventFunc");

	ABP_ZoneMap_C_Alpha__Transition_Done__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Dismiss__FinishedFunc
// (BlueprintEvent)

void ABP_ZoneMap_C::Dismiss__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Dismiss__FinishedFunc");

	ABP_ZoneMap_C_Dismiss__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Dismiss__UpdateFunc
// (BlueprintEvent)

void ABP_ZoneMap_C::Dismiss__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Dismiss__UpdateFunc");

	ABP_ZoneMap_C_Dismiss__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Galaxy To Planet__FinishedFunc
// (BlueprintEvent)

void ABP_ZoneMap_C::Galaxy_To_Planet__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Galaxy To Planet__FinishedFunc");

	ABP_ZoneMap_C_Galaxy_To_Planet__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Galaxy To Planet__UpdateFunc
// (BlueprintEvent)

void ABP_ZoneMap_C::Galaxy_To_Planet__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Galaxy To Planet__UpdateFunc");

	ABP_ZoneMap_C_Galaxy_To_Planet__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Planet From Galaxy__FinishedFunc
// (BlueprintEvent)

void ABP_ZoneMap_C::Planet_From_Galaxy__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Planet From Galaxy__FinishedFunc");

	ABP_ZoneMap_C_Planet_From_Galaxy__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Planet From Galaxy__UpdateFunc
// (BlueprintEvent)

void ABP_ZoneMap_C::Planet_From_Galaxy__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Planet From Galaxy__UpdateFunc");

	ABP_ZoneMap_C_Planet_From_Galaxy__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Planet From Galaxy__Transition Over__EventFunc
// (BlueprintEvent)

void ABP_ZoneMap_C::Planet_From_Galaxy__Transition_Over__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Planet From Galaxy__Transition Over__EventFunc");

	ABP_ZoneMap_C_Planet_From_Galaxy__Transition_Over__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Timeline_1__FinishedFunc
// (BlueprintEvent)

void ABP_ZoneMap_C::Timeline_1__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Timeline_1__FinishedFunc");

	ABP_ZoneMap_C_Timeline_1__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Timeline_1__UpdateFunc
// (BlueprintEvent)

void ABP_ZoneMap_C::Timeline_1__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Timeline_1__UpdateFunc");

	ABP_ZoneMap_C_Timeline_1__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Timeline_1__Transition Over__EventFunc
// (BlueprintEvent)

void ABP_ZoneMap_C::Timeline_1__Transition_Over__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Timeline_1__Transition Over__EventFunc");

	ABP_ZoneMap_C_Timeline_1__Transition_Over__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Planet to Galaxy__FinishedFunc
// (BlueprintEvent)

void ABP_ZoneMap_C::Planet_to_Galaxy__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Planet to Galaxy__FinishedFunc");

	ABP_ZoneMap_C_Planet_to_Galaxy__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Planet to Galaxy__UpdateFunc
// (BlueprintEvent)

void ABP_ZoneMap_C::Planet_to_Galaxy__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Planet to Galaxy__UpdateFunc");

	ABP_ZoneMap_C_Planet_to_Galaxy__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Planet To Level__FinishedFunc
// (BlueprintEvent)

void ABP_ZoneMap_C::Planet_To_Level__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Planet To Level__FinishedFunc");

	ABP_ZoneMap_C_Planet_To_Level__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Planet To Level__UpdateFunc
// (BlueprintEvent)

void ABP_ZoneMap_C::Planet_To_Level__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Planet To Level__UpdateFunc");

	ABP_ZoneMap_C_Planet_To_Level__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Timeline_0__FinishedFunc
// (BlueprintEvent)

void ABP_ZoneMap_C::Timeline_0__FinishedFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Timeline_0__FinishedFunc");

	ABP_ZoneMap_C_Timeline_0__FinishedFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Timeline_0__UpdateFunc
// (BlueprintEvent)

void ABP_ZoneMap_C::Timeline_0__UpdateFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Timeline_0__UpdateFunc");

	ABP_ZoneMap_C_Timeline_0__UpdateFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Timeline_0__Transition Over__EventFunc
// (BlueprintEvent)

void ABP_ZoneMap_C::Timeline_0__Transition_Over__EventFunc()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Timeline_0__Transition Over__EventFunc");

	ABP_ZoneMap_C_Timeline_0__Transition_Over__EventFunc_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_16
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ZoneMap_C::InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_16(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_16");

	ABP_ZoneMap_C_InpActEvt_Gamepad_FaceButton_Right_K2Node_InputKeyEvent_16_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_15
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ZoneMap_C::InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_15(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_15");

	ABP_ZoneMap_C_InpActEvt_Gamepad_FaceButton_Bottom_K2Node_InputKeyEvent_15_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_14
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ZoneMap_C::InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_14(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_14");

	ABP_ZoneMap_C_InpActEvt_Gamepad_LeftShoulder_K2Node_InputKeyEvent_14_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_13
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ZoneMap_C::InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_13(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_13");

	ABP_ZoneMap_C_InpActEvt_Gamepad_RightShoulder_K2Node_InputKeyEvent_13_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_12
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ZoneMap_C::InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_12(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_12");

	ABP_ZoneMap_C_InpActEvt_Gamepad_LeftThumbstick_K2Node_InputKeyEvent_12_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_11
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ZoneMap_C::InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_11(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_11");

	ABP_ZoneMap_C_InpActEvt_Gamepad_FaceButton_Top_K2Node_InputKeyEvent_11_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_10
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ZoneMap_C::InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_10(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_10");

	ABP_ZoneMap_C_InpActEvt_Gamepad_RightThumbstick_K2Node_InputKeyEvent_10_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_9
// (BlueprintEvent)
// Parameters:
// struct FKey                    Key                            (BlueprintVisible, BlueprintReadOnly, Parm)

void ABP_ZoneMap_C::InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_9(const struct FKey& Key)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_9");

	ABP_ZoneMap_C_InpActEvt_Gamepad_FaceButton_Left_K2Node_InputKeyEvent_9_Params params;
	params.Key = Key;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)

void ABP_ZoneMap_C::ReceiveBeginPlay()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.ReceiveBeginPlay");

	ABP_ZoneMap_C_ReceiveBeginPlay_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float*                         DeltaSeconds                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::ReceiveTick(float* DeltaSeconds)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.ReceiveTick");

	ABP_ZoneMap_C_ReceiveTick_Params params;
	params.DeltaSeconds = DeltaSeconds;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)

void ABP_ZoneMap_C::ReceiveDestroyed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.ReceiveDestroyed");

	ABP_ZoneMap_C_ReceiveDestroyed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.GbxMenu_RightStickAxisX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::GbxMenu_RightStickAxisX(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.GbxMenu_RightStickAxisX");

	ABP_ZoneMap_C_GbxMenu_RightStickAxisX_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.GbxMenu_RightStickAxisY
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::GbxMenu_RightStickAxisY(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.GbxMenu_RightStickAxisY");

	ABP_ZoneMap_C_GbxMenu_RightStickAxisY_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.OakMenu_MapZoomOut
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::OakMenu_MapZoomOut(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.OakMenu_MapZoomOut");

	ABP_ZoneMap_C_OakMenu_MapZoomOut_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.OakMenu_MapZoomIn
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::OakMenu_MapZoomIn(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.OakMenu_MapZoomIn");

	ABP_ZoneMap_C_OakMenu_MapZoomIn_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Stop Level Map Effects
// (BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Stop_Level_Map_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Stop Level Map Effects");

	ABP_ZoneMap_C_Stop_Level_Map_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Open Parent Menu
// (BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Open_Parent_Menu()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Open Parent Menu");

	ABP_ZoneMap_C_Open_Parent_Menu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Shutdown Map
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                           bInstantShutdown               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::Shutdown_Map(bool bInstantShutdown)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Shutdown Map");

	ABP_ZoneMap_C_Shutdown_Map_Params params;
	params.bInstantShutdown = bInstantShutdown;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.GbxMenu_LeftStickAxisX
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::GbxMenu_LeftStickAxisX(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.GbxMenu_LeftStickAxisX");

	ABP_ZoneMap_C_GbxMenu_LeftStickAxisX_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.GbxMenu_LeftStickAxisY
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                          Axis_Value                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::GbxMenu_LeftStickAxisY(float Axis_Value)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.GbxMenu_LeftStickAxisY");

	ABP_ZoneMap_C_GbxMenu_LeftStickAxisY_Params params;
	params.Axis_Value = Axis_Value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Play Planet Map Effects
// (BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Play_Planet_Map_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Play Planet Map Effects");

	ABP_ZoneMap_C_Play_Planet_Map_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Stop Planet Map Effects
// (BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Stop_Planet_Map_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Stop Planet Map Effects");

	ABP_ZoneMap_C_Stop_Planet_Map_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Play Galaxy Map Effects
// (BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Play_Galaxy_Map_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Play Galaxy Map Effects");

	ABP_ZoneMap_C_Play_Galaxy_Map_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Stop Galaxy Map Effects
// (BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Stop_Galaxy_Map_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Stop Galaxy Map Effects");

	ABP_ZoneMap_C_Stop_Galaxy_Map_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Close Level Mode
// (BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Close_Level_Mode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Close Level Mode");

	ABP_ZoneMap_C_Close_Level_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Close Planet Mode
// (BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Close_Planet_Mode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Close Planet Mode");

	ABP_ZoneMap_C_Close_Planet_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.On Completed Dismissal Effects
// (BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::On_Completed_Dismissal_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.On Completed Dismissal Effects");

	ABP_ZoneMap_C_On_Completed_Dismissal_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Close Galaxy Mode
// (BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Close_Galaxy_Mode()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Close Galaxy Mode");

	ABP_ZoneMap_C_Close_Galaxy_Mode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Set Local Waypoint
// (BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Set_Local_Waypoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Set Local Waypoint");

	ABP_ZoneMap_C_Set_Local_Waypoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Manual Recenter
// (BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Manual_Recenter()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Manual Recenter");

	ABP_ZoneMap_C_Manual_Recenter_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.K2_GotoLevelMap
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UZoneMapData**           InLevelData                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::K2_GotoLevelMap(class UZoneMapData** InLevelData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.K2_GotoLevelMap");

	ABP_ZoneMap_C_K2_GotoLevelMap_Params params;
	params.InLevelData = InLevelData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.K2_GotoPlanetMap
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UPlanetData**            InPlanetData                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::K2_GotoPlanetMap(class UPlanetData** InPlanetData)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.K2_GotoPlanetMap");

	ABP_ZoneMap_C_K2_GotoPlanetMap_Params params;
	params.InPlanetData = InPlanetData;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.K2_GotoParentMap
// (Event, Protected, BlueprintEvent)

void ABP_ZoneMap_C::K2_GotoParentMap()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.K2_GotoParentMap");

	ABP_ZoneMap_C_K2_GotoParentMap_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.K2_ResetAxisInput
// (Event, Protected, BlueprintEvent)

void ABP_ZoneMap_C::K2_ResetAxisInput()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.K2_ResetAxisInput");

	ABP_ZoneMap_C_K2_ResetAxisInput_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.K2_FocusOnTransform
// (Event, Protected, HasOutParms, BlueprintEvent)
// Parameters:
// struct FTransform*             Transform                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData)

void ABP_ZoneMap_C::K2_FocusOnTransform(struct FTransform* Transform)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.K2_FocusOnTransform");

	ABP_ZoneMap_C_K2_FocusOnTransform_Params params;
	params.Transform = Transform;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.K2_CenterOnPlayer
// (Event, Protected, BlueprintEvent)

void ABP_ZoneMap_C::K2_CenterOnPlayer()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.K2_CenterOnPlayer");

	ABP_ZoneMap_C_K2_CenterOnPlayer_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.K2_FocusOnLevel
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UZoneMapData**           Level                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::K2_FocusOnLevel(class UZoneMapData** Level)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.K2_FocusOnLevel");

	ABP_ZoneMap_C_K2_FocusOnLevel_Params params;
	params.Level = Level;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.K2_FocusOnPlanet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UPlanetData**            Planet                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::K2_FocusOnPlanet(class UPlanetData** Planet)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.K2_FocusOnPlanet");

	ABP_ZoneMap_C_K2_FocusOnPlanet_Params params;
	params.Planet = Planet;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.K2_SetCustomWaypoint
// (Event, Protected, BlueprintEvent)

void ABP_ZoneMap_C::K2_SetCustomWaypoint()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.K2_SetCustomWaypoint");

	ABP_ZoneMap_C_K2_SetCustomWaypoint_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.K2_PostLoadedMapMesh
// (Event, Public, BlueprintEvent)

void ABP_ZoneMap_C::K2_PostLoadedMapMesh()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.K2_PostLoadedMapMesh");

	ABP_ZoneMap_C_K2_PostLoadedMapMesh_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.K2_OnMiniMapShown
// (Event, Public, BlueprintEvent)

void ABP_ZoneMap_C::K2_OnMiniMapShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.K2_OnMiniMapShown");

	ABP_ZoneMap_C_K2_OnMiniMapShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.K2_OnEchoOpened
// (Event, Public, BlueprintEvent)

void ABP_ZoneMap_C::K2_OnEchoOpened()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.K2_OnEchoOpened");

	ABP_ZoneMap_C_K2_OnEchoOpened_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.K2_OnZoneMapShown
// (Event, Public, BlueprintEvent)

void ABP_ZoneMap_C::K2_OnZoneMapShown()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.K2_OnZoneMapShown");

	ABP_ZoneMap_C_K2_OnZoneMapShown_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.K2_OnEchoClosed
// (Event, Public, BlueprintEvent)

void ABP_ZoneMap_C::K2_OnEchoClosed()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.K2_OnEchoClosed");

	ABP_ZoneMap_C_K2_OnEchoClosed_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.CustomEvent_1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                  NewlyFocusedPOI                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::CustomEvent_1(class AActor* NewlyFocusedPOI)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.CustomEvent_1");

	ABP_ZoneMap_C_CustomEvent_1_Params params;
	params.NewlyFocusedPOI = NewlyFocusedPOI;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.DEBUG Cycle Planet Map POIs
// (BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::DEBUG_Cycle_Planet_Map_POIs()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.DEBUG Cycle Planet Map POIs");

	ABP_ZoneMap_C_DEBUG_Cycle_Planet_Map_POIs_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.Play Level Map Effects
// (BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::Play_Level_Map_Effects()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.Play Level Map Effects");

	ABP_ZoneMap_C_Play_Level_Map_Effects_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.K2_OnZoneMapHidden
// (Event, Public, BlueprintEvent)

void ABP_ZoneMap_C::K2_OnZoneMapHidden()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.K2_OnZoneMapHidden");

	ABP_ZoneMap_C_K2_OnZoneMapHidden_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.K2_PostLoadedPlanetClass
// (Event, Public, BlueprintEvent)

void ABP_ZoneMap_C::K2_PostLoadedPlanetClass()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.K2_PostLoadedPlanetClass");

	ABP_ZoneMap_C_K2_PostLoadedPlanetClass_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.ExecuteUbergraph_BP_ZoneMap
// (HasDefaults)
// Parameters:
// int                            EntryPoint                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)

void ABP_ZoneMap_C::ExecuteUbergraph_BP_ZoneMap(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.ExecuteUbergraph_BP_ZoneMap");

	ABP_ZoneMap_C_ExecuteUbergraph_BP_ZoneMap_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.On Close Level Mode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::On_Close_Level_Mode__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.On Close Level Mode__DelegateSignature");

	ABP_ZoneMap_C_On_Close_Level_Mode__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.On Close Galaxy Mode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::On_Close_Galaxy_Mode__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.On Close Galaxy Mode__DelegateSignature");

	ABP_ZoneMap_C_On_Close_Galaxy_Mode__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ZoneMap.BP_ZoneMap_C.On Close Planet Mode__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)

void ABP_ZoneMap_C::On_Close_Planet_Mode__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ZoneMap.BP_ZoneMap_C.On Close Planet Mode__DelegateSignature");

	ABP_ZoneMap_C_On_Close_Planet_Mode__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
