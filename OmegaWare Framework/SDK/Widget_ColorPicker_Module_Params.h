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
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.UpdatePresets
	 */
	struct UWidget_ColorPicker_Module_C_UpdatePresets_Params
	{	};

	/**
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.UpdateColor
	 */
	struct UWidget_ColorPicker_Module_C_UpdateColor_Params
	{
	public:
		struct FLinearColor                                        CurrentColor;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.SetHideBrightnessSlider
	 */
	struct UWidget_ColorPicker_Module_C_SetHideBrightnessSlider_Params
	{
	public:
		bool                                                       mHideBrightnessSlider;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.SetAndUpdateColor
	 */
	struct UWidget_ColorPicker_Module_C_SetAndUpdateColor_Params
	{	};

	/**
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__mBrightnessSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature
	 */
	struct UWidget_ColorPicker_Module_C_BndEvt__mBrightnessSlider_K2Node_ComponentBoundEvent_1_OnValueChanged__DelegateSignature_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__mSaturationSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
	 */
	struct UWidget_ColorPicker_Module_C_BndEvt__mSaturationSlider_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.SetupColorAndSliders
	 */
	struct UWidget_ColorPicker_Module_C_SetupColorAndSliders_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__mHexText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UWidget_ColorPicker_Module_C_BndEvt__mHexText_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__mPresets_K2Node_ComponentBoundEvent_4_OnEntryCreated__DelegateSignature
	 */
	struct UWidget_ColorPicker_Module_C_BndEvt__mPresets_K2Node_ComponentBoundEvent_4_OnEntryCreated__DelegateSignature_Params
	{
	public:
		class UBPW_Combobox_Entry_C*                               CreatedEntry;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.OnPresetRemovedClicked
	 */
	struct UWidget_ColorPicker_Module_C_OnPresetRemovedClicked_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.OnRemovePopupClosed
	 */
	struct UWidget_ColorPicker_Module_C_OnRemovePopupClosed_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__Widget_ColorPicker_Slider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature
	 */
	struct UWidget_ColorPicker_Module_C_BndEvt__Widget_ColorPicker_Slider_K2Node_ComponentBoundEvent_0_OnValueChanged__DelegateSignature_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.Construct
	 */
	struct UWidget_ColorPicker_Module_C_Construct_Params
	{	};

	/**
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.PreConstruct
	 */
	struct UWidget_ColorPicker_Module_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__mPresets_K2Node_ComponentBoundEvent_5_OnSelectionChanged__DelegateSignature
	 */
	struct UWidget_ColorPicker_Module_C_BndEvt__mPresets_K2Node_ComponentBoundEvent_5_OnSelectionChanged__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedOption;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		int32_t                                                    selectedIndex;                                           // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__mSaavePreset_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_ColorPicker_Module_C_BndEvt__mSaavePreset_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.ResetInput
	 */
	struct UWidget_ColorPicker_Module_C_ResetInput_Params
	{	};

	/**
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.BndEvt__mPresets_K2Node_ComponentBoundEvent_8_OnPreOpening__DelegateSignature
	 */
	struct UWidget_ColorPicker_Module_C_BndEvt__mPresets_K2Node_ComponentBoundEvent_8_OnPreOpening__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.PresetSaved
	 */
	struct UWidget_ColorPicker_Module_C_PresetSaved_Params
	{
	public:
		class FText                                                mPresetName;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       mDidSave;                                                // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.ExecuteUbergraph_Widget_ColorPicker_Module
	 */
	struct UWidget_ColorPicker_Module_C_ExecuteUbergraph_Widget_ColorPicker_Module_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PBKQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.OnCloseSavePreset__DelegateSignature
	 */
	struct UWidget_ColorPicker_Module_C_OnCloseSavePreset__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.OnOpenSavePreset__DelegateSignature
	 */
	struct UWidget_ColorPicker_Module_C_OnOpenSavePreset__DelegateSignature_Params
	{
	public:
		class UBPW_ColorPickerPreset_Save_C*                       SaveWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.OnPresetOpen__DelegateSignature
	 */
	struct UWidget_ColorPicker_Module_C_OnPresetOpen__DelegateSignature_Params
	{
	public:
		struct FLinearColor                                        InputColor;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ColorPicker_Module.Widget_ColorPicker_Module_C.OnValueChanged__DelegateSignature
	 */
	struct UWidget_ColorPicker_Module_C_OnValueChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
