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
	 * Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.MarkOptionAsDirty
	 */
	struct UBPW_AdvancedGameSettings_C_MarkOptionAsDirty_Params
	{	};

	/**
	 * Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.OnSearch
	 */
	struct UBPW_AdvancedGameSettings_C_OnSearch_Params
	{
	public:
		class FText                                                SearchText;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.OnOptionRowUnhovered
	 */
	struct UBPW_AdvancedGameSettings_C_OnOptionRowUnhovered_Params
	{
	public:
		class UFGDynamicOptionsRow*                                optionRow;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.OnOptionRowHovered
	 */
	struct UBPW_AdvancedGameSettings_C_OnOptionRowHovered_Params
	{
	public:
		class UFGDynamicOptionsRow*                                optionRow;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.OnGameModeCategoryClicked
	 */
	struct UBPW_AdvancedGameSettings_C_OnGameModeCategoryClicked_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.SetupGameModeCategories
	 */
	struct UBPW_AdvancedGameSettings_C_SetupGameModeCategories_Params
	{	};

	/**
	 * Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.BndEvt__BPW_AdvancedGameSettings_mApply_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBPW_AdvancedGameSettings_C_BndEvt__BPW_AdvancedGameSettings_mApply_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.ShowConfirmChangesPopup
	 */
	struct UBPW_AdvancedGameSettings_C_ShowConfirmChangesPopup_Params
	{	};

	/**
	 * Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.ApplyChanges
	 */
	struct UBPW_AdvancedGameSettings_C_ApplyChanges_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.ShowConfirmResetPopup
	 */
	struct UBPW_AdvancedGameSettings_C_ShowConfirmResetPopup_Params
	{	};

	/**
	 * Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.ResetChanges
	 */
	struct UBPW_AdvancedGameSettings_C_ResetChanges_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.OnEscape
	 */
	struct UBPW_AdvancedGameSettings_C_OnEscape_Params
	{	};

	/**
	 * Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.Construct
	 */
	struct UBPW_AdvancedGameSettings_C_Construct_Params
	{	};

	/**
	 * Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.BndEvt__BPW_GameModesSettings_mResetButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UBPW_AdvancedGameSettings_C_BndEvt__BPW_GameModesSettings_mResetButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.BndEvt__BPW_AdvancedGameSettings_mBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UBPW_AdvancedGameSettings_C_BndEvt__BPW_AdvancedGameSettings_mBackButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.PreConstruct
	 */
	struct UBPW_AdvancedGameSettings_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.BndEvt__BPW_AdvancedGameSettings_EditableText_115_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UBPW_AdvancedGameSettings_C_BndEvt__BPW_AdvancedGameSettings_EditableText_115_K2Node_ComponentBoundEvent_3_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.ExecuteUbergraph_BPW_AdvancedGameSettings
	 */
	struct UBPW_AdvancedGameSettings_C_ExecuteUbergraph_BPW_AdvancedGameSettings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_L1Q4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.OnResetClicked__DelegateSignature
	 */
	struct UBPW_AdvancedGameSettings_C_OnResetClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_AdvancedGameSettings.BPW_AdvancedGameSettings_C.OnBackButtonClicked__DelegateSignature
	 */
	struct UBPW_AdvancedGameSettings_C_OnBackButtonClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
