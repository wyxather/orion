#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_Engine_classes.hpp"
#include "BL3_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct ReplicationGraph.ConnectionAlwaysRelevantNodePair
// 0x0010
struct FConnectionAlwaysRelevantNodePair
{
	class UNetConnection*                              NetConnection;                                            // 0x0000(0x0008) (ZeroConstructor, IsPlainOldData)
	class UReplicationGraphNode_AlwaysRelevant_ForConnection* Node;                                                     // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

// ScriptStruct ReplicationGraph.TearOffActorInfo
// 0x0010
struct FTearOffActorInfo
{
	unsigned char                                      UnknownData00[0x8];                                       // 0x0000(0x0008) MISSED OFFSET
	class AActor*                                      Actor;                                                    // 0x0008(0x0008) (ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
