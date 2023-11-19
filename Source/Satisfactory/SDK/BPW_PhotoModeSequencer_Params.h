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
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.DeleteSelectedNodesInternal
	 */
	struct UBPW_PhotoModeSequencer_C_DeleteSelectedNodesInternal_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.UpdateCurrentFrame
	 */
	struct UBPW_PhotoModeSequencer_C_UpdateCurrentFrame_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.MoveToFrame
	 */
	struct UBPW_PhotoModeSequencer_C_MoveToFrame_Params
	{
	public:
		struct FFrameTime                                          FrameTime;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.SequencerTicked
	 */
	struct UBPW_PhotoModeSequencer_C_SequencerTicked_Params
	{
	public:
		float                                                      sequenceTimer;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_089K[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.MoveCurrentFrame
	 */
	struct UBPW_PhotoModeSequencer_C_MoveCurrentFrame_Params
	{
	public:
		int32_t                                                    FramesToMove;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.UpdateInternalValues
	 */
	struct UBPW_PhotoModeSequencer_C_UpdateInternalValues_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.AddCurrentPosRotFOVSection
	 */
	struct UBPW_PhotoModeSequencer_C_AddCurrentPosRotFOVSection_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.AddCurrentRotationSection
	 */
	struct UBPW_PhotoModeSequencer_C_AddCurrentRotationSection_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.AddCurrentLocationSection
	 */
	struct UBPW_PhotoModeSequencer_C_AddCurrentLocationSection_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.AddCurrentFOVSection
	 */
	struct UBPW_PhotoModeSequencer_C_AddCurrentFOVSection_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.EvaluateSingleFrame
	 */
	struct UBPW_PhotoModeSequencer_C_EvaluateSingleFrame_Params
	{
	public:
		struct FFrameTime                                          Frame;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.UpdateTimeline
	 */
	struct UBPW_PhotoModeSequencer_C_UpdateTimeline_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.GetTimelineLength
	 */
	struct UBPW_PhotoModeSequencer_C_GetTimelineLength_Params
	{
	public:
		int32_t                                                    Length;                                                  // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1T6C[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.UpdateTracks
	 */
	struct UBPW_PhotoModeSequencer_C_UpdateTracks_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__BPW_PhotoModeSequencerTimeLine_K2Node_ComponentBoundEvent_1_CurrentFrameUpdated__DelegateSignature
	 */
	struct UBPW_PhotoModeSequencer_C_BndEvt__BPW_PhotoModeSequencerTimeLine_K2Node_ComponentBoundEvent_1_CurrentFrameUpdated__DelegateSignature_Params
	{
	public:
		int32_t                                                    newCurrentFrame;                                         // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__BPW_NumericEntry_CurrentFrame_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature
	 */
	struct UBPW_PhotoModeSequencer_C_BndEvt__BPW_NumericEntry_CurrentFrame_K2Node_ComponentBoundEvent_2_OnValueChanged__DelegateSignature_Params
	{
	public:
		double                                                     NewValue;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__BPW_NumericEntry_SequenceEnd_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature
	 */
	struct UBPW_PhotoModeSequencer_C_BndEvt__BPW_NumericEntry_SequenceEnd_K2Node_ComponentBoundEvent_3_OnValueChanged__DelegateSignature_Params
	{
	public:
		double                                                     NewValue;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__BPW_NumericEntry_SequenceStart_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature
	 */
	struct UBPW_PhotoModeSequencer_C_BndEvt__BPW_NumericEntry_SequenceStart_K2Node_ComponentBoundEvent_4_OnValueChanged__DelegateSignature_Params
	{
	public:
		double                                                     NewValue;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__Button_SwitchTimeDisplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_PhotoModeSequencer_C_BndEvt__Button_SwitchTimeDisplay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.Construct
	 */
	struct UBPW_PhotoModeSequencer_C_Construct_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__Button_AddCurrentLocation_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_PhotoModeSequencer_C_BndEvt__Button_AddCurrentLocation_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__Button_AddCurrentRotation_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_PhotoModeSequencer_C_BndEvt__Button_AddCurrentRotation_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__Button_AddCurrentFOV_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_PhotoModeSequencer_C_BndEvt__Button_AddCurrentFOV_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__Button_PlaySequence_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_PhotoModeSequencer_C_BndEvt__Button_PlaySequence_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.BndEvt__Button_ClearSequence_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_PhotoModeSequencer_C_BndEvt__Button_ClearSequence_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.Destruct
	 */
	struct UBPW_PhotoModeSequencer_C_Destruct_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.OnCursorMoved
	 */
	struct UBPW_PhotoModeSequencer_C_OnCursorMoved_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.OnSequencerUpdated
	 */
	struct UBPW_PhotoModeSequencer_C_OnSequencerUpdated_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.DeleteSelectedNodes
	 */
	struct UBPW_PhotoModeSequencer_C_DeleteSelectedNodes_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencer.BPW_PhotoModeSequencer_C.ExecuteUbergraph_BPW_PhotoModeSequencer
	 */
	struct UBPW_PhotoModeSequencer_C_ExecuteUbergraph_BPW_PhotoModeSequencer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
