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
	 * Function BPW_ColorPickerPreset_Save.BPW_ColorPickerPreset_Save_C.GenerateUnavailableNames
	 */
	struct UBPW_ColorPickerPreset_Save_C_GenerateUnavailableNames_Params
	{	};

	/**
	 * Function BPW_ColorPickerPreset_Save.BPW_ColorPickerPreset_Save_C.OnSaveDialogeClosed
	 */
	struct UBPW_ColorPickerPreset_Save_C_OnSaveDialogeClosed_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ColorPickerPreset_Save.BPW_ColorPickerPreset_Save_C.AttemptSave
	 */
	struct UBPW_ColorPickerPreset_Save_C_AttemptSave_Params
	{	};

	/**
	 * Function BPW_ColorPickerPreset_Save.BPW_ColorPickerPreset_Save_C.SavePreset
	 */
	struct UBPW_ColorPickerPreset_Save_C_SavePreset_Params
	{	};

	/**
	 * Function BPW_ColorPickerPreset_Save.BPW_ColorPickerPreset_Save_C.GenerateTakenNames
	 */
	struct UBPW_ColorPickerPreset_Save_C_GenerateTakenNames_Params
	{	};

	/**
	 * Function BPW_ColorPickerPreset_Save.BPW_ColorPickerPreset_Save_C.GetText
	 */
	struct UBPW_ColorPickerPreset_Save_C_GetText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BPW_ColorPickerPreset_Save.BPW_ColorPickerPreset_Save_C.GetShouldOkayBeEnabled
	 */
	struct UBPW_ColorPickerPreset_Save_C_GetShouldOkayBeEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JMSD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ColorPickerPreset_Save.BPW_ColorPickerPreset_Save_C.Construct
	 */
	struct UBPW_ColorPickerPreset_Save_C_Construct_Params
	{	};

	/**
	 * Function BPW_ColorPickerPreset_Save.BPW_ColorPickerPreset_Save_C.PreConstruct
	 */
	struct UBPW_ColorPickerPreset_Save_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ColorPickerPreset_Save.BPW_ColorPickerPreset_Save_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UBPW_ColorPickerPreset_Save_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ColorPickerPreset_Save.BPW_ColorPickerPreset_Save_C.BndEvt__mCancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UBPW_ColorPickerPreset_Save_C_BndEvt__mCancelButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ColorPickerPreset_Save.BPW_ColorPickerPreset_Save_C.BndEvt__mSaveButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UBPW_ColorPickerPreset_Save_C_BndEvt__mSaveButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ColorPickerPreset_Save.BPW_ColorPickerPreset_Save_C.BndEvt__mPresetName_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature
	 */
	struct UBPW_ColorPickerPreset_Save_C_BndEvt__mPresetName_K2Node_ComponentBoundEvent_3_OnEditableTextBoxChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_ColorPickerPreset_Save.BPW_ColorPickerPreset_Save_C.Destruct
	 */
	struct UBPW_ColorPickerPreset_Save_C_Destruct_Params
	{	};

	/**
	 * Function BPW_ColorPickerPreset_Save.BPW_ColorPickerPreset_Save_C.ExecuteUbergraph_BPW_ColorPickerPreset_Save
	 */
	struct UBPW_ColorPickerPreset_Save_C_ExecuteUbergraph_BPW_ColorPickerPreset_Save_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ColorPickerPreset_Save.BPW_ColorPickerPreset_Save_C.mOnPresetSaved__DelegateSignature
	 */
	struct UBPW_ColorPickerPreset_Save_C_mOnPresetSaved__DelegateSignature_Params
	{
	public:
		class FText                                                mPresetName;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       mDidSave;                                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
