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
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.GetLoopTooltip
	 */
	struct UBPW_BoomBox_Player_C_GetLoopTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetIsLooping
	 */
	struct UBPW_BoomBox_Player_C_SetIsLooping_Params
	{
	public:
		bool                                                       mIsLooping;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       mTriggerDelegate;                                        // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetLoopButtonStyle
	 */
	struct UBPW_BoomBox_Player_C_SetLoopButtonStyle_Params
	{
	public:
		bool                                                       IsHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.IconLoaded
	 */
	struct UBPW_BoomBox_Player_C_IconLoaded_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetPickupButtonState
	 */
	struct UBPW_BoomBox_Player_C_SetPickupButtonState_Params
	{
	public:
		EBoomBoxPickupButtonState                                  mPickupButtonState;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetVolume
	 */
	struct UBPW_BoomBox_Player_C_SetVolume_Params
	{
	public:
		double                                                     Volume;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.FormatTime
	 */
	struct UBPW_BoomBox_Player_C_FormatTime_Params
	{
	public:
		double                                                     Time;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FText                                                Result;                                                  // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetPlaybackPosition
	 */
	struct UBPW_BoomBox_Player_C_SetPlaybackPosition_Params
	{
	public:
		double                                                     CurrentPosition;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     maxDuration;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetCurrentSong
	 */
	struct UBPW_BoomBox_Player_C_SetCurrentSong_Params
	{
	public:
		struct FSongData                                           currentSong;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetPlayButtonStatus
	 */
	struct UBPW_BoomBox_Player_C_SetPlayButtonStatus_Params
	{
	public:
		bool                                                       IsPlaying;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.SetCurrentTape
	 */
	struct UBPW_BoomBox_Player_C_SetCurrentTape_Params
	{
	public:
		class UClass*                                              mCurrentTape;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.PreConstruct
	 */
	struct UBPW_BoomBox_Player_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__mChangeTape_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UBPW_BoomBox_Player_C_BndEvt__mChangeTape_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__mPlay_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UBPW_BoomBox_Player_C_BndEvt__mPlay_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__mNext_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UBPW_BoomBox_Player_C_BndEvt__mNext_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__mBack_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature
	 */
	struct UBPW_BoomBox_Player_C_BndEvt__mBack_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__mClose_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBPW_BoomBox_Player_C_BndEvt__mClose_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_Slider_219_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UBPW_BoomBox_Player_C_BndEvt__BPW_BoomBox_Player_Slider_219_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mGrab_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
	 */
	struct UBPW_BoomBox_Player_C_BndEvt__BPW_BoomBox_Player_mGrab_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature
	 */
	struct UBPW_BoomBox_Player_C_BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_8_OnControllerCaptureEndEvent__DelegateSignature
	 */
	struct UBPW_BoomBox_Player_C_BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_8_OnControllerCaptureEndEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_9_OnMouseCaptureBeginEvent__DelegateSignature
	 */
	struct UBPW_BoomBox_Player_C_BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_9_OnMouseCaptureBeginEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_10_OnControllerCaptureBeginEvent__DelegateSignature
	 */
	struct UBPW_BoomBox_Player_C_BndEvt__BPW_BoomBox_Player_mVolumeSlider_K2Node_ComponentBoundEvent_10_OnControllerCaptureBeginEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mLoopButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_BoomBox_Player_C_BndEvt__BPW_BoomBox_Player_mLoopButton_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mLoopButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_BoomBox_Player_C_BndEvt__BPW_BoomBox_Player_mLoopButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.BndEvt__BPW_BoomBox_Player_mLoopButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_BoomBox_Player_C_BndEvt__BPW_BoomBox_Player_mLoopButton_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.ExecuteUbergraph_BPW_BoomBox_Player
	 */
	struct UBPW_BoomBox_Player_C_ExecuteUbergraph_BPW_BoomBox_Player_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_61VP[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnLoopingChanged__DelegateSignature
	 */
	struct UBPW_BoomBox_Player_C_OnLoopingChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsLooping;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnPickupClicked__DelegateSignature
	 */
	struct UBPW_BoomBox_Player_C_OnPickupClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnVolumeChanged__DelegateSignature
	 */
	struct UBPW_BoomBox_Player_C_OnVolumeChanged__DelegateSignature_Params
	{
	public:
		double                                                     Volume;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnCloseClicked__DelegateSignature
	 */
	struct UBPW_BoomBox_Player_C_OnCloseClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnPreviousClicked__DelegateSignature
	 */
	struct UBPW_BoomBox_Player_C_OnPreviousClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnNextClicked__DelegateSignature
	 */
	struct UBPW_BoomBox_Player_C_OnNextClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnPlayClicked__DelegateSignature
	 */
	struct UBPW_BoomBox_Player_C_OnPlayClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox_Player.BPW_BoomBox_Player_C.OnChangeTapeClicked__DelegateSignature
	 */
	struct UBPW_BoomBox_Player_C_OnChangeTapeClicked__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
