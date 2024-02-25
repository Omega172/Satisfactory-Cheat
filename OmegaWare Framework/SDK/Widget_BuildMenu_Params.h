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
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.On Hotbar Slot Updated Visual
	 */
	struct UWidget_BuildMenu_C_OnHotbarSlotUpdatedVisual_Params
	{
	public:
		class UFGPlayerHotbar*                                     Hotbar;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SlotIndex;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.OnMenuStateChanged
	 */
	struct UWidget_BuildMenu_C_OnMenuStateChanged_Params
	{
	public:
		EMenuStateSection                                          NewState;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.OnBlueprintSettingsPopupCreated
	 */
	struct UWidget_BuildMenu_C_OnBlueprintSettingsPopupCreated_Params
	{
	public:
		class UWidget*                                             PopupWidget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.OnBlueprintClicked
	 */
	struct UWidget_BuildMenu_C_OnBlueprintClicked_Params
	{
	public:
		class UFGBlueprintDescriptor*                              blueprintDescriptor;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.SetKeybindingsForTabs
	 */
	struct UWidget_BuildMenu_C_SetKeybindingsForTabs_Params
	{	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.OnShortcutPressed
	 */
	struct UWidget_BuildMenu_C_OnShortcutPressed_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.ScrollToLastRecipe
	 */
	struct UWidget_BuildMenu_C_ScrollToLastRecipe_Params
	{	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.OnToggleBuildGunPaintPressed
	 */
	struct UWidget_BuildMenu_C_OnToggleBuildGunPaintPressed_Params
	{	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.OnToggleBuildGunPressed
	 */
	struct UWidget_BuildMenu_C_OnToggleBuildGunPressed_Params
	{	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.On Apply Material to Hotbar
	 */
	struct UWidget_BuildMenu_C_OnApplyMaterialtoHotbar_Params
	{
	public:
		class UClass*                                              CustomisationRecipe;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.OnDefaultMaterialHovered
	 */
	struct UWidget_BuildMenu_C_OnDefaultMaterialHovered_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		ECustomiserType                                            CustomiserType;                                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.OnDefaultMaterialChanged
	 */
	struct UWidget_BuildMenu_C_OnDefaultMaterialChanged_Params
	{
	public:
		class UClass*                                              SubCategory;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              NewDefaultRecipe;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.OnSearchFocused
	 */
	struct UWidget_BuildMenu_C_OnSearchFocused_Params
	{	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.SetupSubCategoryButtons
	 */
	struct UWidget_BuildMenu_C_SetupSubCategoryButtons_Params
	{	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.SetupCategoryButtons
	 */
	struct UWidget_BuildMenu_C_SetupCategoryButtons_Params
	{	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.SetupBindings
	 */
	struct UWidget_BuildMenu_C_SetupBindings_Params
	{
	public:
		bool                                                       Construct;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_U3C4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.UpdateBuildMenuMode
	 */
	struct UWidget_BuildMenu_C_UpdateBuildMenuMode_Params
	{
	public:
		EBuildMenu_Modes                                           mBuildMenuMode;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       SwitchTabs;                                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       UpdateOnBuildgun;                                        // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       BroadcastBuildgunUpdate;                                 // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.GetShortcutKeys
	 */
	struct UWidget_BuildMenu_C_GetShortcutKeys_Params
	{
	public:
		TArray<struct FKey>                                        ShortcutKeys;                                            // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.GetShouldSearchResultBeBoundToHotbar
	 */
	struct UWidget_BuildMenu_C_GetShouldSearchResultBeBoundToHotbar_Params
	{
	public:
		struct FKeyEvent                                           KeyEvent;                                                // 0x0000(0x0040)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       ReturnValue;                                             // 0x0040(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.OnMouseMove
	 */
	struct UWidget_BuildMenu_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.OnPreviewKeyDown
	 */
	struct UWidget_BuildMenu_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.OnCategoryClicked
	 */
	struct UWidget_BuildMenu_C_OnCategoryClicked_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YUTE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.SetSearchbarUnfocused
	 */
	struct UWidget_BuildMenu_C_SetSearchbarUnfocused_Params
	{	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.SetSearchbarFocused
	 */
	struct UWidget_BuildMenu_C_SetSearchbarFocused_Params
	{
	public:
		class UBPW_BuildMenu_Browser_C*                            ActiveBrowser;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.IsShortcutSettingAllowed
	 */
	struct UWidget_BuildMenu_C_IsShortcutSettingAllowed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.OnSearchCreateResults
	 */
	struct UWidget_BuildMenu_C_OnSearchCreateResults_Params
	{
	public:
		class FText                                                mText;                                                   // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.UpdateShortcuts
	 */
	struct UWidget_BuildMenu_C_UpdateShortcuts_Params
	{	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.HandleShortcutPressed
	 */
	struct UWidget_BuildMenu_C_HandleShortcutPressed_Params
	{
	public:
		int32_t                                                    shortcutIndex;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       setupNewShortcut;                                        // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.OnStopHoveringRecipe
	 */
	struct UWidget_BuildMenu_C_OnStopHoveringRecipe_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UWidget_BuildMenuRecipeButton_C*                     RecipeButton;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.OnRecipeHovered
	 */
	struct UWidget_BuildMenu_C_OnRecipeHovered_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UWidget_BuildMenuRecipeButton_C*                     RecipeButton;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.IsCentralStorageBuilt
	 */
	struct UWidget_BuildMenu_C_IsCentralStorageBuilt_Params
	{
	public:
		bool                                                       IsBuilt;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KVS9[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.IsSpaceElevatorBuilt
	 */
	struct UWidget_BuildMenu_C_IsSpaceElevatorBuilt_Params
	{
	public:
		bool                                                       IsBuilt;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EY9U[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.IsTradingPostBuilt
	 */
	struct UWidget_BuildMenu_C_IsTradingPostBuilt_Params
	{
	public:
		bool                                                       IsBuilt;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9922[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.InitBuildMenu
	 */
	struct UWidget_BuildMenu_C_InitBuildMenu_Params
	{	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.OnRecipeClicked
	 */
	struct UWidget_BuildMenu_C_OnRecipeClicked_Params
	{
	public:
		class UClass*                                              InputPin;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.CreateInfoBox
	 */
	struct UWidget_BuildMenu_C_CreateInfoBox_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.InpActEvt_IA_FocusSearch_K2Node_EnhancedInputActionEvent_1
	 */
	struct UWidget_BuildMenu_C_InpActEvt_IA_FocusSearch_K2Node_EnhancedInputActionEvent_1_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.Destruct
	 */
	struct UWidget_BuildMenu_C_Destruct_Params
	{	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.UnBlockMouse
	 */
	struct UWidget_BuildMenu_C_UnBlockMouse_Params
	{	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__Widget_MouseMoveChecker_K2Node_ComponentBoundEvent_0_OnMouseMoved__DelegateSignature
	 */
	struct UWidget_BuildMenu_C_BndEvt__Widget_MouseMoveChecker_K2Node_ComponentBoundEvent_0_OnMouseMoved__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.BlockMouse
	 */
	struct UWidget_BuildMenu_C_BlockMouse_Params
	{	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_5_OnStyleSelected__DelegateSignature
	 */
	struct UWidget_BuildMenu_C_BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_5_OnStyleSelected__DelegateSignature_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_3_OnStyleHovered__DelegateSignature
	 */
	struct UWidget_BuildMenu_C_BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_3_OnStyleHovered__DelegateSignature_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_4_OnStyleUnhovered__DelegateSignature
	 */
	struct UWidget_BuildMenu_C_BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_4_OnStyleUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.SetBuildMenuMode
	 */
	struct UWidget_BuildMenu_C_SetBuildMenuMode_Params
	{
	public:
		EBuildMenu_Modes                                           NewMode;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_7_OnTabButtonClicked__DelegateSignature
	 */
	struct UWidget_BuildMenu_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_7_OnTabButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_8_OnSwatchUpdated__DelegateSignature
	 */
	struct UWidget_BuildMenu_C_BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_8_OnSwatchUpdated__DelegateSignature_Params
	{
	public:
		unsigned char                                              SlotIndex;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_74US[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FFactoryCustomizationColorSlot                      slotData;                                                // 0x0004(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.Construct
	 */
	struct UWidget_BuildMenu_C_Construct_Params
	{	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.OnEscapePressed
	 */
	struct UWidget_BuildMenu_C_OnEscapePressed_Params
	{	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_9_OnSearchTextChanged__DelegateSignature
	 */
	struct UWidget_BuildMenu_C_BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_9_OnSearchTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_11_OnSearchInputBoxFocusReceived__DelegateSignature
	 */
	struct UWidget_BuildMenu_C_BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_11_OnSearchInputBoxFocusReceived__DelegateSignature_Params
	{
	public:
		struct FFocusEvent                                         FocusEvent;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_12_OnDeselectFirstSearchResultIfOtherOptionIsHovered__DelegateSignature
	 */
	struct UWidget_BuildMenu_C_BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_12_OnDeselectFirstSearchResultIfOtherOptionIsHovered__DelegateSignature_Params
	{
	public:
		class UWidget*                                             FirstResultWidget;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_13_OnSearchComittedEnter__DelegateSignature
	 */
	struct UWidget_BuildMenu_C_BndEvt__BPW_BuildMenu_Browser_K2Node_ComponentBoundEvent_13_OnSearchComittedEnter__DelegateSignature_Params
	{
	public:
		class UWidget*                                             FirstResultWidget;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_1_OnSetDefualtMaterialOnAllClicked__DelegateSignature
	 */
	struct UWidget_BuildMenu_C_BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_1_OnSetDefualtMaterialOnAllClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              CustomiserRecipe;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_2_OnColorPickerOpened__DelegateSignature
	 */
	struct UWidget_BuildMenu_C_BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_2_OnColorPickerOpened__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_6_OnColorPickerClosed__DelegateSignature
	 */
	struct UWidget_BuildMenu_C_BndEvt__BPW_Customiser_K2Node_ComponentBoundEvent_6_OnColorPickerClosed__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.OnBlueprintChenagesPromptClosed
	 */
	struct UWidget_BuildMenu_C_OnBlueprintChenagesPromptClosed_Params
	{
	public:
		bool                                                       StayInEditMode;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.OnRecipeClickedPopupClosed
	 */
	struct UWidget_BuildMenu_C_OnRecipeClickedPopupClosed_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__Widget_BuildMenu_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_10_OnBlueprintButtonHovered__DelegateSignature
	 */
	struct UWidget_BuildMenu_C_BndEvt__Widget_BuildMenu_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_10_OnBlueprintButtonHovered__DelegateSignature_Params
	{
	public:
		class UFGBlueprintDescriptor*                              blueprintDescriptor;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__Widget_BuildMenu_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_14_OnBlueprintButtonUnhovered__DelegateSignature
	 */
	struct UWidget_BuildMenu_C_BndEvt__Widget_BuildMenu_BPW_BlueprintMenu_K2Node_ComponentBoundEvent_14_OnBlueprintButtonUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.BndEvt__Widget_BuildMenu_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_15_OnClose__DelegateSignature
	 */
	struct UWidget_BuildMenu_C_BndEvt__Widget_BuildMenu_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_15_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.ExecuteUbergraph_Widget_BuildMenu
	 */
	struct UWidget_BuildMenu_C_ExecuteUbergraph_Widget_BuildMenu_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu.Widget_BuildMenu_C.OnClicked__DelegateSignature
	 */
	struct UWidget_BuildMenu_C_OnClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
