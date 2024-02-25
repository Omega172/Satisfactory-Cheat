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
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.IsCreativeModeEnabled
	 */
	struct UWidget_PlayMenu_Alpha_C_IsCreativeModeEnabled_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ERMB[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.SetAdvancedGameSettingsVisibility
	 */
	struct UWidget_PlayMenu_Alpha_C_SetAdvancedGameSettingsVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.OnMenuClose
	 */
	struct UWidget_PlayMenu_Alpha_C_OnMenuClose_Params
	{
	public:
		bool                                                       CancelParentFunction;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.UpdateCreativeModeEnabledFeedback
	 */
	struct UWidget_PlayMenu_Alpha_C_UpdateCreativeModeEnabledFeedback_Params
	{
	public:
		bool                                                       CreativeModeEnabled;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.OnStartingLocUnhovered
	 */
	struct UWidget_PlayMenu_Alpha_C_OnStartingLocUnhovered_Params
	{	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.OnStartingLocHovered
	 */
	struct UWidget_PlayMenu_Alpha_C_OnStartingLocHovered_Params
	{	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.CheckStartingTierSetSkipIntro
	 */
	struct UWidget_PlayMenu_Alpha_C_CheckStartingTierSetSkipIntro_Params
	{	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.InitStartingLocs
	 */
	struct UWidget_PlayMenu_Alpha_C_InitStartingLocs_Params
	{	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.SetStartButtonEnable
	 */
	struct UWidget_PlayMenu_Alpha_C_SetStartButtonEnable_Params
	{
	public:
		bool                                                       Enabled;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.CheckSessionNameForError
	 */
	struct UWidget_PlayMenu_Alpha_C_CheckSessionNameForError_Params
	{	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.SetPlayButtonError
	 */
	struct UWidget_PlayMenu_Alpha_C_SetPlayButtonError_Params
	{
	public:
		bool                                                       Error;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PJ77[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ErrorMessage;                                            // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__Widget_Options_DropdownBox_K2Node_ComponentBoundEvent_2_onSelectionChanged__DelegateSignature
	 */
	struct UWidget_PlayMenu_Alpha_C_BndEvt__Widget_Options_DropdownBox_K2Node_ComponentBoundEvent_2_onSelectionChanged__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedOption;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.OnStartLocClicked
	 */
	struct UWidget_PlayMenu_Alpha_C_OnStartLocClicked_Params
	{
	public:
		struct FStartingLocationsDataStruct                        mStartingLocs;                                           // 0x0000(0x0088)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.PreConstruct
	 */
	struct UWidget_PlayMenu_Alpha_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UWidget_PlayMenu_Alpha_C_BndEvt__EditableTextBox_0_K2Node_ComponentBoundEvent_6_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__mStartGame_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_PlayMenu_Alpha_C_BndEvt__mStartGame_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.OnMenuEnter
	 */
	struct UWidget_PlayMenu_Alpha_C_OnMenuEnter_Params
	{
	public:
		class UWidget*                                             prevMenu;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.Construct
	 */
	struct UWidget_PlayMenu_Alpha_C_Construct_Params
	{	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.OnEscape
	 */
	struct UWidget_PlayMenu_Alpha_C_OnEscape_Params
	{	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__Widget_PlayMenu_Alpha_mAdvancedGameSettingsButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_PlayMenu_Alpha_C_BndEvt__Widget_PlayMenu_Alpha_mAdvancedGameSettingsButton_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__Widget_PlayMenu_Alpha_mSkipIntroCheckbox_K2Node_ComponentBoundEvent_0_OnCheckChanged__DelegateSignature
	 */
	struct UWidget_PlayMenu_Alpha_C_BndEvt__Widget_PlayMenu_Alpha_mSkipIntroCheckbox_K2Node_ComponentBoundEvent_0_OnCheckChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsChecked;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__Widget_PlayMenu_Alpha_BPW_AdvancedGameSettings_K2Node_ComponentBoundEvent_1_OnBackButtonClicked__DelegateSignature
	 */
	struct UWidget_PlayMenu_Alpha_C_BndEvt__Widget_PlayMenu_Alpha_BPW_AdvancedGameSettings_K2Node_ComponentBoundEvent_1_OnBackButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.EnterAdvancedGameSettings
	 */
	struct UWidget_PlayMenu_Alpha_C_EnterAdvancedGameSettings_Params
	{	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.OnEnterCreativeModePopupClosed
	 */
	struct UWidget_PlayMenu_Alpha_C_OnEnterCreativeModePopupClosed_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__Widget_PlayMenu_Alpha_BPW_AdvancedGameSettings_K2Node_ComponentBoundEvent_3_OnResetClicked__DelegateSignature
	 */
	struct UWidget_PlayMenu_Alpha_C_BndEvt__Widget_PlayMenu_Alpha_BPW_AdvancedGameSettings_K2Node_ComponentBoundEvent_3_OnResetClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.BndEvt__Widget_PlayMenu_Alpha_mResetSettings_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_PlayMenu_Alpha_C_BndEvt__Widget_PlayMenu_Alpha_mResetSettings_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_PlayMenu_Alpha.Widget_PlayMenu_Alpha_C.ExecuteUbergraph_Widget_PlayMenu_Alpha
	 */
	struct UWidget_PlayMenu_Alpha_C_ExecuteUbergraph_Widget_PlayMenu_Alpha_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
