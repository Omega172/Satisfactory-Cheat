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
	 * Function Build_ManufacturerMk1.Build_ManufacturerMk1_C.SetText
	 */
	struct ABuild_ManufacturerMk1_C_SetText_Params
	{
	public:
		class FString                                              intText;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_ManufacturerMk1.Build_ManufacturerMk1_C.LostSignificance
	 */
	struct ABuild_ManufacturerMk1_C_LostSignificance_Params
	{	};

	/**
	 * Function Build_ManufacturerMk1.Build_ManufacturerMk1_C.StartProductionLoopEffects
	 */
	struct ABuild_ManufacturerMk1_C_StartProductionLoopEffects_Params
	{
	public:
		bool                                                       didStartProducing;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_ManufacturerMk1.Build_ManufacturerMk1_C.StopProductionLoopEffects
	 */
	struct ABuild_ManufacturerMk1_C_StopProductionLoopEffects_Params
	{
	public:
		bool                                                       didStopProducing;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Build_ManufacturerMk1.Build_ManufacturerMk1_C.GainedSignificance
	 */
	struct ABuild_ManufacturerMk1_C_GainedSignificance_Params
	{	};

	/**
	 * Function Build_ManufacturerMk1.Build_ManufacturerMk1_C.ExecuteUbergraph_Build_ManufacturerMk1
	 */
	struct ABuild_ManufacturerMk1_C_ExecuteUbergraph_Build_ManufacturerMk1_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
