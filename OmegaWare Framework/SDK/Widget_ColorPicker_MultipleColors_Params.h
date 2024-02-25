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
	 * Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.SetUseGlossiness
	 */
	struct UWidget_ColorPicker_MultipleColors_C_SetUseGlossiness_Params
	{
	public:
		bool                                                       UseGlossiness;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.SetGlossiness
	 */
	struct UWidget_ColorPicker_MultipleColors_C_SetGlossiness_Params
	{
	public:
		int32_t                                                    Glossiness;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.OnGlossinessChanged
	 */
	struct UWidget_ColorPicker_MultipleColors_C_OnGlossinessChanged_Params
	{
	public:
		int32_t                                                    mGlossinessIndex;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_34WT[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.ClosePresetSaver
	 */
	struct UWidget_ColorPicker_MultipleColors_C_ClosePresetSaver_Params
	{	};

	/**
	 * Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.OpenPresetSaver
	 */
	struct UWidget_ColorPicker_MultipleColors_C_OpenPresetSaver_Params
	{
	public:
		class UBPW_ColorPickerPreset_Save_C*                       SaveWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.GetCurrentColorsFromModules
	 */
	struct UWidget_ColorPicker_MultipleColors_C_GetCurrentColorsFromModules_Params
	{
	public:
		TArray<struct FLinearColor>                                ModuleColors;                                            // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.SetColors
	 */
	struct UWidget_ColorPicker_MultipleColors_C_SetColors_Params
	{
	public:
		TArray<struct FLinearColor>                                Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.PreConstruct
	 */
	struct UWidget_ColorPicker_MultipleColors_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.BndEvt__mEditPresetAccept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWidget_ColorPicker_MultipleColors_C_BndEvt__mEditPresetAccept_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.BndEvt__mEditPresetCanel_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UWidget_ColorPicker_MultipleColors_C_BndEvt__mEditPresetCanel_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.ForceClose
	 */
	struct UWidget_ColorPicker_MultipleColors_C_ForceClose_Params
	{	};

	/**
	 * Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.BndEvt__Widget_ColorPicker_MultipleColors_BPW_StandardButton_Switch_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UWidget_ColorPicker_MultipleColors_C_BndEvt__Widget_ColorPicker_MultipleColors_BPW_StandardButton_Switch_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.BndEvt__Widget_ColorPicker_MultipleColors_BPW_StandardButton_Switch_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UWidget_ColorPicker_MultipleColors_C_BndEvt__Widget_ColorPicker_MultipleColors_BPW_StandardButton_Switch_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.BndEvt__Widget_ColorPicker_MultipleColors_BPW_StandardButton_Switch_2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UWidget_ColorPicker_MultipleColors_C_BndEvt__Widget_ColorPicker_MultipleColors_BPW_StandardButton_Switch_2_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.ExecuteUbergraph_Widget_ColorPicker_MultipleColors
	 */
	struct UWidget_ColorPicker_MultipleColors_C_ExecuteUbergraph_Widget_ColorPicker_MultipleColors_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.OnCancel__DelegateSignature
	 */
	struct UWidget_ColorPicker_MultipleColors_C_OnCancel__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ColorPicker_MultipleColors.Widget_ColorPicker_MultipleColors_C.OnClose__DelegateSignature
	 */
	struct UWidget_ColorPicker_MultipleColors_C_OnClose__DelegateSignature_Params
	{
	public:
		TArray<struct FLinearColor>                                Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
