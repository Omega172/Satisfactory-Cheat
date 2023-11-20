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
	 * Function BPW_Options.BPW_Options_C.OverrideSwitching
	 */
	struct UBPW_Options_C_OverrideSwitching_Params
	{
	public:
		class UFGButtonWidget*                                     buttonWidget;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3NN7[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Options.BPW_Options_C.ClearSelection
	 */
	struct UBPW_Options_C_ClearSelection_Params
	{	};

	/**
	 * Function BPW_Options.BPW_Options_C.OnMenuClose
	 */
	struct UBPW_Options_C_OnMenuClose_Params
	{
	public:
		bool                                                       CancelParentFunction;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_OB13[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Options.BPW_Options_C.OnSearch
	 */
	struct UBPW_Options_C_OnSearch_Params
	{
	public:
		class FText                                                SearchResult;                                            // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_Options.BPW_Options_C.OnOptionRowUnhovered
	 */
	struct UBPW_Options_C_OnOptionRowUnhovered_Params
	{
	public:
		class UFGDynamicOptionsRow*                                optionRow;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Options.BPW_Options_C.OnOptionRowHovered
	 */
	struct UBPW_Options_C_OnOptionRowHovered_Params
	{
	public:
		class UFGDynamicOptionsRow*                                optionRow;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Options.BPW_Options_C.BindToHoveredUnhovered
	 */
	struct UBPW_Options_C_BindToHoveredUnhovered_Params
	{
	public:
		class UFGDynamicOptionsRow*                                optionRow;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Options.BPW_Options_C.OnOptionCategoryClicked
	 */
	struct UBPW_Options_C_OnOptionCategoryClicked_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Options.BPW_Options_C.GetOptionsMenuLanguageEntries
	 */
	struct UBPW_Options_C_GetOptionsMenuLanguageEntries_Params
	{
	public:
		TMap<class FString, class FText>                           LanguageEntries;                                         // 0x0000(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function BPW_Options.BPW_Options_C.HandleUnsavedChanges
	 */
	struct UBPW_Options_C_HandleUnsavedChanges_Params
	{
	public:
		bool                                                       Revert;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8QT8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Options.BPW_Options_C.GetActiveCategory
	 */
	struct UBPW_Options_C_GetActiveCategory_Params
	{
	public:
		EOptionCategory                                            OptionCategory;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QA49[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Options.BPW_Options_C.ApplyAllDynamicOptionsRows
	 */
	struct UBPW_Options_C_ApplyAllDynamicOptionsRows_Params
	{	};

	/**
	 * Function BPW_Options.BPW_Options_C.UpdateAllDynamicOptionRows
	 */
	struct UBPW_Options_C_UpdateAllDynamicOptionRows_Params
	{	};

	/**
	 * Function BPW_Options.BPW_Options_C.SetupOptionCategories
	 */
	struct UBPW_Options_C_SetupOptionCategories_Params
	{	};

	/**
	 * Function BPW_Options.BPW_Options_C.SetupSubmenuOptionsForSpawnAnim
	 */
	struct UBPW_Options_C_SetupSubmenuOptionsForSpawnAnim_Params
	{
	public:
		TArray<class UUserWidget*>                                 ActiveOptions;                                           // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function BPW_Options.BPW_Options_C.OnDefaultKeybindPressed
	 */
	struct UBPW_Options_C_OnDefaultKeybindPressed_Params
	{	};

	/**
	 * Function BPW_Options.BPW_Options_C.BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UBPW_Options_C_BndEvt__Widget_FrontEnd_Button_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Options.BPW_Options_C.BndEvt__Widget_FrontEnd_Button_C_0_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UBPW_Options_C_BndEvt__Widget_FrontEnd_Button_C_0_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Options.BPW_Options_C.OnMenuExit
	 */
	struct UBPW_Options_C_OnMenuExit_Params
	{
	public:
		class UWidget*                                             prevMenu;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       noAnimation;                                             // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Options.BPW_Options_C.CheckResolutionChanges
	 */
	struct UBPW_Options_C_CheckResolutionChanges_Params
	{	};

	/**
	 * Function BPW_Options.BPW_Options_C.ResolutionChangedAccepted
	 */
	struct UBPW_Options_C_ResolutionChangedAccepted_Params
	{
	public:
		bool                                                       confirm;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Options.BPW_Options_C.ShowConfirmResetPopup
	 */
	struct UBPW_Options_C_ShowConfirmResetPopup_Params
	{	};

	/**
	 * Function BPW_Options.BPW_Options_C.OpenRequireRestartIfRequired
	 */
	struct UBPW_Options_C_OpenRequireRestartIfRequired_Params
	{	};

	/**
	 * Function BPW_Options.BPW_Options_C.ApplyChanges
	 */
	struct UBPW_Options_C_ApplyChanges_Params
	{
	public:
		bool                                                       confirm;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Options.BPW_Options_C.Destruct
	 */
	struct UBPW_Options_C_Destruct_Params
	{	};

	/**
	 * Function BPW_Options.BPW_Options_C.CheckUnsavedChanges
	 */
	struct UBPW_Options_C_CheckUnsavedChanges_Params
	{	};

	/**
	 * Function BPW_Options.BPW_Options_C.OnEscape
	 */
	struct UBPW_Options_C_OnEscape_Params
	{	};

	/**
	 * Function BPW_Options.BPW_Options_C.ResetActiveSettings
	 */
	struct UBPW_Options_C_ResetActiveSettings_Params
	{
	public:
		bool                                                       confirm;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Options.BPW_Options_C.ShowConfirmChangesPopup
	 */
	struct UBPW_Options_C_ShowConfirmChangesPopup_Params
	{	};

	/**
	 * Function BPW_Options.BPW_Options_C.UpdateTooltipAndResetApplyVisibility
	 */
	struct UBPW_Options_C_UpdateTooltipAndResetApplyVisibility_Params
	{	};

	/**
	 * Function BPW_Options.BPW_Options_C.BndEvt__BPW_Options_mSearchbar_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UBPW_Options_C_BndEvt__BPW_Options_mSearchbar_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_Options.BPW_Options_C.Construct
	 */
	struct UBPW_Options_C_Construct_Params
	{	};

	/**
	 * Function BPW_Options.BPW_Options_C.ExecuteUbergraph_BPW_Options
	 */
	struct UBPW_Options_C_ExecuteUbergraph_BPW_Options_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Options.BPW_Options_C.OnLanguageMapPopulated__DelegateSignature
	 */
	struct UBPW_Options_C_OnLanguageMapPopulated__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_Options.BPW_Options_C.OnBackClicked__DelegateSignature
	 */
	struct UBPW_Options_C_OnBackClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
