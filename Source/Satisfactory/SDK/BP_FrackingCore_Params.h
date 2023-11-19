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
	 * Function BP_FrackingCore.BP_FrackingCore_C.KillSFX
	 */
	struct ABP_FrackingCore_C_KillSFX_Params
	{	};

	/**
	 * Function BP_FrackingCore.BP_FrackingCore_C.SpawnSFX
	 */
	struct ABP_FrackingCore_C_SpawnSFX_Params
	{	};

	/**
	 * Function BP_FrackingCore.BP_FrackingCore_C.KillVFX
	 */
	struct ABP_FrackingCore_C_KillVFX_Params
	{	};

	/**
	 * Function BP_FrackingCore.BP_FrackingCore_C.SpawnVFX
	 */
	struct ABP_FrackingCore_C_SpawnVFX_Params
	{	};

	/**
	 * Function BP_FrackingCore.BP_FrackingCore_C.ReceiveBeginPlay
	 */
	struct ABP_FrackingCore_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_FrackingCore.BP_FrackingCore_C.OnIsOccupiedChanged
	 */
	struct ABP_FrackingCore_C_OnIsOccupiedChanged_Params
	{
	public:
		bool                                                       newIsOccupied;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_FrackingCore.BP_FrackingCore_C.GainedSignificance
	 */
	struct ABP_FrackingCore_C_GainedSignificance_Params
	{	};

	/**
	 * Function BP_FrackingCore.BP_FrackingCore_C.LostSignificance
	 */
	struct ABP_FrackingCore_C_LostSignificance_Params
	{	};

	/**
	 * Function BP_FrackingCore.BP_FrackingCore_C.ExecuteUbergraph_BP_FrackingCore
	 */
	struct ABP_FrackingCore_C_ExecuteUbergraph_BP_FrackingCore_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
