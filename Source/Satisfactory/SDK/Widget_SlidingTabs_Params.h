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
	 * Function Widget_SlidingTabs.Widget_SlidingTabs_C.SetRenderOpacities
	 */
	struct UWidget_SlidingTabs_C_SetRenderOpacities_Params
	{
	public:
		double                                                     Alpha;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SlidingTabs.Widget_SlidingTabs_C.ShowAllIndexes
	 */
	struct UWidget_SlidingTabs_C_ShowAllIndexes_Params
	{	};

	/**
	 * Function Widget_SlidingTabs.Widget_SlidingTabs_C.HideNonActiveIndexes
	 */
	struct UWidget_SlidingTabs_C_HideNonActiveIndexes_Params
	{	};

	/**
	 * Function Widget_SlidingTabs.Widget_SlidingTabs_C.SetActiveButton
	 */
	struct UWidget_SlidingTabs_C_SetActiveButton_Params
	{	};

	/**
	 * Function Widget_SlidingTabs.Widget_SlidingTabs_C.SetupIndexOffset
	 */
	struct UWidget_SlidingTabs_C_SetupIndexOffset_Params
	{	};

	/**
	 * Function Widget_SlidingTabs.Widget_SlidingTabs_C.SetActiveIndex
	 */
	struct UWidget_SlidingTabs_C_SetActiveIndex_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Animate;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1FUW[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_SlidingTabs.Widget_SlidingTabs_C.Construct
	 */
	struct UWidget_SlidingTabs_C_Construct_Params
	{	};

	/**
	 * Function Widget_SlidingTabs.Widget_SlidingTabs_C.SlideLerp
	 */
	struct UWidget_SlidingTabs_C_SlideLerp_Params
	{	};

	/**
	 * Function Widget_SlidingTabs.Widget_SlidingTabs_C.PreConstruct
	 */
	struct UWidget_SlidingTabs_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SlidingTabs.Widget_SlidingTabs_C.ExecuteUbergraph_Widget_SlidingTabs
	 */
	struct UWidget_SlidingTabs_C_ExecuteUbergraph_Widget_SlidingTabs_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JNUO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
