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
	 * Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.UpdatePositionMarkerAndText
	 */
	struct UBPW_PhotoModeSequencerTimeLine_C_UpdatePositionMarkerAndText_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.SetCurrentSelectedFrame
	 */
	struct UBPW_PhotoModeSequencerTimeLine_C_SetCurrentSelectedFrame_Params
	{
	public:
		struct FFrameTime                                          FrameTime;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.GetMarkerText
	 */
	struct UBPW_PhotoModeSequencerTimeLine_C_GetMarkerText_Params
	{
	public:
		int32_t                                                    FrameCount;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_N9TI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.UpdateMarkers
	 */
	struct UBPW_PhotoModeSequencerTimeLine_C_UpdateMarkers_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.UpdateSlider
	 */
	struct UBPW_PhotoModeSequencerTimeLine_C_UpdateSlider_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.UpdateTimeline
	 */
	struct UBPW_PhotoModeSequencerTimeLine_C_UpdateTimeline_Params
	{
	public:
		int32_t                                                    NumFrames;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShowTimeInFrames;                                        // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.PreConstruct
	 */
	struct UBPW_PhotoModeSequencerTimeLine_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.BndEvt__Slider_68_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UBPW_PhotoModeSequencerTimeLine_C_BndEvt__Slider_68_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.BndEvt__mSlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature
	 */
	struct UBPW_PhotoModeSequencerTimeLine_C_BndEvt__mSlider_K2Node_ComponentBoundEvent_1_OnMouseCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.ExecuteUbergraph_BPW_PhotoModeSequencerTimeLine
	 */
	struct UBPW_PhotoModeSequencerTimeLine_C_ExecuteUbergraph_BPW_PhotoModeSequencerTimeLine_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PhotoModeSequencerTimeLine.BPW_PhotoModeSequencerTimeLine_C.CurrentFrameUpdated__DelegateSignature
	 */
	struct UBPW_PhotoModeSequencerTimeLine_C_CurrentFrameUpdated__DelegateSignature_Params
	{
	public:
		int32_t                                                    newCurrentFrame;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
