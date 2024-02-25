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
	 * Function BPW_ColorPickerPopup.BPW_ColorPickerPopup_C.GetShouldOkayBeEnabled
	 */
	struct UBPW_ColorPickerPopup_C_GetShouldOkayBeEnabled_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ColorPickerPopup.BPW_ColorPickerPopup_C.GetColor
	 */
	struct UBPW_ColorPickerPopup_C_GetColor_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ColorPickerPopup.BPW_ColorPickerPopup_C.Construct
	 */
	struct UBPW_ColorPickerPopup_C_Construct_Params
	{	};

	/**
	 * Function BPW_ColorPickerPopup.BPW_ColorPickerPopup_C.BndEvt__Widget_ColorPicker_Module_K2Node_ComponentBoundEvent_0_OnOpenSavePreset__DelegateSignature
	 */
	struct UBPW_ColorPickerPopup_C_BndEvt__Widget_ColorPicker_Module_K2Node_ComponentBoundEvent_0_OnOpenSavePreset__DelegateSignature_Params
	{
	public:
		class UBPW_ColorPickerPreset_Save_C*                       SaveWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ColorPickerPopup.BPW_ColorPickerPopup_C.BndEvt__Widget_ColorPicker_Module_K2Node_ComponentBoundEvent_1_OnCloseSavePreset__DelegateSignature
	 */
	struct UBPW_ColorPickerPopup_C_BndEvt__Widget_ColorPicker_Module_K2Node_ComponentBoundEvent_1_OnCloseSavePreset__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ColorPickerPopup.BPW_ColorPickerPopup_C.ExecuteUbergraph_BPW_ColorPickerPopup
	 */
	struct UBPW_ColorPickerPopup_C_ExecuteUbergraph_BPW_ColorPickerPopup_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7K6X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
