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
	 * Function Widget_SchematicButton.Widget_SchematicButton_C.SetSelectedSchematicFeedback
	 */
	struct UWidget_SchematicButton_C_SetSelectedSchematicFeedback_Params
	{	};

	/**
	 * Function Widget_SchematicButton.Widget_SchematicButton_C.SetIconStyling
	 */
	struct UWidget_SchematicButton_C_SetIconStyling_Params
	{	};

	/**
	 * Function Widget_SchematicButton.Widget_SchematicButton_C.SetTextStyling
	 */
	struct UWidget_SchematicButton_C_SetTextStyling_Params
	{	};

	/**
	 * Function Widget_SchematicButton.Widget_SchematicButton_C.SetLockedFeedback
	 */
	struct UWidget_SchematicButton_C_SetLockedFeedback_Params
	{	};

	/**
	 * Function Widget_SchematicButton.Widget_SchematicButton_C.SetIsButtonClickable
	 */
	struct UWidget_SchematicButton_C_SetIsButtonClickable_Params
	{	};

	/**
	 * Function Widget_SchematicButton.Widget_SchematicButton_C.GetSchematicEnabledInPhase
	 */
	struct UWidget_SchematicButton_C_GetSchematicEnabledInPhase_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0IK1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_SchematicButton.Widget_SchematicButton_C.IsActivateButtonEnabled
	 */
	struct UWidget_SchematicButton_C_IsActivateButtonEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SchematicButton.Widget_SchematicButton_C.IsActiveSchematic
	 */
	struct UWidget_SchematicButton_C_IsActiveSchematic_Params
	{
	public:
		bool                                                       IsActive;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_M1ID[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_SchematicButton.Widget_SchematicButton_C.GetCategoryIcon
	 */
	struct UWidget_SchematicButton_C_GetCategoryIcon_Params
	{	};

	/**
	 * Function Widget_SchematicButton.Widget_SchematicButton_C.SetSchematicPurchasedFeedback
	 */
	struct UWidget_SchematicButton_C_SetSchematicPurchasedFeedback_Params
	{	};

	/**
	 * Function Widget_SchematicButton.Widget_SchematicButton_C.SetSchematicActiveFeedback
	 */
	struct UWidget_SchematicButton_C_SetSchematicActiveFeedback_Params
	{	};

	/**
	 * Function Widget_SchematicButton.Widget_SchematicButton_C.SetSchematicName
	 */
	struct UWidget_SchematicButton_C_SetSchematicName_Params
	{	};

	/**
	 * Function Widget_SchematicButton.Widget_SchematicButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_SchematicButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_102_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_SchematicButton.Widget_SchematicButton_C.Construct
	 */
	struct UWidget_SchematicButton_C_Construct_Params
	{	};

	/**
	 * Function Widget_SchematicButton.Widget_SchematicButton_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_SchematicButton_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_68_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_SchematicButton.Widget_SchematicButton_C.Event Update Button Style
	 */
	struct UWidget_SchematicButton_C_EventUpdateButtonStyle_Params
	{	};

	/**
	 * Function Widget_SchematicButton.Widget_SchematicButton_C.Destruct
	 */
	struct UWidget_SchematicButton_C_Destruct_Params
	{	};

	/**
	 * Function Widget_SchematicButton.Widget_SchematicButton_C.ExecuteUbergraph_Widget_SchematicButton
	 */
	struct UWidget_SchematicButton_C_ExecuteUbergraph_Widget_SchematicButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P3A4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
