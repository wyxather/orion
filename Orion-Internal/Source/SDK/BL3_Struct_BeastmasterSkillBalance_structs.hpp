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

// UserDefinedStruct Struct_BeastmasterSkillBalance.Struct_BeastmasterSkillBalance
// 0x0028
struct FStruct_BeastmasterSkillBalance
{
	float                                              Scalar_5_230D633C4A306BF04AB690B7CD89D6AA;                // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Cooldown_8_237733FC43C8C6F2B3A6558D8A0FB0C1;              // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Radius_11_A1466BA242034461180E58B6E902078D;               // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Secondary_21_5ED678CA4FB7C9C602D841A55EDD67B9;            // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Tertiary_20_8B581C1746A7BAAB3F3F7BA08BD29453;             // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x0014(0x0004) MISSED OFFSET
	class FString                                      Comment_17_1F5776A0451CECC540F24687B779E18C;              // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
