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
	 * Function Build_GeneratorFuel.Build_GeneratorFuel_C.GainedSignificance
	 */
	struct ABuild_GeneratorFuel_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_GeneratorFuel.Build_GeneratorFuel_C.StartProductionLoopEffects
	 */
	struct ABuild_GeneratorFuel_C_StartProductionLoopEffects_Params
	{
	public:
		bool                                                       didStartProducing;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorFuel.Build_GeneratorFuel_C.StopProductionLoopEffects
	 */
	struct ABuild_GeneratorFuel_C_StopProductionLoopEffects_Params
	{
	public:
		bool                                                       didStopProducing;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorFuel.Build_GeneratorFuel_C.LostSignificance
	 */
	struct ABuild_GeneratorFuel_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_GeneratorFuel.Build_GeneratorFuel_C.Factory_ReceiveStartProducing
	 */
	struct ABuild_GeneratorFuel_C_Factory_ReceiveStartProducing_Params
	{	};

	/**
	 * Function Build_GeneratorFuel.Build_GeneratorFuel_C.Factory_ReceiveStopProducing
	 */
	struct ABuild_GeneratorFuel_C_Factory_ReceiveStopProducing_Params
	{	};

	/**
	 * Function Build_GeneratorFuel.Build_GeneratorFuel_C.OnCurrentPotentialChanged
	 */
	struct ABuild_GeneratorFuel_C_OnCurrentPotentialChanged_Params
	{
	public:
		float                                                      newCurrentPotential;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorFuel.Build_GeneratorFuel_C.ReceiveUpdateEffects
	 */
	struct ABuild_GeneratorFuel_C_ReceiveUpdateEffects_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorFuel.Build_GeneratorFuel_C.ExecuteUbergraph_Build_GeneratorFuel
	 */
	struct ABuild_GeneratorFuel_C_ExecuteUbergraph_Build_GeneratorFuel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IBIG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
