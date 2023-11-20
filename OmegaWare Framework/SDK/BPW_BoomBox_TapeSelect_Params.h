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
	 * Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.HideSongList
	 */
	struct UBPW_BoomBox_TapeSelect_C_HideSongList_Params
	{
	public:
		class UClass*                                              Tape;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.ShowSongList
	 */
	struct UBPW_BoomBox_TapeSelect_C_ShowSongList_Params
	{
	public:
		class UClass*                                              Tape;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.SetupTapeBindings
	 */
	struct UBPW_BoomBox_TapeSelect_C_SetupTapeBindings_Params
	{
	public:
		class UBPW_BoomBox_TapeButton_C*                           BoomBoxTapeButton;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.SetCurrentTape
	 */
	struct UBPW_BoomBox_TapeSelect_C_SetCurrentTape_Params
	{
	public:
		class UClass*                                              Descriptor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.OnTapeClicked
	 */
	struct UBPW_BoomBox_TapeSelect_C_OnTapeClicked_Params
	{
	public:
		class UClass*                                              Tape;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.SetupTapeList
	 */
	struct UBPW_BoomBox_TapeSelect_C_SetupTapeList_Params
	{	};

	/**
	 * Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.Construct
	 */
	struct UBPW_BoomBox_TapeSelect_C_Construct_Params
	{	};

	/**
	 * Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.BndEvt__BPW_BoomBox_TapeSelect_Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBPW_BoomBox_TapeSelect_C_BndEvt__BPW_BoomBox_TapeSelect_Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.mOnNewTapeUnlocked_Event_1
	 */
	struct UBPW_BoomBox_TapeSelect_C_mOnNewTapeUnlocked_Event_1_Params
	{
	public:
		class UClass*                                              newTape;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.ExecuteUbergraph_BPW_BoomBox_TapeSelect
	 */
	struct UBPW_BoomBox_TapeSelect_C_ExecuteUbergraph_BPW_BoomBox_TapeSelect_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.OnBackToPlayerClicked__DelegateSignature
	 */
	struct UBPW_BoomBox_TapeSelect_C_OnBackToPlayerClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_BoomBox_TapeSelect.BPW_BoomBox_TapeSelect_C.OnTapeSelected__DelegateSignature
	 */
	struct UBPW_BoomBox_TapeSelect_C_OnTapeSelected__DelegateSignature_Params
	{
	public:
		class UClass*                                              tapeData;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
