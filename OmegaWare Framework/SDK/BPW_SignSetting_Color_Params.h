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
	 * Function BPW_SignSetting_Color.BPW_SignSetting_Color_C.SetupColorPreviews
	 */
	struct UBPW_SignSetting_Color_C_SetupColorPreviews_Params
	{	};

	/**
	 * Function BPW_SignSetting_Color.BPW_SignSetting_Color_C.SetColors
	 */
	struct UBPW_SignSetting_Color_C_SetColors_Params
	{
	public:
		struct FLinearColor                                        mForegroundColor;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        mBackgroundColor;                                        // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        AuxilliaryColor;                                         // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignSetting_Color.BPW_SignSetting_Color_C.PreConstruct
	 */
	struct UBPW_SignSetting_Color_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignSetting_Color.BPW_SignSetting_Color_C.BndEvt__BPW_SignSettingContainer_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature
	 */
	struct UBPW_SignSetting_Color_C_BndEvt__BPW_SignSettingContainer_K2Node_ComponentBoundEvent_0_OnButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_SignSetting_Color.BPW_SignSetting_Color_C.ExecuteUbergraph_BPW_SignSetting_Color
	 */
	struct UBPW_SignSetting_Color_C_ExecuteUbergraph_BPW_SignSetting_Color_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_SignSetting_Color.BPW_SignSetting_Color_C.OnOpenColorPicker__DelegateSignature
	 */
	struct UBPW_SignSetting_Color_C_OnOpenColorPicker__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
