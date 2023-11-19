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
	 * Function Widget_Tooltip.Widget_Tooltip_C.SetupStatBars
	 */
	struct UWidget_Tooltip_C_SetupStatBars_Params
	{	};

	/**
	 * Function Widget_Tooltip.Widget_Tooltip_C.SetupSlotType
	 */
	struct UWidget_Tooltip_C_SetupSlotType_Params
	{	};

	/**
	 * Function Widget_Tooltip.Widget_Tooltip_C.SetupCompatibleParts
	 */
	struct UWidget_Tooltip_C_SetupCompatibleParts_Params
	{	};

	/**
	 * Function Widget_Tooltip.Widget_Tooltip_C.GetItemDescription
	 */
	struct UWidget_Tooltip_C_GetItemDescription_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_Tooltip.Widget_Tooltip_C.GetItemName
	 */
	struct UWidget_Tooltip_C_GetItemName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_Tooltip.Widget_Tooltip_C.Construct
	 */
	struct UWidget_Tooltip_C_Construct_Params
	{	};

	/**
	 * Function Widget_Tooltip.Widget_Tooltip_C.ShowTootltip
	 */
	struct UWidget_Tooltip_C_ShowTootltip_Params
	{	};

	/**
	 * Function Widget_Tooltip.Widget_Tooltip_C.SetupScalingSpacer
	 */
	struct UWidget_Tooltip_C_SetupScalingSpacer_Params
	{	};

	/**
	 * Function Widget_Tooltip.Widget_Tooltip_C.ExecuteUbergraph_Widget_Tooltip
	 */
	struct UWidget_Tooltip_C_ExecuteUbergraph_Widget_Tooltip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
