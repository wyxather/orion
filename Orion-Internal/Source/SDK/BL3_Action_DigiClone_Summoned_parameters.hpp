#pragma once

// Borderlands 3 SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "BL3_Action_DigiClone_Summoned_classes.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function Action_DigiClone_Summoned.Action_DigiClone_Summoned_C.OnServerBegin
struct UAction_DigiClone_Summoned_C_OnServerBegin_Params
{
	class AActor**                                     Actor;                                                    // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

// Function Action_DigiClone_Summoned.Action_DigiClone_Summoned_C.ExecuteUbergraph_Action_DigiClone_Summoned
struct UAction_DigiClone_Summoned_C_ExecuteUbergraph_Action_DigiClone_Summoned_Params
{
	int                                                EntryPoint;                                               // (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
