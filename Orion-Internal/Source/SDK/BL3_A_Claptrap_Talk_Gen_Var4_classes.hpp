#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_A_Claptrap_Talk_Gen_Var4_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass A_Claptrap_Talk_Gen_Var4.A_Claptrap_Talk_Gen_Var4_C
// 0x0000 (0x0218 - 0x0218)
class UA_Claptrap_Talk_Gen_Var4_C : public UOakAction_Anim
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass A_Claptrap_Talk_Gen_Var4.A_Claptrap_Talk_Gen_Var4_C");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
