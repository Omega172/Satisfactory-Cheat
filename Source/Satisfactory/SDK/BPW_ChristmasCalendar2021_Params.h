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
	 * Function BPW_ChristmasCalendar2021.BPW_ChristmasCalendar2021_C.IsSlotAnimPlaying
	 */
	struct UBPW_ChristmasCalendar2021_C_IsSlotAnimPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BQKW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ChristmasCalendar2021.BPW_ChristmasCalendar2021_C.OnFindHint
	 */
	struct UBPW_ChristmasCalendar2021_C_OnFindHint_Params
	{	};

	/**
	 * Function BPW_ChristmasCalendar2021.BPW_ChristmasCalendar2021_C.SetHintText
	 */
	struct UBPW_ChristmasCalendar2021_C_SetHintText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       IsWarning;                                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ChristmasCalendar2021.BPW_ChristmasCalendar2021_C.OnPreviewMouseButtonDown
	 */
	struct UBPW_ChristmasCalendar2021_C_OnPreviewMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_ChristmasCalendar2021.BPW_ChristmasCalendar2021_C.Cleanup
	 */
	struct UBPW_ChristmasCalendar2021_C_Cleanup_Params
	{	};

	/**
	 * Function BPW_ChristmasCalendar2021.BPW_ChristmasCalendar2021_C.OnMouseMove
	 */
	struct UBPW_ChristmasCalendar2021_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_ChristmasCalendar2021.BPW_ChristmasCalendar2021_C.DropStackOnPlayerInventory
	 */
	struct UBPW_ChristmasCalendar2021_C_DropStackOnPlayerInventory_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ChristmasCalendar2021.BPW_ChristmasCalendar2021_C.CloseSlot
	 */
	struct UBPW_ChristmasCalendar2021_C_CloseSlot_Params
	{	};

	/**
	 * Function BPW_ChristmasCalendar2021.BPW_ChristmasCalendar2021_C.OnCalendarSlotClicked
	 */
	struct UBPW_ChristmasCalendar2021_C_OnCalendarSlotClicked_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ChristmasCalendar2021.BPW_ChristmasCalendar2021_C.OnCalendarOverlayClicked
	 */
	struct UBPW_ChristmasCalendar2021_C_OnCalendarOverlayClicked_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_ChristmasCalendar2021.BPW_ChristmasCalendar2021_C.SetupSlots
	 */
	struct UBPW_ChristmasCalendar2021_C_SetupSlots_Params
	{	};

	/**
	 * Function BPW_ChristmasCalendar2021.BPW_ChristmasCalendar2021_C.OnOpenSlot
	 */
	struct UBPW_ChristmasCalendar2021_C_OnOpenSlot_Params
	{	};

	/**
	 * Function BPW_ChristmasCalendar2021.BPW_ChristmasCalendar2021_C.PreConstruct
	 */
	struct UBPW_ChristmasCalendar2021_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ChristmasCalendar2021.BPW_ChristmasCalendar2021_C.Construct
	 */
	struct UBPW_ChristmasCalendar2021_C_Construct_Params
	{	};

	/**
	 * Function BPW_ChristmasCalendar2021.BPW_ChristmasCalendar2021_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature
	 */
	struct UBPW_ChristmasCalendar2021_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ChristmasCalendar2021.BPW_ChristmasCalendar2021_C.ChangeCursor
	 */
	struct UBPW_ChristmasCalendar2021_C_ChangeCursor_Params
	{	};

	/**
	 * Function BPW_ChristmasCalendar2021.BPW_ChristmasCalendar2021_C.Destruct
	 */
	struct UBPW_ChristmasCalendar2021_C_Destruct_Params
	{	};

	/**
	 * Function BPW_ChristmasCalendar2021.BPW_ChristmasCalendar2021_C.BndEvt__mSearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_ChristmasCalendar2021_C_BndEvt__mSearchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ChristmasCalendar2021.BPW_ChristmasCalendar2021_C.ResetHintText
	 */
	struct UBPW_ChristmasCalendar2021_C_ResetHintText_Params
	{	};

	/**
	 * Function BPW_ChristmasCalendar2021.BPW_ChristmasCalendar2021_C.BndEvt__mSearchText_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature
	 */
	struct UBPW_ChristmasCalendar2021_C_BndEvt__mSearchText_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ChristmasCalendar2021.BPW_ChristmasCalendar2021_C.ExecuteUbergraph_BPW_ChristmasCalendar2021
	 */
	struct UBPW_ChristmasCalendar2021_C_ExecuteUbergraph_BPW_ChristmasCalendar2021_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
