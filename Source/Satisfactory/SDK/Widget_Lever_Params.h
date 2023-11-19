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
	 * Function Widget_Lever.Widget_Lever_C.LeverShake
	 */
	struct UWidget_Lever_C_LeverShake_Params
	{
	public:
		int32_t                                                    MaxOrMinSelectionIndex;                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Lever.Widget_Lever_C.OnShake
	 */
	struct UWidget_Lever_C_OnShake_Params
	{	};

	/**
	 * Function Widget_Lever.Widget_Lever_C.SetShowButton
	 */
	struct UWidget_Lever_C_SetShowButton_Params
	{
	public:
		bool                                                       ShowButton;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Lever.Widget_Lever_C.StartLerp
	 */
	struct UWidget_Lever_C_StartLerp_Params
	{	};

	/**
	 * Function Widget_Lever.Widget_Lever_C.GetCurrentSelectionPosOnSlider
	 */
	struct UWidget_Lever_C_GetCurrentSelectionPosOnSlider_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Lever.Widget_Lever_C.GetCalculatedCurve
	 */
	struct UWidget_Lever_C_GetCalculatedCurve_Params
	{
	public:
		class UCurveFloat*                                         CurveFloat;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     InTime;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Lever.Widget_Lever_C.GetSliderMinClamp
	 */
	struct UWidget_Lever_C_GetSliderMinClamp_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Lever.Widget_Lever_C.GetSliderMaxClamp
	 */
	struct UWidget_Lever_C_GetSliderMaxClamp_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Lever.Widget_Lever_C.SetHandle
	 */
	struct UWidget_Lever_C_SetHandle_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Lever.Widget_Lever_C.PreConstruct
	 */
	struct UWidget_Lever_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Lever.Widget_Lever_C.Construct
	 */
	struct UWidget_Lever_C_Construct_Params
	{	};

	/**
	 * Function Widget_Lever.Widget_Lever_C.BndEvt__LeverHandle_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UWidget_Lever_C_BndEvt__LeverHandle_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Lever.Widget_Lever_C.BndEvt__LeverHandle_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature
	 */
	struct UWidget_Lever_C_BndEvt__LeverHandle_K2Node_ComponentBoundEvent_3_OnMouseCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Lever.Widget_Lever_C.BndEvt__LeverHandle_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature
	 */
	struct UWidget_Lever_C_BndEvt__LeverHandle_K2Node_ComponentBoundEvent_4_OnControllerCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Lever.Widget_Lever_C.LerpLever
	 */
	struct UWidget_Lever_C_LerpLever_Params
	{	};

	/**
	 * Function Widget_Lever.Widget_Lever_C.BndEvt__LeverHandle_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature
	 */
	struct UWidget_Lever_C_BndEvt__LeverHandle_K2Node_ComponentBoundEvent_5_OnMouseCaptureBeginEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Lever.Widget_Lever_C.BndEvt__LeverHandle_K2Node_ComponentBoundEvent_6_OnControllerCaptureBeginEvent__DelegateSignature
	 */
	struct UWidget_Lever_C_BndEvt__LeverHandle_K2Node_ComponentBoundEvent_6_OnControllerCaptureBeginEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Lever.Widget_Lever_C.ExecuteUbergraph_Widget_Lever
	 */
	struct UWidget_Lever_C_ExecuteUbergraph_Widget_Lever_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Lever.Widget_Lever_C.OnNewSelection__DelegateSignature
	 */
	struct UWidget_Lever_C_OnNewSelection__DelegateSignature_Params
	{
	public:
		int32_t                                                    SelectionIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
