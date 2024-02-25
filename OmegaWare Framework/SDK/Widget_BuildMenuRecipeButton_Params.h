#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.PlaySFXSideMenu
	 */
	struct UWidget_BuildMenuRecipeButton_C_PlaySFXSideMenu_Params
	{	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.PlayClickedSFX
	 */
	struct UWidget_BuildMenuRecipeButton_C_PlayClickedSFX_Params
	{	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.PlayHoveringSFX
	 */
	struct UWidget_BuildMenuRecipeButton_C_PlayHoveringSFX_Params
	{	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.SetFontScaleForLanguage
	 */
	struct UWidget_BuildMenuRecipeButton_C_SetFontScaleForLanguage_Params
	{	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.UpdateNewItemOverlayVisibility
	 */
	struct UWidget_BuildMenuRecipeButton_C_UpdateNewItemOverlayVisibility_Params
	{	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnKeyDown
	 */
	struct UWidget_BuildMenuRecipeButton_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.CreateRightClickMenu
	 */
	struct UWidget_BuildMenuRecipeButton_C_CreateRightClickMenu_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnMouseButtonDown
	 */
	struct UWidget_BuildMenuRecipeButton_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.ResolveHotkeyIndex
	 */
	struct UWidget_BuildMenuRecipeButton_C_ResolveHotkeyIndex_Params
	{	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.CreateShoppingListButtons
	 */
	struct UWidget_BuildMenuRecipeButton_C_CreateShoppingListButtons_Params
	{	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.GetBuildingIcon
	 */
	struct UWidget_BuildMenuRecipeButton_C_GetBuildingIcon_Params
	{	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnFocusReceived
	 */
	struct UWidget_BuildMenuRecipeButton_C_OnFocusReceived_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FEventReply                                         ReturnValue;                                             // 0x0040(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.GetRecipeName
	 */
	struct UWidget_BuildMenuRecipeButton_C_GetRecipeName_Params
	{	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.Construct
	 */
	struct UWidget_BuildMenuRecipeButton_C_Construct_Params
	{	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_BuildMenuRecipeButton_C_BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_35_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_439_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_BuildMenuRecipeButton_C_BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_439_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_BuildMenuRecipeButton_C_BndEvt__mRecipeOverlay_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.SimulateOnHovered
	 */
	struct UWidget_BuildMenuRecipeButton_C_SimulateOnHovered_Params
	{	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.SimulateOnUnhovered
	 */
	struct UWidget_BuildMenuRecipeButton_C_SimulateOnUnhovered_Params
	{	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.PreConstruct
	 */
	struct UWidget_BuildMenuRecipeButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.BndEvt__mRightClickMenu_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
	 */
	struct UWidget_BuildMenuRecipeButton_C_BndEvt__mRightClickMenu_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params
	{
	public:
		bool                                                       bIsOpen;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.SetupRecipeButton
	 */
	struct UWidget_BuildMenuRecipeButton_C_SetupRecipeButton_Params
	{	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.ExecuteUbergraph_Widget_BuildMenuRecipeButton
	 */
	struct UWidget_BuildMenuRecipeButton_C_ExecuteUbergraph_Widget_BuildMenuRecipeButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XSR0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnStopHoveringRecipe__DelegateSignature
	 */
	struct UWidget_BuildMenuRecipeButton_C_OnStopHoveringRecipe__DelegateSignature_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UWidget_BuildMenuRecipeButton_C*                     RecipeButton;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnRecipeHovered__DelegateSignature
	 */
	struct UWidget_BuildMenuRecipeButton_C_OnRecipeHovered__DelegateSignature_Params
	{
	public:
		class UClass*                                              RecipeHover;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UWidget_BuildMenuRecipeButton_C*                     RecipeButton;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenuRecipeButton.Widget_BuildMenuRecipeButton_C.OnRecipeClicked__DelegateSignature
	 */
	struct UWidget_BuildMenuRecipeButton_C_OnRecipeClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
