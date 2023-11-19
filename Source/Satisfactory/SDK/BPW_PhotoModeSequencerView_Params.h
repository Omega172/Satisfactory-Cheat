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
	 * Function BPW_PhotoModeSequencerView.BPW_PhotoModeSequencerView_C.HandleInput
	 */
	struct UBPW_PhotoModeSequencerView_C_HandleInput_Params
	{
	public:
		struct FKeyEvent                                           KeyEvent;                                                // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         EventReply;                                              // 0x0040(0x00B8)  (Parm, OutParm)
	};

	/**
	 * Function BPW_PhotoModeSequencerView.BPW_PhotoModeSequencerView_C.OnPreviewKeyDown
	 */
	struct UBPW_PhotoModeSequencerView_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_PhotoModeSequencerView.BPW_PhotoModeSequencerView_C.ToggleMouseControl
	 */
	struct UBPW_PhotoModeSequencerView_C_ToggleMouseControl_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencerView.BPW_PhotoModeSequencerView_C.Construct
	 */
	struct UBPW_PhotoModeSequencerView_C_Construct_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencerView.BPW_PhotoModeSequencerView_C.BndEvt__Button_Exit_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_PhotoModeSequencerView_C_BndEvt__Button_Exit_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencerView.BPW_PhotoModeSequencerView_C.Init
	 */
	struct UBPW_PhotoModeSequencerView_C_Init_Params
	{	};

	/**
	 * Function BPW_PhotoModeSequencerView.BPW_PhotoModeSequencerView_C.ExecuteUbergraph_BPW_PhotoModeSequencerView
	 */
	struct UBPW_PhotoModeSequencerView_C_ExecuteUbergraph_BPW_PhotoModeSequencerView_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
