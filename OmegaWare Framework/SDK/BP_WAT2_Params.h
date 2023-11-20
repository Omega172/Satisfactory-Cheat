#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_WAT2.BP_WAT2_C.SpawnShrine
	 */
	struct ABP_WAT2_C_SpawnShrine_Params
	{	};

	/**
	 * Function BP_WAT2.BP_WAT2_C.UserConstructionScript
	 */
	struct ABP_WAT2_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_WAT2.BP_WAT2_C.BuildOuterShell
	 */
	struct ABP_WAT2_C_BuildOuterShell_Params
	{	};

	/**
	 * Function BP_WAT2.BP_WAT2_C.OnPickup
	 */
	struct ABP_WAT2_C_OnPickup_Params
	{
	public:
		class AFGCharacterPlayer*                                  byCharacter;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_WAT2.BP_WAT2_C.ReceiveBeginPlay
	 */
	struct ABP_WAT2_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_WAT2.BP_WAT2_C.ExecuteUbergraph_BP_WAT2
	 */
	struct ABP_WAT2_C_ExecuteUbergraph_BP_WAT2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JORL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
