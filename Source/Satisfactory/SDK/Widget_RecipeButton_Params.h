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
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.ClearButtonSelection
	 */
	struct UWidget_RecipeButton_C_ClearButtonSelection_Params
	{	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.GetCustomTooltip
	 */
	struct UWidget_RecipeButton_C_GetCustomTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.GetRightClickMenuVisibility
	 */
	struct UWidget_RecipeButton_C_GetRightClickMenuVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.CreateRightClickMenu
	 */
	struct UWidget_RecipeButton_C_CreateRightClickMenu_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.GetButtonHoverColor
	 */
	struct UWidget_RecipeButton_C_GetButtonHoverColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.GetTextHoverColor
	 */
	struct UWidget_RecipeButton_C_GetTextHoverColor_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.IsButtonEnabled
	 */
	struct UWidget_RecipeButton_C_IsButtonEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3OSU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.GetNumCanProduce
	 */
	struct UWidget_RecipeButton_C_GetNumCanProduce_Params
	{
	public:
		int32_t                                                    Result;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.GetNumCanProduceVisibility
	 */
	struct UWidget_RecipeButton_C_GetNumCanProduceVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.GetNumCanProduceText
	 */
	struct UWidget_RecipeButton_C_GetNumCanProduceText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.CheckIngredients
	 */
	struct UWidget_RecipeButton_C_CheckIngredients_Params
	{	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.GetRecipeIcon
	 */
	struct UWidget_RecipeButton_C_GetRecipeIcon_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x00D0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.GetIconColor
	 */
	struct UWidget_RecipeButton_C_GetIconColor_Params
	{
	public:
		struct FLinearColor                                        ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.OnMouseButtonDown
	 */
	struct UWidget_RecipeButton_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.GetRecipeDisplayName
	 */
	struct UWidget_RecipeButton_C_GetRecipeDisplayName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.Tick
	 */
	struct UWidget_RecipeButton_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.Construct
	 */
	struct UWidget_RecipeButton_C_Construct_Params
	{	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.OnClicked
	 */
	struct UWidget_RecipeButton_C_OnClicked_Params
	{	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.OnHovered
	 */
	struct UWidget_RecipeButton_C_OnHovered_Params
	{	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.OnPressed
	 */
	struct UWidget_RecipeButton_C_OnPressed_Params
	{	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.OnMouseLeave
	 */
	struct UWidget_RecipeButton_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.UpdateWindowWidgetOffset_Event
	 */
	struct UWidget_RecipeButton_C_UpdateWindowWidgetOffset_Event_Params
	{	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.BndEvt__Widget_ListButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWidget_RecipeButton_C_BndEvt__Widget_ListButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_H32D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_ListButton_C*                                ListButton;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.ExecuteUbergraph_Widget_RecipeButton
	 */
	struct UWidget_RecipeButton_C_ExecuteUbergraph_Widget_RecipeButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.OnRecipeButtonClicked__DelegateSignature
	 */
	struct UWidget_RecipeButton_C_OnRecipeButtonClicked__DelegateSignature_Params
	{
	public:
		class UWidget_RecipeButton_C*                              ClickedButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_RecipeButton.Widget_RecipeButton_C.UpdateWindowWidgetOffset__DelegateSignature
	 */
	struct UWidget_RecipeButton_C_UpdateWindowWidgetOffset__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
