#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{

// Class GeometryCollectionEngine.ChaosDestructionListener
// (SceneComponent)

class UClass* UChaosDestructionListener::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChaosDestructionListener");

	return Clss;
}


// ChaosDestructionListener GeometryCollectionEngine.Default__ChaosDestructionListener
// (Public, ClassDefaultObject, ArchetypeObject)

class UChaosDestructionListener* UChaosDestructionListener::GetDefaultObj()
{
	static class UChaosDestructionListener* Default = nullptr;

	if (!Default)
		Default = static_cast<UChaosDestructionListener*>(UChaosDestructionListener::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FChaosTrailingEventData>TrailingEvents                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EChaosTrailingSortMethodSortMethod                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosDestructionListener::SortTrailingEvents(TArray<struct FChaosTrailingEventData>& TrailingEvents, enum class EChaosTrailingSortMethod SortMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChaosDestructionListener", "SortTrailingEvents");

	Params::UChaosDestructionListener_SortTrailingEvents_Params Parms{};

	Parms.TrailingEvents = TrailingEvents;
	Parms.SortMethod = SortMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FChaosCollisionEventData>CollisionEvents                                                  (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EChaosCollisionSortMethodSortMethod                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosDestructionListener::SortCollisionEvents(TArray<struct FChaosCollisionEventData>& CollisionEvents, enum class EChaosCollisionSortMethod SortMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChaosDestructionListener", "SortCollisionEvents");

	Params::UChaosDestructionListener_SortCollisionEvents_Params Parms{};

	Parms.CollisionEvents = CollisionEvents;
	Parms.SortMethod = SortMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FChaosBreakingEventData>BreakingEvents                                                   (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EChaosBreakingSortMethodSortMethod                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosDestructionListener::SortBreakingEvents(TArray<struct FChaosBreakingEventData>& BreakingEvents, enum class EChaosBreakingSortMethod SortMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChaosDestructionListener", "SortBreakingEvents");

	Params::UChaosDestructionListener_SortBreakingEvents_Params Parms{};

	Parms.BreakingEvents = BreakingEvents;
	Parms.SortMethod = SortMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChaosTrailingEventRequestSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UChaosDestructionListener::SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChaosDestructionListener", "SetTrailingEventRequestSettings");

	Params::UChaosDestructionListener_SetTrailingEventRequestSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosDestructionListener::SetTrailingEventEnabled(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChaosDestructionListener", "SetTrailingEventEnabled");

	Params::UChaosDestructionListener_SetTrailingEventEnabled_Params Parms{};

	Parms.bIsEnabled = bIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChaosCollisionEventRequestSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UChaosDestructionListener::SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChaosDestructionListener", "SetCollisionEventRequestSettings");

	Params::UChaosDestructionListener_SetCollisionEventRequestSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosDestructionListener::SetCollisionEventEnabled(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChaosDestructionListener", "SetCollisionEventEnabled");

	Params::UChaosDestructionListener_SetCollisionEventEnabled_Params Parms{};

	Parms.bIsEnabled = bIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChaosBreakingEventRequestSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UChaosDestructionListener::SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings& InSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChaosDestructionListener", "SetBreakingEventRequestSettings");

	Params::UChaosDestructionListener_SetBreakingEventRequestSettings_Params Parms{};

	Parms.InSettings = InSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosDestructionListener::SetBreakingEventEnabled(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChaosDestructionListener", "SetBreakingEventEnabled");

	Params::UChaosDestructionListener_SetBreakingEventEnabled_Params Parms{};

	Parms.bIsEnabled = bIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AGeometryCollectionActor*    GeometryCollectionActor                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosDestructionListener::RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChaosDestructionListener", "RemoveGeometryCollectionActor");

	Params::UChaosDestructionListener_RemoveGeometryCollectionActor_Params Parms{};

	Parms.GeometryCollectionActor = GeometryCollectionActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AChaosSolverActor*           ChaosSolverActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosDestructionListener::RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChaosDestructionListener", "RemoveChaosSolverActor");

	Params::UChaosDestructionListener_RemoveChaosSolverActor_Params Parms{};

	Parms.ChaosSolverActor = ChaosSolverActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UChaosDestructionListener::IsEventListening()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChaosDestructionListener", "IsEventListening");

	Params::UChaosDestructionListener_IsEventListening_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AGeometryCollectionActor*    GeometryCollectionActor                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosDestructionListener::AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChaosDestructionListener", "AddGeometryCollectionActor");

	Params::UChaosDestructionListener_AddGeometryCollectionActor_Params Parms{};

	Parms.GeometryCollectionActor = GeometryCollectionActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AChaosSolverActor*           ChaosSolverActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChaosDestructionListener::AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("ChaosDestructionListener", "AddChaosSolverActor");

	Params::UChaosDestructionListener_AddChaosSolverActor_Params Parms{};

	Parms.ChaosSolverActor = ChaosSolverActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryCollectionEngine.GeometryCollectionActor
// (Actor)

class UClass* AGeometryCollectionActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollectionActor");

	return Clss;
}


// GeometryCollectionActor GeometryCollectionEngine.Default__GeometryCollectionActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AGeometryCollectionActor* AGeometryCollectionActor::GetDefaultObj()
{
	static class AGeometryCollectionActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AGeometryCollectionActor*>(AGeometryCollectionActor::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     Start                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     End                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  OutHit                                                           (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool AGeometryCollectionActor::RaycastSingle(const struct FVector& Start, const struct FVector& End, struct FHitResult* OutHit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GeometryCollectionActor", "RaycastSingle");

	Params::AGeometryCollectionActor_RaycastSingle_Params Parms{};

	Parms.Start = Start;
	Parms.End = End;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutHit != nullptr)
		*OutHit = std::move(Parms.OutHit);

	return Parms.ReturnValue;

}


// Class GeometryCollectionEngine.GeometryCollectionCache
// (None)

class UClass* UGeometryCollectionCache::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollectionCache");

	return Clss;
}


// GeometryCollectionCache GeometryCollectionEngine.Default__GeometryCollectionCache
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCollectionCache* UGeometryCollectionCache::GetDefaultObj()
{
	static class UGeometryCollectionCache* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCollectionCache*>(UGeometryCollectionCache::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCollectionEngine.GeometryCollectionComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UGeometryCollectionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollectionComponent");

	return Clss;
}


// GeometryCollectionComponent GeometryCollectionEngine.Default__GeometryCollectionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCollectionComponent* UGeometryCollectionComponent::GetDefaultObj()
{
	static class UGeometryCollectionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCollectionComponent*>(UGeometryCollectionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewNotifyBreaks                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::SetNotifyBreaks(bool bNewNotifyBreaks)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GeometryCollectionComponent", "SetNotifyBreaks");

	Params::UGeometryCollectionComponent_SetNotifyBreaks_Params Parms{};

	Parms.bNewNotifyBreaks = bNewNotifyBreaks;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FChaosPhysicsCollisionInfo  CollisionInfo                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GeometryCollectionComponent", "ReceivePhysicsCollision");

	Params::UGeometryCollectionComponent_ReceivePhysicsCollision_Params Parms{};

	Parms.CollisionInfo = CollisionInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.OnRep_RepData
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FGeometryCollectionRepData  OldData                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::OnRep_RepData(struct FGeometryCollectionRepData& OldData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GeometryCollectionComponent", "OnRep_RepData");

	Params::UGeometryCollectionComponent_OnRep_RepData_Params Parms{};

	Parms.OldData = OldData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UGeometryCollectionComponent*FracturedComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GeometryCollectionComponent", "NotifyGeometryCollectionPhysicsStateChange__DelegateSignature");

	Params::UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsStateChange__DelegateSignature_Params Parms{};

	Parms.FracturedComponent = FracturedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UGeometryCollectionComponent*FracturedComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GeometryCollectionComponent", "NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature");

	Params::UGeometryCollectionComponent_NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature_Params Parms{};

	Parms.FracturedComponent = FracturedComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.NetAbandonCluster
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// int32                              TransformIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::NetAbandonCluster(int32 TransformIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GeometryCollectionComponent", "NetAbandonCluster");

	Params::UGeometryCollectionComponent_NetAbandonCluster_Params Parms{};

	Parms.TransformIndex = TransformIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGeometryCollectionPhysicsTypeEnumTarget                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldSystemMetaData*        MetaData                                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFieldNodeBase*              Field                                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GeometryCollectionComponent", "ApplyPhysicsField");

	Params::UGeometryCollectionComponent_ApplyPhysicsField_Params Parms{};

	Parms.Enabled = Enabled;
	Parms.Target = Target;
	Parms.MetaData = MetaData;
	Parms.Field = Field;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Position                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGeometryCollectionComponent::ApplyKinematicField(float Radius, const struct FVector& Position)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("GeometryCollectionComponent", "ApplyKinematicField");

	Params::UGeometryCollectionComponent_ApplyKinematicField_Params Parms{};

	Parms.Radius = Radius;
	Parms.Position = Position;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// (Actor)

class UClass* AGeometryCollectionDebugDrawActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollectionDebugDrawActor");

	return Clss;
}


// GeometryCollectionDebugDrawActor GeometryCollectionEngine.Default__GeometryCollectionDebugDrawActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AGeometryCollectionDebugDrawActor* AGeometryCollectionDebugDrawActor::GetDefaultObj()
{
	static class AGeometryCollectionDebugDrawActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AGeometryCollectionDebugDrawActor*>(AGeometryCollectionDebugDrawActor::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// (None)

class UClass* UGeometryCollectionDebugDrawComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollectionDebugDrawComponent");

	return Clss;
}


// GeometryCollectionDebugDrawComponent GeometryCollectionEngine.Default__GeometryCollectionDebugDrawComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCollectionDebugDrawComponent* UGeometryCollectionDebugDrawComponent::GetDefaultObj()
{
	static class UGeometryCollectionDebugDrawComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCollectionDebugDrawComponent*>(UGeometryCollectionDebugDrawComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCollectionEngine.GeometryCollection
// (None)

class UClass* UGeometryCollection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollection");

	return Clss;
}


// GeometryCollection GeometryCollectionEngine.Default__GeometryCollection
// (Public, ClassDefaultObject, ArchetypeObject)

class UGeometryCollection* UGeometryCollection::GetDefaultObj()
{
	static class UGeometryCollection* Default = nullptr;

	if (!Default)
		Default = static_cast<UGeometryCollection*>(UGeometryCollection::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// (Actor)

class UClass* AGeometryCollectionRenderLevelSetActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GeometryCollectionRenderLevelSetActor");

	return Clss;
}


// GeometryCollectionRenderLevelSetActor GeometryCollectionEngine.Default__GeometryCollectionRenderLevelSetActor
// (Public, ClassDefaultObject, ArchetypeObject)

class AGeometryCollectionRenderLevelSetActor* AGeometryCollectionRenderLevelSetActor::GetDefaultObj()
{
	static class AGeometryCollectionRenderLevelSetActor* Default = nullptr;

	if (!Default)
		Default = static_cast<AGeometryCollectionRenderLevelSetActor*>(AGeometryCollectionRenderLevelSetActor::StaticClass()->DefaultObject);

	return Default;
}


// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// (None)

class UClass* USkeletalMeshSimulationComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkeletalMeshSimulationComponent");

	return Clss;
}


// SkeletalMeshSimulationComponent GeometryCollectionEngine.Default__SkeletalMeshSimulationComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USkeletalMeshSimulationComponent* USkeletalMeshSimulationComponent::GetDefaultObj()
{
	static class USkeletalMeshSimulationComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USkeletalMeshSimulationComponent*>(USkeletalMeshSimulationComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FChaosPhysicsCollisionInfo  CollisionInfo                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void USkeletalMeshSimulationComponent::ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("SkeletalMeshSimulationComponent", "ReceivePhysicsCollision");

	Params::USkeletalMeshSimulationComponent_ReceivePhysicsCollision_Params Parms{};

	Parms.CollisionInfo = CollisionInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// (None)

class UClass* UStaticMeshSimulationComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StaticMeshSimulationComponent");

	return Clss;
}


// StaticMeshSimulationComponent GeometryCollectionEngine.Default__StaticMeshSimulationComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UStaticMeshSimulationComponent* UStaticMeshSimulationComponent::GetDefaultObj()
{
	static class UStaticMeshSimulationComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UStaticMeshSimulationComponent*>(UStaticMeshSimulationComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FChaosPhysicsCollisionInfo  CollisionInfo                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UStaticMeshSimulationComponent::ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo& CollisionInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StaticMeshSimulationComponent", "ReceivePhysicsCollision");

	Params::UStaticMeshSimulationComponent_ReceivePhysicsCollision_Params Parms{};

	Parms.CollisionInfo = CollisionInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UStaticMeshSimulationComponent::ForceRecreatePhysicsState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = this->Class->GetFunction("StaticMeshSimulationComponent", "ForceRecreatePhysicsState");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}

}


