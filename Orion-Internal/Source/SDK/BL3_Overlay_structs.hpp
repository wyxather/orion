#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"
#include "BL3_CoreUObject_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// ScriptStruct Overlay.OverlayItem
// 0x0028
struct FOverlayItem
{
	struct FTimespan                                   StartTime;                                                // 0x0000(0x0008) (Edit, BlueprintVisible)
	struct FTimespan                                   EndTime;                                                  // 0x0008(0x0008) (Edit, BlueprintVisible)
	class FString                                      Text;                                                     // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	struct FVector2D                                   Position;                                                 // 0x0020(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
