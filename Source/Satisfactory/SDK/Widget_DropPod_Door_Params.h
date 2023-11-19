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
	 * Function Widget_DropPod_Door.Widget_DropPod_Door_C.SetHasBeenOpened
	 */
	struct UWidget_DropPod_Door_C_SetHasBeenOpened_Params
	{
	public:
		bool                                                       HasBeenOpened;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DropPod_Door.Widget_DropPod_Door_C.SetLEDVisibility
	 */
	struct UWidget_DropPod_Door_C_SetLEDVisibility_Params
	{	};

	/**
	 * Function Widget_DropPod_Door.Widget_DropPod_Door_C.SetHandleAngle
	 */
	struct UWidget_DropPod_Door_C_SetHandleAngle_Params
	{
	public:
		double                                                     Angle;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DropPod_Door.Widget_DropPod_Door_C.Construct
	 */
	struct UWidget_DropPod_Door_C_Construct_Params
	{	};

	/**
	 * Function Widget_DropPod_Door.Widget_DropPod_Door_C.Tick
	 */
	struct UWidget_DropPod_Door_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DropPod_Door.Widget_DropPod_Door_C.BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UWidget_DropPod_Door_C_BndEvt__Slider_0_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DropPod_Door.Widget_DropPod_Door_C.BndEvt__HandleSlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
	 */
	struct UWidget_DropPod_Door_C_BndEvt__HandleSlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_DropPod_Door.Widget_DropPod_Door_C.BndEvt__HandleSlider_K2Node_ComponentBoundEvent_2_OnControllerCaptureEndEvent__DelegateSignature
	 */
	struct UWidget_DropPod_Door_C_BndEvt__HandleSlider_K2Node_ComponentBoundEvent_2_OnControllerCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_DropPod_Door.Widget_DropPod_Door_C.OnDoorOpen_Event
	 */
	struct UWidget_DropPod_Door_C_OnDoorOpen_Event_Params
	{	};

	/**
	 * Function Widget_DropPod_Door.Widget_DropPod_Door_C.Destruct
	 */
	struct UWidget_DropPod_Door_C_Destruct_Params
	{	};

	/**
	 * Function Widget_DropPod_Door.Widget_DropPod_Door_C.ExecuteUbergraph_Widget_DropPod_Door
	 */
	struct UWidget_DropPod_Door_C_ExecuteUbergraph_Widget_DropPod_Door_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZJG6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_DropPod_Door.Widget_DropPod_Door_C.OnDoorOpen__DelegateSignature
	 */
	struct UWidget_DropPod_Door_C_OnDoorOpen__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
