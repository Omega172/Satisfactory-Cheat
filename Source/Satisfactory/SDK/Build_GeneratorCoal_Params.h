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
	 * Function Build_GeneratorCoal.Build_GeneratorCoal_C.GainedSignificance
	 */
	struct ABuild_GeneratorCoal_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_GeneratorCoal.Build_GeneratorCoal_C.StartProductionLoopEffects
	 */
	struct ABuild_GeneratorCoal_C_StartProductionLoopEffects_Params
	{
	public:
		bool                                                       didStartProducing;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorCoal.Build_GeneratorCoal_C.StopProductionLoopEffects
	 */
	struct ABuild_GeneratorCoal_C_StopProductionLoopEffects_Params
	{
	public:
		bool                                                       didStopProducing;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorCoal.Build_GeneratorCoal_C.LostSignificance
	 */
	struct ABuild_GeneratorCoal_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_GeneratorCoal.Build_GeneratorCoal_C.Factory_ReceiveStartProducing
	 */
	struct ABuild_GeneratorCoal_C_Factory_ReceiveStartProducing_Params
	{	};

	/**
	 * Function Build_GeneratorCoal.Build_GeneratorCoal_C.Factory_ReceiveStopProducing
	 */
	struct ABuild_GeneratorCoal_C_Factory_ReceiveStopProducing_Params
	{	};

	/**
	 * Function Build_GeneratorCoal.Build_GeneratorCoal_C.OnCurrentPotentialChanged
	 */
	struct ABuild_GeneratorCoal_C_OnCurrentPotentialChanged_Params
	{
	public:
		float                                                      newCurrentPotential;                                     // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_GeneratorCoal.Build_GeneratorCoal_C.ExecuteUbergraph_Build_GeneratorCoal
	 */
	struct ABuild_GeneratorCoal_C_ExecuteUbergraph_Build_GeneratorCoal_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
