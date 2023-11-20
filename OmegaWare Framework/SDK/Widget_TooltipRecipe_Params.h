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
	 * Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.SetTextWrapSize
	 */
	struct UWidget_TooltipRecipe_C_SetTextWrapSize_Params
	{
	public:
		double                                                     mTextWrapSize;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.SetProductionTime
	 */
	struct UWidget_TooltipRecipe_C_SetProductionTime_Params
	{	};

	/**
	 * Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.SetCycleTimeText
	 */
	struct UWidget_TooltipRecipe_C_SetCycleTimeText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.Set Styling
	 */
	struct UWidget_TooltipRecipe_C_SetStyling_Params
	{
	public:
		class URichTextBlock*                                      RichText;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		bool                                                       mIsHovered;                                              // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H1Q2[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.SetProductionTimeText
	 */
	struct UWidget_TooltipRecipe_C_SetProductionTimeText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.SetProducedInText
	 */
	struct UWidget_TooltipRecipe_C_SetProducedInText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.SetShowExpandPointer
	 */
	struct UWidget_TooltipRecipe_C_SetShowExpandPointer_Params
	{
	public:
		bool                                                       mShowExpandPointer;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.SetShowExpandedRecipe
	 */
	struct UWidget_TooltipRecipe_C_SetShowExpandedRecipe_Params
	{
	public:
		bool                                                       ShowExpanded;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.OnUnhovered
	 */
	struct UWidget_TooltipRecipe_C_OnUnhovered_Params
	{	};

	/**
	 * Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.OnHovered
	 */
	struct UWidget_TooltipRecipe_C_OnHovered_Params
	{	};

	/**
	 * Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.Construct
	 */
	struct UWidget_TooltipRecipe_C_Construct_Params
	{	};

	/**
	 * Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.PreConstruct
	 */
	struct UWidget_TooltipRecipe_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.BndEvt__Widget_TooltipRecipe_BPW_TooltipRecipe_OverclockSettings_K2Node_ComponentBoundEvent_3_OnOverclockChanged__DelegateSignature
	 */
	struct UWidget_TooltipRecipe_C_BndEvt__Widget_TooltipRecipe_BPW_TooltipRecipe_OverclockSettings_K2Node_ComponentBoundEvent_3_OnOverclockChanged__DelegateSignature_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TooltipRecipe.Widget_TooltipRecipe_C.ExecuteUbergraph_Widget_TooltipRecipe
	 */
	struct UWidget_TooltipRecipe_C_ExecuteUbergraph_Widget_TooltipRecipe_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
