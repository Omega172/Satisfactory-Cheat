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
	 * Function Widget_Fusebox.Widget_Fusebox_C.Get_HandleShadow_Value_1
	 */
	struct UWidget_Fusebox_C_Get_HandleShadow_Value_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Fusebox.Widget_Fusebox_C.GetHandleSliderClickabe
	 */
	struct UWidget_Fusebox_C_GetHandleSliderClickabe_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Fusebox.Widget_Fusebox_C.Tick
	 */
	struct UWidget_Fusebox_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Fusebox.Widget_Fusebox_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UWidget_Fusebox_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Fusebox.Widget_Fusebox_C.Construct
	 */
	struct UWidget_Fusebox_C_Construct_Params
	{	};

	/**
	 * Function Widget_Fusebox.Widget_Fusebox_C.ResetFusebox
	 */
	struct UWidget_Fusebox_C_ResetFusebox_Params
	{	};

	/**
	 * Function Widget_Fusebox.Widget_Fusebox_C.BndEvt__HandleSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature
	 */
	struct UWidget_Fusebox_C_BndEvt__HandleSlider_K2Node_ComponentBoundEvent_2_OnMouseCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Fusebox.Widget_Fusebox_C.BndEvt__HandleSlider_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEvent__DelegateSignature
	 */
	struct UWidget_Fusebox_C_BndEvt__HandleSlider_K2Node_ComponentBoundEvent_3_OnControllerCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Fusebox.Widget_Fusebox_C.RestFuseWithAnimation
	 */
	struct UWidget_Fusebox_C_RestFuseWithAnimation_Params
	{	};

	/**
	 * Function Widget_Fusebox.Widget_Fusebox_C.ExecuteUbergraph_Widget_Fusebox
	 */
	struct UWidget_Fusebox_C_ExecuteUbergraph_Widget_Fusebox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VLSE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Fusebox.Widget_Fusebox_C.ResetFuse__DelegateSignature
	 */
	struct UWidget_Fusebox_C_ResetFuse__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
