#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_StandIn_PhaseCast_Frontend_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass StandIn_PhaseCast_Frontend.StandIn_PhaseCast_Frontend_C
// 0x0028 (0x05A8 - 0x0580)
class AStandIn_PhaseCast_Frontend_C : public AStandInAuxiliaryActor_Siren
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0580(0x0008) (Transient, DuplicateTransient)
	class UGbxSkeletalMeshComponent*                   Play_SirenBrawler_Arms;                                   // 0x0588(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UWwiseAudioComponent*                        WwiseAudio;                                               // 0x0590(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   SkillMesh;                                                // 0x0598(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)
	class UGbxSkeletalMeshComponent*                   SkillMesh_Head;                                           // 0x05A0(0x0008) (BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass StandIn_PhaseCast_Frontend.StandIn_PhaseCast_Frontend_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_StandIn_PhaseCast_Frontend(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
