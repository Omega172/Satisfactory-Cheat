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
	 * Function BPW_BoomBox.BPW_BoomBox_C.SetPlayButtonStatus
	 */
	struct UBPW_BoomBox_C_SetPlayButtonStatus_Params
	{
	public:
		bool                                                       mIsPlaying;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox.BPW_BoomBox_C.TogglePlay
	 */
	struct UBPW_BoomBox_C_TogglePlay_Params
	{	};

	/**
	 * Function BPW_BoomBox.BPW_BoomBox_C.SetCurrentTape
	 */
	struct UBPW_BoomBox_C_SetCurrentTape_Params
	{
	public:
		class UClass*                                              mCurrentTape;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox.BPW_BoomBox_C.Construct
	 */
	struct UBPW_BoomBox_C_Construct_Params
	{	};

	/**
	 * Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_TapeSelect_K2Node_ComponentBoundEvent_0_OnTapeSelected__DelegateSignature
	 */
	struct UBPW_BoomBox_C_BndEvt__BPW_BoomBox_TapeSelect_K2Node_ComponentBoundEvent_0_OnTapeSelected__DelegateSignature_Params
	{
	public:
		class UClass*                                              tapeData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_1_OnChangeTapeClicked__DelegateSignature
	 */
	struct UBPW_BoomBox_C_BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_1_OnChangeTapeClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_2_OnPlayClicked__DelegateSignature
	 */
	struct UBPW_BoomBox_C_BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_2_OnPlayClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_3_OnNextClicked__DelegateSignature
	 */
	struct UBPW_BoomBox_C_BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_3_OnNextClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_4_OnPreviousClicked__DelegateSignature
	 */
	struct UBPW_BoomBox_C_BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_4_OnPreviousClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_5_OnCloseClicked__DelegateSignature
	 */
	struct UBPW_BoomBox_C_BndEvt__BPW_BoomBox_Player_K2Node_ComponentBoundEvent_5_OnCloseClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox.BPW_BoomBox_C.CurrentSongChanged
	 */
	struct UBPW_BoomBox_C_CurrentSongChanged_Params
	{
	public:
		struct FSongData                                           currentSong;                                             // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
		int32_t                                                    Index;                                                   // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox.BPW_BoomBox_C.CurrentTapeChanged
	 */
	struct UBPW_BoomBox_C_CurrentTapeChanged_Params
	{
	public:
		class UClass*                                              currentTape;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox.BPW_BoomBox_C.PlaybackPositionUpdate
	 */
	struct UBPW_BoomBox_C_PlaybackPositionUpdate_Params
	{
	public:
		float                                                      CurrentPosition;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TotalDuration;                                           // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox.BPW_BoomBox_C.PlaybackStateChanged
	 */
	struct UBPW_BoomBox_C_PlaybackStateChanged_Params
	{
	public:
		int32_t                                                    NewState;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_BPW_BoomBox_TapeSelect_K2Node_ComponentBoundEvent_6_OnBackToPlayerClicked__DelegateSignature
	 */
	struct UBPW_BoomBox_C_BndEvt__BPW_BoomBox_BPW_BoomBox_TapeSelect_K2Node_ComponentBoundEvent_6_OnBackToPlayerClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox.BPW_BoomBox_C.AudioVolumeChanged
	 */
	struct UBPW_BoomBox_C_AudioVolumeChanged_Params
	{
	public:
		float                                                      Volume;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_BPW_BoomBox_Player_K2Node_ComponentBoundEvent_7_OnVolumeChanged__DelegateSignature
	 */
	struct UBPW_BoomBox_C_BndEvt__BPW_BoomBox_BPW_BoomBox_Player_K2Node_ComponentBoundEvent_7_OnVolumeChanged__DelegateSignature_Params
	{
	public:
		double                                                     Volume;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_BPW_BoomBox_Player_K2Node_ComponentBoundEvent_8_OnPickupClicked__DelegateSignature
	 */
	struct UBPW_BoomBox_C_BndEvt__BPW_BoomBox_BPW_BoomBox_Player_K2Node_ComponentBoundEvent_8_OnPickupClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox.BPW_BoomBox_C.RepeatModeChanged
	 */
	struct UBPW_BoomBox_C_RepeatModeChanged_Params
	{
	public:
		EBoomBoxRepeatMode                                         NewMode;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox.BPW_BoomBox_C.BndEvt__BPW_BoomBox_BPW_BoomBox_Player_K2Node_ComponentBoundEvent_9_OnLoopingChanged__DelegateSignature
	 */
	struct UBPW_BoomBox_C_BndEvt__BPW_BoomBox_BPW_BoomBox_Player_K2Node_ComponentBoundEvent_9_OnLoopingChanged__DelegateSignature_Params
	{
	public:
		bool                                                       IsLooping;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox.BPW_BoomBox_C.BoomBoxModeChanged
	 */
	struct UBPW_BoomBox_C_BoomBoxModeChanged_Params
	{
	public:
		EBoomBoxMode                                               NewMode;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox.BPW_BoomBox_C.ExecuteUbergraph_BPW_BoomBox
	 */
	struct UBPW_BoomBox_C_ExecuteUbergraph_BPW_BoomBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
