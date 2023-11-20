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
	 * Function BPW_OptionsColor.BPW_OptionsColor_C.SetColor
	 */
	struct UBPW_OptionsColor_C_SetColor_Params
	{
	public:
		struct FLinearColor                                        mColor;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OptionsColor.BPW_OptionsColor_C.BndEvt__mEditButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_OptionsColor_C_BndEvt__mEditButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_OptionsColor.BPW_OptionsColor_C.OnColorPickerClosed
	 */
	struct UBPW_OptionsColor_C_OnColorPickerClosed_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OptionsColor.BPW_OptionsColor_C.OnColorChanged
	 */
	struct UBPW_OptionsColor_C_OnColorChanged_Params
	{
	public:
		struct FLinearColor                                        NewColor;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OptionsColor.BPW_OptionsColor_C.BndEvt__mResetButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_OptionsColor_C_BndEvt__mResetButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_OptionsColor.BPW_OptionsColor_C.OnColorReset
	 */
	struct UBPW_OptionsColor_C_OnColorReset_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OptionsColor.BPW_OptionsColor_C.ExecuteUbergraph_BPW_OptionsColor
	 */
	struct UBPW_OptionsColor_C_ExecuteUbergraph_BPW_OptionsColor_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
