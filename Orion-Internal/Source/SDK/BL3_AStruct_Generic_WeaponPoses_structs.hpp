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

// UserDefinedStruct AStruct_Generic_WeaponPoses.AStruct_Generic_WeaponPoses
// 0x0060
struct FAStruct_Generic_WeaponPoses
{
	TArray<struct FName>                               Shotgun_34_7983DEBF4AD7A6A73F08BCBA6CF78288;              // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               Pistol_35_49A477934709ACA74F694B8B50F04481;               // 0x0010(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               AssaultRifle_36_574C87CB4A6B82B110EF2D977694A3BA;         // 0x0020(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               SniperRifle_37_BE77ABFD4D38CE36624867BDAD0B8096;          // 0x0030(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               SMG_38_60E943BE4D8DA31D2937289B97787A23;                  // 0x0040(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	TArray<struct FName>                               Heavy_39_0140AABB4F672565EDC91EA2473DB4A5;                // 0x0050(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
