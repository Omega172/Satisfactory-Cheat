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
	 * Function BPW_OnOffSwitch.BPW_OnOffSwitch_C.SetIsOn
	 */
	struct UBPW_OnOffSwitch_C_SetIsOn_Params
	{
	public:
		bool                                                       mIsOn;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnOffSwitch.BPW_OnOffSwitch_C.OnHoverChanged
	 */
	struct UBPW_OnOffSwitch_C_OnHoverChanged_Params
	{
	public:
		bool                                                       IsHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnOffSwitch.BPW_OnOffSwitch_C.SetOnOffTexts
	 */
	struct UBPW_OnOffSwitch_C_SetOnOffTexts_Params
	{
	public:
		class FText                                                mOnText;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FText                                                mOffText;                                                // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_OnOffSwitch.BPW_OnOffSwitch_C.OnMouseEnter
	 */
	struct UBPW_OnOffSwitch_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_OnOffSwitch.BPW_OnOffSwitch_C.OnMouseLeave
	 */
	struct UBPW_OnOffSwitch_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BPW_OnOffSwitch.BPW_OnOffSwitch_C.PreConstruct
	 */
	struct UBPW_OnOffSwitch_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnOffSwitch.BPW_OnOffSwitch_C.BndEvt__BPW_OnOffSwitch_mSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UBPW_OnOffSwitch_C_BndEvt__BPW_OnOffSwitch_mSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_OnOffSwitch.BPW_OnOffSwitch_C.ExecuteUbergraph_BPW_OnOffSwitch
	 */
	struct UBPW_OnOffSwitch_C_ExecuteUbergraph_BPW_OnOffSwitch_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4NAM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_OnOffSwitch.BPW_OnOffSwitch_C.onSwitchChanged__DelegateSignature
	 */
	struct UBPW_OnOffSwitch_C_onSwitchChanged__DelegateSignature_Params
	{
	public:
		bool                                                       isOn;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
