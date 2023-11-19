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
	 * Function BP_GameState.BP_GameState_C.DumpVisistedMapAreas
	 */
	struct ABP_GameState_C_DumpVisistedMapAreas_Params
	{	};

	/**
	 * Function BP_GameState.BP_GameState_C.DumpActorRepresentations
	 */
	struct ABP_GameState_C_DumpActorRepresentations_Params
	{	};

	/**
	 * Function BP_GameState.BP_GameState_C.ReceiveTick
	 */
	struct ABP_GameState_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_GameState.BP_GameState_C.ExecuteUbergraph_BP_GameState
	 */
	struct ABP_GameState_C_ExecuteUbergraph_BP_GameState_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
