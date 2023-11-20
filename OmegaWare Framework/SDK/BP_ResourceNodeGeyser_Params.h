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
	 * Function BP_ResourceNodeGeyser.BP_ResourceNodeGeyser_C.OnIsOccupiedChanged
	 */
	struct ABP_ResourceNodeGeyser_C_OnIsOccupiedChanged_Params
	{
	public:
		bool                                                       newIsOccupied;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ResourceNodeGeyser.BP_ResourceNodeGeyser_C.GainedSignificance
	 */
	struct ABP_ResourceNodeGeyser_C_GainedSignificance_Params
	{	};

	/**
	 * Function BP_ResourceNodeGeyser.BP_ResourceNodeGeyser_C.LostSignificance
	 */
	struct ABP_ResourceNodeGeyser_C_LostSignificance_Params
	{	};

	/**
	 * Function BP_ResourceNodeGeyser.BP_ResourceNodeGeyser_C.EruptLoop
	 */
	struct ABP_ResourceNodeGeyser_C_EruptLoop_Params
	{	};

	/**
	 * Function BP_ResourceNodeGeyser.BP_ResourceNodeGeyser_C.LaunchCharacters
	 */
	struct ABP_ResourceNodeGeyser_C_LaunchCharacters_Params
	{	};

	/**
	 * Function BP_ResourceNodeGeyser.BP_ResourceNodeGeyser_C.ExecuteUbergraph_BP_ResourceNodeGeyser
	 */
	struct ABP_ResourceNodeGeyser_C_ExecuteUbergraph_BP_ResourceNodeGeyser_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
