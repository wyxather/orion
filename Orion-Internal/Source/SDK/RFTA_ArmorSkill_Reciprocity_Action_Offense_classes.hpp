#pragma once

// Remnant: From the Ashes SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "RFTA_ArmorSkill_Reciprocity_Action_Offense_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ArmorSkill_Reciprocity_Action_Offense.ArmorSkill_Reciprocity_Action_Offense_C
// 0x001D (0x02E0 - 0x02C3)
class UArmorSkill_Reciprocity_Action_Offense_C : public UAction_Buff_C
{
public:
	unsigned char                                      UnknownData00[0x5];                                       // 0x02C3(0x0005) MISSED OFFSET
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x02C8(0x0008) (ZeroConstructor, Transient, DuplicateTransient)
	float                                              RangedDamageScalar;                                       // 0x02D0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              MeleeDamageScalar;                                        // 0x02D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              ModDamageScalar;                                          // 0x02D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                              SummonedCreatureDamageScalar;                             // 0x02DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ArmorSkill_Reciprocity_Action_Offense.ArmorSkill_Reciprocity_Action_Offense_C");
		return ptr;
	}


	void ModifyDamage(struct FDamageInfo* Info, bool* Rtn);
	void OnComputeStats();
	void OnReapplyBuff();
	void ExecuteUbergraph_ArmorSkill_Reciprocity_Action_Offense(int* EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
