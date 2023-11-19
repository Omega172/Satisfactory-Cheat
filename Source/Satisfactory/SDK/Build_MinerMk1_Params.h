﻿#pragma once

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
	 * Function Build_MinerMk1.Build_MinerMk1_C.GetExtractedResource
	 */
	struct ABuild_MinerMk1_C_GetExtractedResource_Params
	{
	public:
		class UClass*                                              Resource;                                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_MinerMk1.Build_MinerMk1_C.GetMiningParticles
	 */
	struct ABuild_MinerMk1_C_GetMiningParticles_Params
	{
	public:
		class UParticleSystem*                                     FirstParticle;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UParticleSystem*                                     SecondParticle;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       foundParticle;                                           // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YGQ0[0x7];                                   // 0x0011(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Build_MinerMk1.Build_MinerMk1_C.GainedSignificance
	 */
	struct ABuild_MinerMk1_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_MinerMk1.Build_MinerMk1_C.StartProductionLoopEffects
	 */
	struct ABuild_MinerMk1_C_StartProductionLoopEffects_Params
	{
	public:
		bool                                                       didStartProducing;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_MinerMk1.Build_MinerMk1_C.StopProductionLoopEffects
	 */
	struct ABuild_MinerMk1_C_StopProductionLoopEffects_Params
	{
	public:
		bool                                                       didStopProducing;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_MinerMk1.Build_MinerMk1_C.LostSignificance
	 */
	struct ABuild_MinerMk1_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_MinerMk1.Build_MinerMk1_C.ReceiveDestroyed
	 */
	struct ABuild_MinerMk1_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Build_MinerMk1.Build_MinerMk1_C.OnIsProducingChanged
	 */
	struct ABuild_MinerMk1_C_OnIsProducingChanged_Params
	{
	public:
		bool                                                       newIsProducing;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_MinerMk1.Build_MinerMk1_C.ExecuteUbergraph_Build_MinerMk1
	 */
	struct ABuild_MinerMk1_C_ExecuteUbergraph_Build_MinerMk1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D7ZS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
