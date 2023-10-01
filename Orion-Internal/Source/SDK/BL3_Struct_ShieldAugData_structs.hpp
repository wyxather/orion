#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Basic.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct Struct_ShieldAugData.Struct_ShieldAugData
// 0x005C
struct FStruct_ShieldAugData
{
	float                                              Capacity_26_1F88EEE04E890908FB52AE9442E35CE3;             // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RechargeRate_27_8A47A06C426C0A244C25068F9B363075;         // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              RechargeDelay_28_56D5148C458B7E0E4C3DEB8437889B8E;        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x000C(0x0004) MISSED OFFSET
	struct FText                                       Primary_Comment_47_6EF197CB417AF4CF276F8F9E8AB1D4CB;      // 0x0010(0x0028) (Edit, BlueprintVisible)
	float                                              Primary_1_56_207C26E1450330458D6C38B245C338C5;            // 0x0028(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Primary_2_57_B75F9DB543F7963A15ECCBAC5D036A8E;            // 0x002C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Primary_3_58_12AFE8834560F575F1813591F715BCE1;            // 0x0030(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x0034(0x0004) MISSED OFFSET
	struct FText                                       Secondary_Comment_49_64E6ADA2465F74EBB8D333B9DFDC26FC;    // 0x0038(0x0028) (Edit, BlueprintVisible)
	float                                              Secondary_1_62_F1E72F2542B441230290B388F4C494D1;          // 0x0050(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Secondary_2_63_5492A1134C687D18D386DAA6A8FF185E;          // 0x0054(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Secondary_3_64_A3C5C0EC446950EEEEC7E9B3776271B7;          // 0x0058(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
