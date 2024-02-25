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
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.CloseBlueprintEditor
	 */
	struct UWidget_BlueprintDesigner_C_CloseBlueprintEditor_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.GetGameModeSettingFeedback
	 */
	struct UWidget_BlueprintDesigner_C_GetGameModeSettingFeedback_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.ValidateBlueprintRecord
	 */
	struct UWidget_BlueprintDesigner_C_ValidateBlueprintRecord_Params
	{
	public:
		struct FBlueprintRecord                                    BlueprintRecord;                                         // 0x0000(0x0050)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FBlueprintRecord                                    ValidatedRecord;                                         // 0x0050(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetDirectorySelector
	 */
	struct UWidget_BlueprintDesigner_C_SetDirectorySelector_Params
	{
	public:
		class UBPW_BlueprintDirectorySelector_C*                   mDirectorySelector;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.ResetPopupOverlay
	 */
	struct UWidget_BlueprintDesigner_C_ResetPopupOverlay_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.AddWidgetToPopupOverlay
	 */
	struct UWidget_BlueprintDesigner_C_AddWidgetToPopupOverlay_Params
	{
	public:
		class UWidget*                                             Content;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetNameErrorTooltip
	 */
	struct UWidget_BlueprintDesigner_C_SetNameErrorTooltip_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.ShowDirectoryMenu
	 */
	struct UWidget_BlueprintDesigner_C_ShowDirectoryMenu_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.UpdateSaveButtonVisibility
	 */
	struct UWidget_BlueprintDesigner_C_UpdateSaveButtonVisibility_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.GetInvalidNameSymbolsAsString
	 */
	struct UWidget_BlueprintDesigner_C_GetInvalidNameSymbolsAsString_Params
	{
	public:
		class FString                                              OutString;                                               // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.CheckIfTextIsFreeOfInvalidSymbols
	 */
	struct UWidget_BlueprintDesigner_C_CheckIfTextIsFreeOfInvalidSymbols_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       TextIsValid;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2A07[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.UpdateNameWarning
	 */
	struct UWidget_BlueprintDesigner_C_UpdateNameWarning_Params
	{
	public:
		class FText                                                Name;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.NullCheckCategories
	 */
	struct UWidget_BlueprintDesigner_C_NullCheckCategories_Params
	{
	public:
		class UFGBlueprintCategory*                                InCategory;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UFGBlueprintSubCategory*                             InSubCategory;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UFGBlueprintCategory*                                OutCategory;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UFGBlueprintSubCategory*                             OutSubCategory;                                          // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.AttemptLoad
	 */
	struct UWidget_BlueprintDesigner_C_AttemptLoad_Params
	{
	public:
		class UFGBlueprintDescriptor*                              blueprintDescriptor;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.GetSaveButtonTooltip
	 */
	struct UWidget_BlueprintDesigner_C_GetSaveButtonTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetSaveButtonVisibility
	 */
	struct UWidget_BlueprintDesigner_C_SetSaveButtonVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8UGW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnCostUpdated
	 */
	struct UWidget_BlueprintDesigner_C_OnCostUpdated_Params
	{
	public:
		TArray<struct FItemAmount>                                 cost;                                                    // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.GenerateCost
	 */
	struct UWidget_BlueprintDesigner_C_GenerateCost_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnRemovePromptClosed
	 */
	struct UWidget_BlueprintDesigner_C_OnRemovePromptClosed_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NZFQ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.GetAvailableName
	 */
	struct UWidget_BlueprintDesigner_C_GetAvailableName_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnSavePromptClosed
	 */
	struct UWidget_BlueprintDesigner_C_OnSavePromptClosed_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.AttemptSave
	 */
	struct UWidget_BlueprintDesigner_C_AttemptSave_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.GenerateUsedBlueprintNames
	 */
	struct UWidget_BlueprintDesigner_C_GenerateUsedBlueprintNames_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.GetUsedNameWarningTooltip
	 */
	struct UWidget_BlueprintDesigner_C_GetUsedNameWarningTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnPreviewKeyDown
	 */
	struct UWidget_BlueprintDesigner_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetIsBlueprintEditor
	 */
	struct UWidget_BlueprintDesigner_C_SetIsBlueprintEditor_Params
	{
	public:
		bool                                                       mIsBlueprintEditor;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetBlueprintRecord
	 */
	struct UWidget_BlueprintDesigner_C_SetBlueprintRecord_Params
	{
	public:
		struct FBlueprintRecord                                    mBlueprintRecord;                                        // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.Get Blueprint Record
	 */
	struct UWidget_BlueprintDesigner_C_GetBlueprintRecord_Params
	{
	public:
		struct FBlueprintRecord                                    BlueprintRecord;                                         // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetDirectory
	 */
	struct UWidget_BlueprintDesigner_C_SetDirectory_Params
	{
	public:
		struct FStruct_BlueprintDirectoryData                      mDirectory;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnColorPickerClosed
	 */
	struct UWidget_BlueprintDesigner_C_OnColorPickerClosed_Params
	{
	public:
		TArray<struct FLinearColor>                                Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetColor
	 */
	struct UWidget_BlueprintDesigner_C_SetColor_Params
	{
	public:
		struct FLinearColor                                        mColor;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SetIconID
	 */
	struct UWidget_BlueprintDesigner_C_SetIconID_Params
	{
	public:
		int32_t                                                    mIconID;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FXAK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnIconSelected
	 */
	struct UWidget_BlueprintDesigner_C_OnIconSelected_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ImageID;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.FillOutInfo
	 */
	struct UWidget_BlueprintDesigner_C_FillOutInfo_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.Init
	 */
	struct UWidget_BlueprintDesigner_C_Init_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.Construct
	 */
	struct UWidget_BlueprintDesigner_C_Construct_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.ClearDesigner
	 */
	struct UWidget_BlueprintDesigner_C_ClearDesigner_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.SaveBlueprint
	 */
	struct UWidget_BlueprintDesigner_C_SaveBlueprint_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_BPW_BlueprintSelector_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_BPW_BlueprintSelector_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_BPW_BlueprintSelector_K2Node_ComponentBoundEvent_1_OnBlueprintSelected__DelegateSignature
	 */
	struct UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_BPW_BlueprintSelector_K2Node_ComponentBoundEvent_1_OnBlueprintSelected__DelegateSignature_Params
	{
	public:
		class UFGBlueprintDescriptor*                              blueprintDescriptor;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_3_OnClose__DelegateSignature
	 */
	struct UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_3_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_Widget_StandardButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_Widget_StandardButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnImageBrowserCancel
	 */
	struct UWidget_BlueprintDesigner_C_OnImageBrowserCancel_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_Widget_StandardButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_Widget_StandardButton_1_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnEscapePressed
	 */
	struct UWidget_BlueprintDesigner_C_OnEscapePressed_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mSelectColor_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 */
	struct UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_mSelectColor_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mSaveButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
	 */
	struct UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_mSaveButton_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mLoveButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
	 */
	struct UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_mLoveButton_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mClearDesingerButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature
	 */
	struct UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_mClearDesingerButton_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mCancelButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_mCancelButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mRemoveBlueprintButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature
	 */
	struct UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_mRemoveBlueprintButton_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mNameInput_K2Node_ComponentBoundEvent_12_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_mNameInput_K2Node_ComponentBoundEvent_12_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.BndEvt__Widget_BlueprintDesigner_mDescriptionInput_K2Node_ComponentBoundEvent_13_OnMultiLineEditableTextChangedEvent__DelegateSignature
	 */
	struct UWidget_BlueprintDesigner_C_BndEvt__Widget_BlueprintDesigner_mDescriptionInput_K2Node_ComponentBoundEvent_13_OnMultiLineEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnDirectorySelectorClosed
	 */
	struct UWidget_BlueprintDesigner_C_OnDirectorySelectorClosed_Params
	{
	public:
		bool                                                       DirectoryHasBeenSet;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BXUX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FStruct_BlueprintDirectoryData                      DirectoryData;                                           // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnColorPickerCanceled
	 */
	struct UWidget_BlueprintDesigner_C_OnColorPickerCanceled_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnClosePromptClosed
	 */
	struct UWidget_BlueprintDesigner_C_OnClosePromptClosed_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.ShowClosePrompt
	 */
	struct UWidget_BlueprintDesigner_C_ShowClosePrompt_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.ExecuteUbergraph_Widget_BlueprintDesigner
	 */
	struct UWidget_BlueprintDesigner_C_ExecuteUbergraph_Widget_BlueprintDesigner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6LSG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnClosed__DelegateSignature
	 */
	struct UWidget_BlueprintDesigner_C_OnClosed__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnRemoveBlueprint__DelegateSignature
	 */
	struct UWidget_BlueprintDesigner_C_OnRemoveBlueprint__DelegateSignature_Params
	{
	public:
		class UFGBlueprintDescriptor*                              blueprintDescriptor;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BlueprintDesigner.Widget_BlueprintDesigner_C.OnBlueprintUpdated__DelegateSignature
	 */
	struct UWidget_BlueprintDesigner_C_OnBlueprintUpdated__DelegateSignature_Params
	{
	public:
		class UObject*                                             blueprintDescriptor;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FBlueprintRecord                                    BlueprintRecord;                                         // 0x0008(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
