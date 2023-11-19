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
	 * Function Build_OilPump.Build_OilPump_C.GetExtractedResource
	 */
	struct ABuild_OilPump_C_GetExtractedResource_Params
	{
	public:
		class UClass*                                              Resource;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_OilPump.Build_OilPump_C.SetDisplayText
	 */
	struct ABuild_OilPump_C_SetDisplayText_Params
	{
	public:
		class FText                                                newText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Build_OilPump.Build_OilPump_C.StopIdlingLoopEffects
	 */
	struct ABuild_OilPump_C_StopIdlingLoopEffects_Params
	{
	public:
		bool                                                       didLosePower;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_OilPump.Build_OilPump_C.StopProductionLoopEffects
	 */
	struct ABuild_OilPump_C_StopProductionLoopEffects_Params
	{
	public:
		bool                                                       didStopProducing;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_OilPump.Build_OilPump_C.LostSignificance
	 */
	struct ABuild_OilPump_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_OilPump.Build_OilPump_C.GainedSignificance
	 */
	struct ABuild_OilPump_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_OilPump.Build_OilPump_C.StartIdlingLoopEffects
	 */
	struct ABuild_OilPump_C_StartIdlingLoopEffects_Params
	{
	public:
		bool                                                       didGainPower;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_OilPump.Build_OilPump_C.StartProductionLoopEffects
	 */
	struct ABuild_OilPump_C_StartProductionLoopEffects_Params
	{
	public:
		bool                                                       didStartProducing;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_OilPump.Build_OilPump_C.ExecuteUbergraph_Build_OilPump
	 */
	struct ABuild_OilPump_C_ExecuteUbergraph_Build_OilPump_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_K3RR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
