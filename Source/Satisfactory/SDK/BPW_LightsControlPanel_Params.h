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
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.PlayPasteSFX
	 */
	struct UBPW_LightsControlPanel_C_PlayPasteSFX_Params
	{	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.PlayCopySFX
	 */
	struct UBPW_LightsControlPanel_C_PlayCopySFX_Params
	{	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.PlaySliderSFX
	 */
	struct UBPW_LightsControlPanel_C_PlaySliderSFX_Params
	{
	public:
		double                                                     mSliderValue;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.IsLightEnabled
	 */
	struct UBPW_LightsControlPanel_C_IsLightEnabled_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5RNZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.Set Light Enabled
	 */
	struct UBPW_LightsControlPanel_C_SetLightEnabled_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_INHA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.SetColorArray
	 */
	struct UBPW_LightsControlPanel_C_SetColorArray_Params
	{	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.CreateColorPicker
	 */
	struct UBPW_LightsControlPanel_C_CreateColorPicker_Params
	{
	public:
		struct FLinearColor                                        StartupColor;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.UpdateNightModeSelector
	 */
	struct UBPW_LightsControlPanel_C_UpdateNightModeSelector_Params
	{	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.SetTimeOfDayAware
	 */
	struct UBPW_LightsControlPanel_C_SetTimeOfDayAware_Params
	{
	public:
		bool                                                       IsTimeOfDayAware;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4NY4[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.SetControlData
	 */
	struct UBPW_LightsControlPanel_C_SetControlData_Params
	{
	public:
		struct FLightSourceControlData                             mControlData;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		unsigned char                                              UnknownData_ZB6W[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.GetControlData
	 */
	struct UBPW_LightsControlPanel_C_GetControlData_Params
	{	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.InitStandbyButton
	 */
	struct UBPW_LightsControlPanel_C_InitStandbyButton_Params
	{	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.SetLightIntensity
	 */
	struct UBPW_LightsControlPanel_C_SetLightIntensity_Params
	{
	public:
		double                                                     Intensity;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.SetLightColor
	 */
	struct UBPW_LightsControlPanel_C_SetLightColor_Params
	{
	public:
		int32_t                                                    ColorSlotIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.UpdatePreviewMaterial
	 */
	struct UBPW_LightsControlPanel_C_UpdatePreviewMaterial_Params
	{	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.UpdatePreviewNightMode
	 */
	struct UBPW_LightsControlPanel_C_UpdatePreviewNightMode_Params
	{
	public:
		bool                                                       NightModeOn;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.UpdatePreviewIntensity
	 */
	struct UBPW_LightsControlPanel_C_UpdatePreviewIntensity_Params
	{
	public:
		double                                                     Intensity;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.UpdatePreviewColor
	 */
	struct UBPW_LightsControlPanel_C_UpdatePreviewColor_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.UpdateIntensitySelector
	 */
	struct UBPW_LightsControlPanel_C_UpdateIntensitySelector_Params
	{	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.UpdateColorSelector
	 */
	struct UBPW_LightsControlPanel_C_UpdateColorSelector_Params
	{
	public:
		bool                                                       mPlayButtonSound;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_V45T[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.DisplayControlledBuildables
	 */
	struct UBPW_LightsControlPanel_C_DisplayControlledBuildables_Params
	{	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.Event OnControlledBuildablesChanged
	 */
	struct UBPW_LightsControlPanel_C_EventOnControlledBuildablesChanged_Params
	{	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.BndEvt__mColorSelector_K2Node_ComponentBoundEvent_1_OnTogglableButtonClicked__DelegateSignature
	 */
	struct UBPW_LightsControlPanel_C_BndEvt__mColorSelector_K2Node_ComponentBoundEvent_1_OnTogglableButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.Init
	 */
	struct UBPW_LightsControlPanel_C_Init_Params
	{	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.BndEvt__mNightOnlyMode_K2Node_ComponentBoundEvent_4_OnIsSelectedChanged__DelegateSignature
	 */
	struct UBPW_LightsControlPanel_C_BndEvt__mNightOnlyMode_K2Node_ComponentBoundEvent_4_OnIsSelectedChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsSelected;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UBPW_LightsControlPanel_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_3_OnStandbyClicked__DelegateSignature
	 */
	struct UBPW_LightsControlPanel_C_BndEvt__mStandbyButton_K2Node_ComponentBoundEvent_3_OnStandbyClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.BndEvt__mColorPreviewManager_K2Node_ComponentBoundEvent_5_OnColorClicked__DelegateSignature
	 */
	struct UBPW_LightsControlPanel_C_BndEvt__mColorPreviewManager_K2Node_ComponentBoundEvent_5_OnColorClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.OnColorPickerClosed
	 */
	struct UBPW_LightsControlPanel_C_OnColorPickerClosed_Params
	{
	public:
		TArray<struct FLinearColor>                                Color;                                                   // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.OnColorArrayUpdated
	 */
	struct UBPW_LightsControlPanel_C_OnColorArrayUpdated_Params
	{	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.BndEvt__Slider_170_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UBPW_LightsControlPanel_C_BndEvt__Slider_170_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.BndEvt__FGEditableText_120_K2Node_ComponentBoundEvent_8_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UBPW_LightsControlPanel_C_BndEvt__FGEditableText_120_K2Node_ComponentBoundEvent_8_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.OnColorPickerCancel
	 */
	struct UBPW_LightsControlPanel_C_OnColorPickerCancel_Params
	{	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.OnLightStateChanged
	 */
	struct UBPW_LightsControlPanel_C_OnLightStateChanged_Params
	{
	public:
		bool                                                       IsEnabled;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.Construct
	 */
	struct UBPW_LightsControlPanel_C_Construct_Params
	{	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.OnFactoryClipboardPasted
	 */
	struct UBPW_LightsControlPanel_C_OnFactoryClipboardPasted_Params
	{
	public:
		class UObject*                                             interactObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UFGFactoryClipboardSettings*                         factoryClipboardSettings;                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.OnFactoryClipboardCopied
	 */
	struct UBPW_LightsControlPanel_C_OnFactoryClipboardCopied_Params
	{
	public:
		class UObject*                                             interactObject;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UFGFactoryClipboardSettings*                         factoryClipboardSettings;                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_LightsControlPanel.BPW_LightsControlPanel_C.ExecuteUbergraph_BPW_LightsControlPanel
	 */
	struct UBPW_LightsControlPanel_C_ExecuteUbergraph_BPW_LightsControlPanel_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
