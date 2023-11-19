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
	 * Function Widget_TradingPost_RecipeInfoBox.Widget_TradingPost_RecipeInfoBox_C.SetCategoryIcon
	 */
	struct UWidget_TradingPost_RecipeInfoBox_C_SetCategoryIcon_Params
	{	};

	/**
	 * Function Widget_TradingPost_RecipeInfoBox.Widget_TradingPost_RecipeInfoBox_C.SetItemTitle
	 */
	struct UWidget_TradingPost_RecipeInfoBox_C_SetItemTitle_Params
	{
	public:
		class FText                                                Title;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_TradingPost_RecipeInfoBox.Widget_TradingPost_RecipeInfoBox_C.SetItemDescriptionText
	 */
	struct UWidget_TradingPost_RecipeInfoBox_C_SetItemDescriptionText_Params
	{
	public:
		class FText                                                Description;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_TradingPost_RecipeInfoBox.Widget_TradingPost_RecipeInfoBox_C.Construct
	 */
	struct UWidget_TradingPost_RecipeInfoBox_C_Construct_Params
	{	};

	/**
	 * Function Widget_TradingPost_RecipeInfoBox.Widget_TradingPost_RecipeInfoBox_C.Event Autoscroll Hub Text
	 */
	struct UWidget_TradingPost_RecipeInfoBox_C_EventAutoscrollHubText_Params
	{	};

	/**
	 * Function Widget_TradingPost_RecipeInfoBox.Widget_TradingPost_RecipeInfoBox_C.ExecuteUbergraph_Widget_TradingPost_RecipeInfoBox
	 */
	struct UWidget_TradingPost_RecipeInfoBox_C_ExecuteUbergraph_Widget_TradingPost_RecipeInfoBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OK79[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
