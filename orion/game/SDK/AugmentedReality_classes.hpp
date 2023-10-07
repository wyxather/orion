#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x220 - 0x220)
// Class AugmentedReality.ARActor
class AARActor : public AActor
{
public:

	static class UClass* StaticClass();
	static class AARActor* GetDefaultObj();

	class UARComponent* AddARComponent(TSubclassOf<class UARComponent> InComponentClass, struct FGuid& NativeID);
};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARBlueprintLibrary
class UARBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UARBlueprintLibrary* GetDefaultObj();

	void UnpinComponent(class USceneComponent* ComponentToUnpin);
	bool ToggleARCapture(bool bOnOff, enum class EARCaptureType CaptureType);
	void StopARSession();
	void StartARSession(class UARSessionConfig* SessionConfig);
	void SetEnabledXRCamera(bool bOnOff);
	void SetARWorldScale(float InWorldScale);
	void SetARWorldOriginLocationAndRotation(const struct FVector& OriginLocation, const struct FRotator& OriginRotation, bool bIsTransformInWorldSpace, bool bMaintainUpDirection);
	void SetAlignmentTransform(struct FTransform& InAlignmentTransform);
	bool SaveARPinToLocalStore(class FName InSaveName, class UARPin* InPin);
	struct FIntPoint ResizeXRCamera(struct FIntPoint& InSize);
	void RemovePin(class UARPin* PinToRemove);
	void RemoveARPinFromLocalStore(class FName InSaveName);
	void RemoveAllARPinsFromLocalStore();
	class UARPin* PinComponentToTraceResult(class USceneComponent* ComponentToPin, struct FARTraceResult& TraceResult, class FName DebugName);
	bool PinComponentToARPin(class USceneComponent* ComponentToPin, class UARPin* Pin);
	class UARPin* PinComponent(class USceneComponent* ComponentToPin, struct FTransform& PinToWorldTransform, class UARTrackedGeometry* TrackedGeometry, class FName DebugName);
	void PauseARSession();
	TMap<class FName, class UARPin*> LoadARPinsFromLocalStore();
	TArray<struct FARTraceResult> LineTraceTrackedObjects3D(const struct FVector& Start, const struct FVector& End, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
	TArray<struct FARTraceResult> LineTraceTrackedObjects(const struct FVector2D& ScreenCoord, bool bTestFeaturePoints, bool bTestGroundPlane, bool bTestPlaneExtents, bool bTestPlaneBoundaryPolygon);
	bool IsSessionTypeSupported(enum class EARSessionType SessionType);
	bool IsSessionTrackingFeatureSupported(enum class EARSessionType SessionType, enum class EARSessionTrackingFeature SessionTrackingFeature);
	bool IsSceneReconstructionSupported(enum class EARSessionType SessionType, enum class EARSceneReconstruction SceneReconstructionMethod);
	bool IsARSupported();
	bool IsARPinLocalStoreSupported();
	bool IsARPinLocalStoreReady();
	enum class EARWorldMappingState GetWorldMappingStatus();
	enum class EARTrackingQualityReason GetTrackingQualityReason();
	enum class EARTrackingQuality GetTrackingQuality();
	TArray<struct FARVideoFormat> GetSupportedVideoFormats(enum class EARSessionType SessionType);
	class UARSessionConfig* GetSessionConfig();
	TArray<struct FVector> GetPointCloud();
	class UARTexture* GetPersonSegmentationImage();
	class UARTexture* GetPersonSegmentationDepthImage();
	bool GetObjectClassificationAtLocation(struct FVector& InWorldLocation, enum class EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation, float MaxLocationDiff);
	int32 GetNumberOfTrackedFacesSupported();
	class UARLightEstimate* GetCurrentLightEstimate();
	bool GetCameraIntrinsics(struct FARCameraIntrinsics* OutCameraIntrinsics);
	class UARTextureCameraImage* GetCameraImage();
	class UARTextureCameraDepth* GetCameraDepth();
	float GetARWorldScale();
	class UARTexture* GetARTexture(enum class EARTextureType TextureType);
	struct FARSessionStatus GetARSessionStatus();
	TArray<class UARTrackedPose*> GetAllTrackedPoses();
	TArray<class UARTrackedPoint*> GetAllTrackedPoints();
	TArray<class UARPlaneGeometry*> GetAllTrackedPlanes();
	TArray<class UARTrackedImage*> GetAllTrackedImages();
	TArray<class UAREnvironmentCaptureProbe*> GetAllTrackedEnvironmentCaptureProbes();
	TArray<struct FARPose2D> GetAllTracked2DPoses();
	TArray<class UARPin*> GetAllPins();
	TArray<class UARTrackedGeometry*> GetAllGeometriesByClass(TSubclassOf<class UARTrackedGeometry> GeometryClass);
	TArray<class UARTrackedGeometry*> GetAllGeometries();
	struct FTransform GetAlignmentTransform();
	TArray<class UARTrackedPoint*> FindTrackedPointsByName(const class FString& PointName);
	void DebugDrawTrackedGeometry(class UARTrackedGeometry* TrackedGeometry, class UObject* WorldContextObject, const struct FLinearColor& Color, float OutlineThickness, float PersistForSeconds);
	void DebugDrawPin(class UARPin* ARPin, class UObject* WorldContextObject, const struct FLinearColor& Color, float Scale, float PersistForSeconds);
	void CalculateClosestIntersection(TArray<struct FVector>& StartPoints, TArray<struct FVector>& EndPoints, struct FVector* ClosestIntersection);
	void CalculateAlignmentTransform(struct FTransform& TransformInFirstCoordinateSystem, struct FTransform& TransformInSecondCoordinateSystem, struct FTransform* AlignmentTransform);
	bool AddTrackedPointWithName(struct FTransform& WorldTransform, const class FString& PointName, bool bDeletePointsWithSameName);
	class UARCandidateImage* AddRuntimeCandidateImage(class UARSessionConfig* SessionConfig, class UTexture2D* CandidateTexture, const class FString& FriendlyName, float PhysicalWidth);
	bool AddManualEnvironmentCaptureProbe(const struct FVector& Location, const struct FVector& Extent);
};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARTraceResultLibrary
class UARTraceResultLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UARTraceResultLibrary* GetDefaultObj();

	class UARTrackedGeometry* GetTrackedGeometry(struct FARTraceResult& TraceResult);
	enum class EARLineTraceChannels GetTraceChannel(struct FARTraceResult& TraceResult);
	struct FTransform GetLocalTransform(struct FARTraceResult& TraceResult);
	struct FTransform GetLocalToWorldTransform(struct FARTraceResult& TraceResult);
	struct FTransform GetLocalToTrackingTransform(struct FARTraceResult& TraceResult);
	float GetDistanceFromCamera(struct FARTraceResult& TraceResult);
};

// 0x20 (0x50 - 0x30)
// Class AugmentedReality.ARBaseAsyncTaskBlueprintProxy
class UARBaseAsyncTaskBlueprintProxy : public UBlueprintAsyncActionBase
{
public:
	uint8                                        Pad_A10[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UARBaseAsyncTaskBlueprintProxy* GetDefaultObj();

};

// 0x30 (0x80 - 0x50)
// Class AugmentedReality.ARSaveWorldAsyncTaskBlueprintProxy
class UARSaveWorldAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_A30[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UARSaveWorldAsyncTaskBlueprintProxy* GetDefaultObj();

	class UARSaveWorldAsyncTaskBlueprintProxy* ARSaveWorld(class UObject* WorldContextObject);
};

// 0x48 (0x98 - 0x50)
// Class AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy
class UARGetCandidateObjectAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_A45[0x28];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UARGetCandidateObjectAsyncTaskBlueprintProxy* GetDefaultObj();

	class UARGetCandidateObjectAsyncTaskBlueprintProxy* ARGetCandidateObject(class UObject* WorldContextObject, const struct FVector& Location, const struct FVector& Extent);
};

// 0x80 (0x278 - 0x1F8)
// Class AugmentedReality.ARComponent
class UARComponent : public USceneComponent
{
public:
	struct FGuid                                 NativeID;                                          // 0x1F8(0x10)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A5E[0x30];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bUseDefaultReplication;                            // 0x238(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A60[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    DefaultMeshMaterial;                               // 0x240(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    DefaultWireframeMeshMaterial;                      // 0x248(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMRMeshComponent*                      MRMeshComponent;                                   // 0x250(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UARTrackedGeometry*                    MyTrackedGeometry;                                 // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_A61[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UARComponent* GetDefaultObj();

	void UpdateVisualization();
	void SetNativeID(const struct FGuid& NativeID);
	void ReceiveRemove();
	void OnRep_Payload();
	class UMRMeshComponent* GetMRMesh();
};

// 0x88 (0x300 - 0x278)
// Class AugmentedReality.ARPlaneComponent
class UARPlaneComponent : public UARComponent
{
public:
	uint8                                        Pad_AA0[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FARPlaneUpdatePayload                 ReplicatedPayload;                                 // 0x280(0x80)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UARPlaneComponent* GetDefaultObj();

	void SetPlaneComponentDebugMode(enum class EPlaneComponentDebugMode NewDebugMode);
	void SetObjectClassificationDebugColors(TMap<enum class EARObjectClassification, struct FLinearColor>& InColors);
	void ServerUpdatePayload(struct FARPlaneUpdatePayload& NewPayload);
	void ReceiveUpdate(struct FARPlaneUpdatePayload& Payload);
	void ReceiveAdd(struct FARPlaneUpdatePayload& Payload);
	TMap<enum class EARObjectClassification, struct FLinearColor> GetObjectClassificationDebugColors();
};

// 0x8 (0x280 - 0x278)
// Class AugmentedReality.ARPointComponent
class UARPointComponent : public UARComponent
{
public:
	struct FARPointUpdatePayload                 ReplicatedPayload;                                 // 0x278(0x1)(BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_AA6[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UARPointComponent* GetDefaultObj();

	void ServerUpdatePayload(struct FARPointUpdatePayload& NewPayload);
	void ReceiveUpdate(struct FARPointUpdatePayload& Payload);
	void ReceiveAdd(struct FARPointUpdatePayload& Payload);
};

// 0x68 (0x2E0 - 0x278)
// Class AugmentedReality.ARFaceComponent
class UARFaceComponent : public UARComponent
{
public:
	enum class EARFaceTransformMixing            TransformSetting;                                  // 0x278(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUpdateVertexNormal;                               // 0x279(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFaceOutOfScreen;                                  // 0x27A(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_AAD[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FARFaceUpdatePayload                  ReplicatedPayload;                                 // 0x280(0x40)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_AAE[0x20];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UARFaceComponent* GetDefaultObj();

	void SetFaceComponentDebugMode(enum class EFaceComponentDebugMode NewDebugMode);
	void ServerUpdatePayload(struct FARFaceUpdatePayload& NewPayload);
	void ReceiveUpdate(struct FARFaceUpdatePayload& Payload);
	void ReceiveAdd(struct FARFaceUpdatePayload& Payload);
};

// 0x68 (0x2E0 - 0x278)
// Class AugmentedReality.ARImageComponent
class UARImageComponent : public UARComponent
{
public:
	uint8                                        Pad_AC1[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FARImageUpdatePayload                 ReplicatedPayload;                                 // 0x280(0x60)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UARImageComponent* GetDefaultObj();

	void SetImageComponentDebugMode(enum class EImageComponentDebugMode NewDebugMode);
	void ServerUpdatePayload(struct FARImageUpdatePayload& NewPayload);
	void ReceiveUpdate(struct FARImageUpdatePayload& Payload);
	void ReceiveAdd(struct FARImageUpdatePayload& Payload);
};

// 0x78 (0x2F0 - 0x278)
// Class AugmentedReality.ARQRCodeComponent
class UARQRCodeComponent : public UARComponent
{
public:
	uint8                                        Pad_AC4[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FARQRCodeUpdatePayload                ReplicatedPayload;                                 // 0x280(0x70)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UARQRCodeComponent* GetDefaultObj();

	void SetQRCodeComponentDebugMode(enum class EQRCodeComponentDebugMode NewDebugMode);
	void ServerUpdatePayload(struct FARQRCodeUpdatePayload& NewPayload);
	void ReceiveUpdate(struct FARQRCodeUpdatePayload& Payload);
	void ReceiveAdd(struct FARQRCodeUpdatePayload& Payload);
};

// 0x48 (0x2C0 - 0x278)
// Class AugmentedReality.ARPoseComponent
class UARPoseComponent : public UARComponent
{
public:
	uint8                                        Pad_AC6[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FARPoseUpdatePayload                  ReplicatedPayload;                                 // 0x280(0x40)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UARPoseComponent* GetDefaultObj();

	void SetPoseComponentDebugMode(enum class EPoseComponentDebugMode NewDebugMode);
	void ServerUpdatePayload(struct FARPoseUpdatePayload& NewPayload);
	void ReceiveUpdate(struct FARPoseUpdatePayload& Payload);
	void ReceiveAdd(struct FARPoseUpdatePayload& Payload);
};

// 0x38 (0x2B0 - 0x278)
// Class AugmentedReality.AREnvironmentProbeComponent
class UAREnvironmentProbeComponent : public UARComponent
{
public:
	uint8                                        Pad_B01[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAREnvironmentProbeUpdatePayload      ReplicatedPayload;                                 // 0x280(0x30)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAREnvironmentProbeComponent* GetDefaultObj();

	void ServerUpdatePayload(struct FAREnvironmentProbeUpdatePayload& NewPayload);
	void ReceiveUpdate(struct FAREnvironmentProbeUpdatePayload& Payload);
	void ReceiveAdd(struct FAREnvironmentProbeUpdatePayload& Payload);
};

// 0x38 (0x2B0 - 0x278)
// Class AugmentedReality.ARObjectComponent
class UARObjectComponent : public UARComponent
{
public:
	uint8                                        Pad_B03[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FARObjectUpdatePayload                ReplicatedPayload;                                 // 0x280(0x30)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UARObjectComponent* GetDefaultObj();

	void ServerUpdatePayload(struct FARObjectUpdatePayload& NewPayload);
	void ReceiveUpdate(struct FARObjectUpdatePayload& Payload);
	void ReceiveAdd(struct FARObjectUpdatePayload& Payload);
};

// 0x68 (0x2E0 - 0x278)
// Class AugmentedReality.ARMeshComponent
class UARMeshComponent : public UARComponent
{
public:
	uint8                                        Pad_B04[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FARMeshUpdatePayload                  ReplicatedPayload;                                 // 0x280(0x60)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NoDestructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UARMeshComponent* GetDefaultObj();

	void ServerUpdatePayload(struct FARMeshUpdatePayload& NewPayload);
	void ReceiveUpdate(struct FARMeshUpdatePayload& Payload);
	void ReceiveAdd(struct FARMeshUpdatePayload& Payload);
};

// 0x78 (0x2F0 - 0x278)
// Class AugmentedReality.ARGeoAnchorComponent
class UARGeoAnchorComponent : public UARComponent
{
public:
	uint8                                        Pad_B1A[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FARGeoAnchorUpdatePayload             ReplicatedPayload;                                 // 0x280(0x70)(BlueprintVisible, BlueprintReadOnly, Net, RepNotify, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UARGeoAnchorComponent* GetDefaultObj();

	void SetGeoAnchorComponentDebugMode(enum class EGeoAnchorComponentDebugMode NewDebugMode);
	void ServerUpdatePayload(struct FARGeoAnchorUpdatePayload& NewPayload);
	void ReceiveUpdate(struct FARGeoAnchorUpdatePayload& Payload);
	void ReceiveAdd(struct FARGeoAnchorUpdatePayload& Payload);
};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARDependencyHandler
class UARDependencyHandler : public UObject
{
public:

	static class UClass* StaticClass();
	static class UARDependencyHandler* GetDefaultObj();

	void StartARSessionLatent(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo);
	void RequestARSessionPermission(class UObject* WorldContextObject, class UARSessionConfig* SessionConfig, const struct FLatentActionInfo& LatentInfo, enum class EARServicePermissionRequestResult* OutPermissionResult);
	void InstallARService(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, enum class EARServiceInstallRequestResult* OutInstallResult);
	class UARDependencyHandler* GetARDependencyHandler();
	void CheckARServiceAvailability(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, enum class EARServiceAvailability* OutAvailability);
};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARGeoTrackingSupport
class UARGeoTrackingSupport : public UObject
{
public:

	static class UClass* StaticClass();
	static class UARGeoTrackingSupport* GetDefaultObj();

	class UARGeoTrackingSupport* GetGeoTrackingSupport();
	enum class EARGeoTrackingStateReason GetGeoTrackingStateReason();
	enum class EARGeoTrackingState GetGeoTrackingState();
	enum class EARGeoTrackingAccuracy GetGeoTrackingAccuracy();
	bool AddGeoAnchorAtLocationWithAltitude(float Longitude, float Latitude, float AltitudeMeters, const class FString& OptionalAnchorName);
	bool AddGeoAnchorAtLocation(float Longitude, float Latitude, const class FString& OptionalAnchorName);
};

// 0x50 (0xA0 - 0x50)
// Class AugmentedReality.CheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy
class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B53[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* GetDefaultObj();

	void GeoTrackingAvailabilityDelegate__DelegateSignature(bool bIsAvailable, const class FString& Error);
	class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailabilityAtLocation(class UObject* WorldContextObject, float Longitude, float Latitude);
	class UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy* CheckGeoTrackingAvailability(class UObject* WorldContextObject);
};

// 0x50 (0xA0 - 0x50)
// Class AugmentedReality.GetGeoLocationAsyncTaskBlueprintProxy
class UGetGeoLocationAsyncTaskBlueprintProxy : public UARBaseAsyncTaskBlueprintProxy
{
public:
	FMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x50(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnFailed;                                          // 0x60(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_B95[0x30];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGetGeoLocationAsyncTaskBlueprintProxy* GetDefaultObj();

	void GetGeoLocationDelegate__DelegateSignature(float Longitude, float Latitude, float Altitude, const class FString& Error);
	class UGetGeoLocationAsyncTaskBlueprintProxy* GetGeoLocationAtWorldPosition(class UObject* WorldContextObject, struct FVector& WorldPosition);
};

// 0x38 (0x230 - 0x1F8)
// Class AugmentedReality.ARLifeCycleComponent
class UARLifeCycleComponent : public USceneComponent
{
public:
	FMulticastInlineDelegateProperty_            OnARActorSpawnedDelegate;                          // 0x1F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnARActorToBeDestroyedDelegate;                    // 0x208(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA6[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UARLifeCycleComponent* GetDefaultObj();

	void ServerSpawnARActor(class UClass* ComponentClass, const struct FGuid& NativeID);
	void ServerDestroyARActor(class AARActor* Actor);
	void InstanceARActorToBeDestroyedDelegate__DelegateSignature(class AARActor* Actor);
	void InstanceARActorSpawnedDelegate__DelegateSignature(class UClass* ComponentClass, const struct FGuid& NativeID, class AARActor* SpawnedActor);
};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARLightEstimate
class UARLightEstimate : public UObject
{
public:

	static class UClass* StaticClass();
	static class UARLightEstimate* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class AugmentedReality.ARBasicLightEstimate
class UARBasicLightEstimate : public UARLightEstimate
{
public:
	float                                        AmbientIntensityLumens;                            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AmbientColorTemperatureKelvin;                     // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                          AmbientColor;                                      // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UARBasicLightEstimate* GetDefaultObj();

	float GetAmbientIntensityLumens();
	float GetAmbientColorTemperatureKelvin();
	struct FLinearColor GetAmbientColor();
};

// 0x0 (0x220 - 0x220)
// Class AugmentedReality.AROriginActor
class AAROriginActor : public AActor
{
public:

	static class UClass* StaticClass();
	static class AAROriginActor* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class AugmentedReality.ARPin
class UARPin : public UObject
{
public:
	class UARTrackedGeometry*                    TrackedGeometry;                                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       PinnedComponent;                                   // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_BB6[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LocalToTrackingTransform;                          // 0x40(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FTransform                            LocalToAlignedTrackingTransform;                   // 0x70(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	enum class EARTrackingState                  TrackingState;                                     // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_BB8[0x1F];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnARTrackingStateChanged;                          // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	FMulticastInlineDelegateProperty_            OnARTransformUpdated;                              // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate)
	uint8                                        Pad_BB9[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UARPin* GetDefaultObj();

	enum class EARTrackingState GetTrackingState();
	class UARTrackedGeometry* GetTrackedGeometry();
	class USceneComponent* GetPinnedComponent();
	struct FTransform GetLocalToWorldTransform();
	struct FTransform GetLocalToTrackingTransform();
	class FName GetDebugName();
	void DebugDraw(class UWorld* World, struct FLinearColor& Color, float Scale, float PersistForSeconds);
};

// 0xE0 (0x110 - 0x30)
// Class AugmentedReality.ARSessionConfig
class UARSessionConfig : public UDataAsset
{
public:
	bool                                         bGenerateMeshDataFromTrackedGeometry;              // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateCollisionForMeshData;                     // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGenerateNavMeshForMeshData;                       // 0x32(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMeshDataForOcclusion;                          // 0x33(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRenderMeshDataInWireframe;                        // 0x34(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTrackSceneObjects;                                // 0x35(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePersonSegmentationForOcclusion;                // 0x36(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseSceneDepthForOcclusion;                        // 0x37(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAutomaticImageScaleEstimation;                 // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseStandardOnboardingUX;                          // 0x39(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EARWorldAlignment                 WorldAlignment;                                    // 0x3A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EARSessionType                    SessionType;                                       // 0x3B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EARPlaneDetectionMode             PlaneDetectionMode;                                // 0x3C(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHorizontalPlaneDetection;                         // 0x3D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bVerticalPlaneDetection;                           // 0x3E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableAutoFocus;                                  // 0x3F(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EARLightEstimationMode            LightEstimationMode;                               // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EARFrameSyncMode                  FrameSyncMode;                                     // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableAutomaticCameraOverlay;                     // 0x42(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEnableAutomaticCameraTracking;                    // 0x43(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bResetCameraTracking;                              // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bResetTrackedObjects;                              // 0x45(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BEF[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UARCandidateImage*>             CandidateImages;                                   // 0x48(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int32                                        MaxNumSimultaneousImagesTracked;                   // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EAREnvironmentCaptureProbeType    EnvironmentCaptureProbeType;                       // 0x5C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BF0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                WorldMapData;                                      // 0x60(0x10)(Edit, ZeroConstructor, EditConst, Protected, NativeAccessSpecifierProtected)
	TArray<class UARCandidateObject*>            CandidateObjects;                                  // 0x70(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FARVideoFormat                        DesiredVideoFormat;                                // 0x80(0xC)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bUseOptimalVideoFormat;                            // 0x8C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EARFaceTrackingDirection          FaceTrackingDirection;                             // 0x8D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EARFaceTrackingUpdate             FaceTrackingUpdate;                                // 0x8E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BF1[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        MaxNumberOfTrackedFaces;                           // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BF2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                SerializedARCandidateImageDatabase;                // 0x98(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	enum class EARSessionTrackingFeature         EnabledSessionTrackingFeature;                     // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EARSceneReconstruction            SceneReconstructionMethod;                         // 0xA9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_BF3[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class UARPlaneComponent>         PlaneComponentClass;                               // 0xB0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UARPointComponent>         PointComponentClass;                               // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UARFaceComponent>          FaceComponentClass;                                // 0xC0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UARImageComponent>         ImageComponentClass;                               // 0xC8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UARQRCodeComponent>        QRCodeComponentClass;                              // 0xD0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UARPoseComponent>          PoseComponentClass;                                // 0xD8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UAREnvironmentProbeComponent> EnvironmentProbeComponentClass;                    // 0xE0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UARObjectComponent>        ObjectComponentClass;                              // 0xE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UARMeshComponent>          MeshComponentClass;                                // 0xF0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UARGeoAnchorComponent>     GeoAnchorComponentClass;                           // 0xF8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    DefaultMeshMaterial;                               // 0x100(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    DefaultWireframeMeshMaterial;                      // 0x108(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UARSessionConfig* GetDefaultObj();

	bool ShouldResetTrackedObjects();
	bool ShouldResetCameraTracking();
	bool ShouldRenderCameraOverlay();
	bool ShouldEnableCameraTracking();
	bool ShouldEnableAutoFocus();
	void SetWorldMapData(const TArray<uint8>& WorldMapData);
	void SetSessionTrackingFeatureToEnable(enum class EARSessionTrackingFeature InSessionTrackingFeature);
	void SetSceneReconstructionMethod(enum class EARSceneReconstruction InSceneReconstructionMethod);
	void SetResetTrackedObjects(bool bNewValue);
	void SetResetCameraTracking(bool bNewValue);
	void SetFaceTrackingUpdate(enum class EARFaceTrackingUpdate InUpdate);
	void SetFaceTrackingDirection(enum class EARFaceTrackingDirection InDirection);
	void SetEnableAutoFocus(bool bNewValue);
	void SetDesiredVideoFormat(const struct FARVideoFormat& NewFormat);
	void SetCandidateObjectList(TArray<class UARCandidateObject*>& InCandidateObjects);
	TArray<uint8> GetWorldMapData();
	enum class EARWorldAlignment GetWorldAlignment();
	enum class EARSessionType GetSessionType();
	enum class EARSceneReconstruction GetSceneReconstructionMethod();
	enum class EARPlaneDetectionMode GetPlaneDetectionMode();
	int32 GetMaxNumSimultaneousImagesTracked();
	enum class EARLightEstimationMode GetLightEstimationMode();
	enum class EARFrameSyncMode GetFrameSyncMode();
	enum class EARFaceTrackingUpdate GetFaceTrackingUpdate();
	enum class EARFaceTrackingDirection GetFaceTrackingDirection();
	enum class EAREnvironmentCaptureProbeType GetEnvironmentCaptureProbeType();
	enum class EARSessionTrackingFeature GetEnabledSessionTrackingFeature();
	struct FARVideoFormat GetDesiredVideoFormat();
	TArray<class UARCandidateObject*> GetCandidateObjectList();
	TArray<class UARCandidateImage*> GetCandidateImageList();
	void AddCandidateObject(class UARCandidateObject* CandidateObject);
	void AddCandidateImage(class UARCandidateImage* NewCandidateImage);
};

// 0x68 (0x370 - 0x308)
// Class AugmentedReality.ARSharedWorldGameMode
class AARSharedWorldGameMode : public AGameMode
{
public:
	int32                                        BufferSizePerChunk;                                // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF4[0x64];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AARSharedWorldGameMode* GetDefaultObj();

	void SetPreviewImageData(const TArray<uint8>& ImageData);
	void SetARWorldSharingIsReady();
	void SetARSharedWorldData(const TArray<uint8>& ARWorldData);
	class AARSharedWorldGameState* GetARSharedWorldGameState();
};

// 0x38 (0x2C8 - 0x290)
// Class AugmentedReality.ARSharedWorldGameState
class AARSharedWorldGameState : public AGameState
{
public:
	TArray<uint8>                                PreviewImageData;                                  // 0x290(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                ARWorldData;                                       // 0x2A0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        PreviewImageBytesTotal;                            // 0x2B0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ARWorldBytesTotal;                                 // 0x2B4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PreviewImageBytesDelivered;                        // 0x2B8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ARWorldBytesDelivered;                             // 0x2BC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BF5[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AARSharedWorldGameState* GetDefaultObj();

	void K2_OnARWorldMapIsReady();
};

// 0x8 (0x578 - 0x570)
// Class AugmentedReality.ARSharedWorldPlayerController
class AARSharedWorldPlayerController : public APlayerController
{
public:
	uint8                                        Pad_BFE[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AARSharedWorldPlayerController* GetDefaultObj();

	void ServerMarkReadyForReceiving();
	void ClientUpdatePreviewImageData(int32 Offset, TArray<uint8>& Buffer);
	void ClientUpdateARWorldData(int32 Offset, TArray<uint8>& Buffer);
	void ClientInitSharedWorld(int32 PreviewImageSize, int32 ARWorldDataSize);
};

// 0x10 (0x240 - 0x230)
// Class AugmentedReality.ARSkyLight
class AARSkyLight : public ASkyLight
{
public:
	class UAREnvironmentCaptureProbe*            CaptureProbe;                                      // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C04[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AARSkyLight* GetDefaultObj();

	void SetEnvironmentCaptureProbe(class UAREnvironmentCaptureProbe* InCaptureProbe);
};

// 0x20 (0x198 - 0x178)
// Class AugmentedReality.ARTexture
class UARTexture : public UTexture
{
public:
	enum class EARTextureType                    TextureType;                                       // 0x178(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C06[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Timestamp;                                         // 0x17C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ExternalTextureGuid;                               // 0x180(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Size;                                              // 0x190(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UARTexture* GetDefaultObj();

};

// 0x8 (0x1A0 - 0x198)
// Class AugmentedReality.ARTextureCameraImage
class UARTextureCameraImage : public UARTexture
{
public:
	uint8                                        Pad_C08[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UARTextureCameraImage* GetDefaultObj();

};

// 0x8 (0x1A0 - 0x198)
// Class AugmentedReality.ARTextureCameraDepth
class UARTextureCameraDepth : public UARTexture
{
public:
	enum class EARDepthQuality                   DepthQuality;                                      // 0x198(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EARDepthAccuracy                  DepthAccuracy;                                     // 0x199(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTemporallySmoothed;                             // 0x19A(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0C[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UARTextureCameraDepth* GetDefaultObj();

};

// 0x20 (0x1F0 - 0x1D0)
// Class AugmentedReality.AREnvironmentCaptureProbeTexture
class UAREnvironmentCaptureProbeTexture : public UTextureCube
{
public:
	enum class EARTextureType                    TextureType;                                       // 0x1D0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C0D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Timestamp;                                         // 0x1D4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ExternalTextureGuid;                               // 0x1D8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Size;                                              // 0x1E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UAREnvironmentCaptureProbeTexture* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARTraceResultDummy
class UARTraceResultDummy : public UObject
{
public:

	static class UClass* StaticClass();
	static class UARTraceResultDummy* GetDefaultObj();

};

// 0xD0 (0xF8 - 0x28)
// Class AugmentedReality.ARTrackedGeometry
class UARTrackedGeometry : public UObject
{
public:
	struct FGuid                                 UniqueId;                                          // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C13[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LocalToTrackingTransform;                          // 0x40(0x30)(IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FTransform                            LocalToAlignedTrackingTransform;                   // 0x70(0x30)(IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class EARTrackingState                  TrackingState;                                     // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C14[0xF];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMRMeshComponent*                      UnderlyingMesh;                                    // 0xB0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EARObjectClassification           ObjectClassification;                              // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EARSpatialMeshUsageFlags          SpatialMeshUsageFlags;                             // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C16[0x16];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LastUpdateFrameNumber;                             // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C17[0xC];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  DebugName;                                         // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C18[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UARTrackedGeometry* GetDefaultObj();

	bool IsTracked();
	bool HasSpatialMeshUsageFlag(enum class EARSpatialMeshUsageFlags InFlag);
	class UMRMeshComponent* GetUnderlyingMesh();
	enum class EARTrackingState GetTrackingState();
	enum class EARObjectClassification GetObjectClassification();
	class FString GetName();
	struct FTransform GetLocalToWorldTransform();
	struct FTransform GetLocalToTrackingTransform();
	float GetLastUpdateTimestamp();
	int32 GetLastUpdateFrameNumber();
	class FName GetDebugName();
};

// 0x38 (0x130 - 0xF8)
// Class AugmentedReality.ARPlaneGeometry
class UARPlaneGeometry : public UARTrackedGeometry
{
public:
	enum class EARPlaneOrientation               Orientation;                                       // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C21[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Center;                                            // 0xFC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               Extent;                                            // 0x108(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C22[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FVector>                       BoundaryPolygon;                                   // 0x118(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UARPlaneGeometry*                      SubsumedBy;                                        // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UARPlaneGeometry* GetDefaultObj();

	class UARPlaneGeometry* GetSubsumedBy();
	enum class EARPlaneOrientation GetOrientation();
	struct FVector GetExtent();
	struct FVector GetCenter();
	TArray<struct FVector> GetBoundaryPolygonInLocalSpace();
};

// 0x8 (0x100 - 0xF8)
// Class AugmentedReality.ARTrackedPoint
class UARTrackedPoint : public UARTrackedGeometry
{
public:
	uint8                                        Pad_C23[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UARTrackedPoint* GetDefaultObj();

};

// 0x10 (0x108 - 0xF8)
// Class AugmentedReality.ARTrackedImage
class UARTrackedImage : public UARTrackedGeometry
{
public:
	class UARCandidateImage*                     DetectedImage;                                     // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             EstimatedSize;                                     // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UARTrackedImage* GetDefaultObj();

	struct FVector2D GetEstimateSize();
	class UARCandidateImage* GetDetectedImage();
};

// 0x18 (0x120 - 0x108)
// Class AugmentedReality.ARTrackedQRCode
class UARTrackedQRCode : public UARTrackedImage
{
public:
	class FString                                QRCode;                                            // 0x108(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x118(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C27[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UARTrackedQRCode* GetDefaultObj();

};

// 0xF8 (0x1F0 - 0xF8)
// Class AugmentedReality.ARFaceGeometry
class UARFaceGeometry : public UARTrackedGeometry
{
public:
	struct FVector                               LookAtTarget;                                      // 0xF8(0xC)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsTracked;                                        // 0x104(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_C32[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class EARFaceBlendShape, float>    BlendShapes;                                       // 0x108(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_C33[0x38];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            LeftEyeTransform;                                  // 0x190(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	struct FTransform                            RightEyeTransform;                                 // 0x1C0(0x30)(IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UARFaceGeometry* GetDefaultObj();

	struct FTransform GetWorldSpaceEyeTransform(enum class EAREye Eye);
	struct FTransform GetLocalSpaceEyeTransform(enum class EAREye Eye);
	float GetBlendShapeValue(enum class EARFaceBlendShape BlendShape);
	TMap<enum class EARFaceBlendShape, float> GetBlendShapes();
};

// 0x18 (0x110 - 0xF8)
// Class AugmentedReality.AREnvironmentCaptureProbe
class UAREnvironmentCaptureProbe : public UARTrackedGeometry
{
public:
	struct FVector                               Extent;                                            // 0xF8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C34[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAREnvironmentCaptureProbeTexture*     EnvironmentCaptureTexture;                         // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UAREnvironmentCaptureProbe* GetDefaultObj();

	struct FVector GetExtent();
	class UAREnvironmentCaptureProbeTexture* GetEnvironmentCaptureTexture();
};

// 0x8 (0x100 - 0xF8)
// Class AugmentedReality.ARTrackedObject
class UARTrackedObject : public UARTrackedGeometry
{
public:
	class UARCandidateObject*                    DetectedObject;                                    // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UARTrackedObject* GetDefaultObj();

	class UARCandidateObject* GetDetectedObject();
};

// 0x58 (0x150 - 0xF8)
// Class AugmentedReality.ARTrackedPose
class UARTrackedPose : public UARTrackedGeometry
{
public:
	struct FARPose3D                             TrackedPose;                                       // 0xF8(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_C3E[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UARTrackedPose* GetDefaultObj();

	struct FARPose3D GetTrackedPoseData();
};

// 0x8 (0x100 - 0xF8)
// Class AugmentedReality.ARMeshGeometry
class UARMeshGeometry : public UARTrackedGeometry
{
public:
	uint8                                        Pad_C43[0x8];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UARMeshGeometry* GetDefaultObj();

	bool GetObjectClassificationAtLocation(struct FVector& InWorldLocation, enum class EARObjectClassification* OutClassification, struct FVector* OutClassificationLocation, float MaxLocationDiff);
};

// 0x18 (0x110 - 0xF8)
// Class AugmentedReality.ARGeoAnchor
class UARGeoAnchor : public UARTrackedGeometry
{
public:
	uint8                                        Pad_C49[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UARGeoAnchor* GetDefaultObj();

	float GetLongitude();
	float GetLatitude();
	enum class EARAltitudeSource GetAltitudeSource();
	float GetAltitudeMeters();
};

// 0x150 (0x200 - 0xB0)
// Class AugmentedReality.ARTrackableNotifyComponent
class UARTrackableNotifyComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnAddTrackedGeometry;                              // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedGeometry;                           // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedGeometry;                           // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAddTrackedPlane;                                 // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedPlane;                              // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedPlane;                              // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAddTrackedPoint;                                 // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedPoint;                              // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedPoint;                              // 0x130(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAddTrackedImage;                                 // 0x140(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedImage;                              // 0x150(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedImage;                              // 0x160(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAddTrackedFace;                                  // 0x170(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedFace;                               // 0x180(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedFace;                               // 0x190(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAddTrackedEnvProbe;                              // 0x1A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedEnvProbe;                           // 0x1B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedEnvProbe;                           // 0x1C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnAddTrackedObject;                                // 0x1D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnUpdateTrackedObject;                             // 0x1E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnRemoveTrackedObject;                             // 0x1F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UARTrackableNotifyComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class AugmentedReality.ARTypesDummyClass
class UARTypesDummyClass : public UObject
{
public:

	static class UClass* StaticClass();
	static class UARTypesDummyClass* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class AugmentedReality.ARCandidateImage
class UARCandidateImage : public UDataAsset
{
public:
	class UTexture2D*                            CandidateTexture;                                  // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                FriendlyName;                                      // 0x38(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Width;                                             // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Height;                                            // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EARCandidateImageOrientation      Orientation;                                       // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_C66[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UARCandidateImage* GetDefaultObj();

	float GetPhysicalWidth();
	float GetPhysicalHeight();
	enum class EARCandidateImageOrientation GetOrientation();
	class FString GetFriendlyName();
	class UTexture2D* GetCandidateTexture();
};

// 0x40 (0x70 - 0x30)
// Class AugmentedReality.ARCandidateObject
class UARCandidateObject : public UDataAsset
{
public:
	TArray<uint8>                                CandidateObjectData;                               // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                FriendlyName;                                      // 0x40(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FBox                                  BoundingBox;                                       // 0x50(0x1C)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_C67[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UARCandidateObject* GetDefaultObj();

	void SetFriendlyName(const class FString& NewName);
	void SetCandidateObjectData(TArray<uint8>& InCandidateObject);
	void SetBoundingBox(struct FBox& InBoundingBox);
	class FString GetFriendlyName();
	TArray<uint8> GetCandidateObjectData();
	struct FBox GetBoundingBox();
};

}


