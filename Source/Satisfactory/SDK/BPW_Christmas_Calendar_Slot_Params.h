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
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.SequenceEvent__ENTRYPOINTBPW_Christmas_Calendar_Slot_2
	 */
	struct UBPW_Christmas_Calendar_Slot_C_SequenceEvent__ENTRYPOINTBPW_Christmas_Calendar_Slot_2_Params
	{	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.SequenceEvent__ENTRYPOINTBPW_Christmas_Calendar_Slot_1
	 */
	struct UBPW_Christmas_Calendar_Slot_C_SequenceEvent__ENTRYPOINTBPW_Christmas_Calendar_Slot_1_Params
	{	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.SequenceEvent__ENTRYPOINTBPW_Christmas_Calendar_Slot
	 */
	struct UBPW_Christmas_Calendar_Slot_C_SequenceEvent__ENTRYPOINTBPW_Christmas_Calendar_Slot_Params
	{	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.OnNonItemUnlockClaimed
	 */
	struct UBPW_Christmas_Calendar_Slot_C_OnNonItemUnlockClaimed_Params
	{
	public:
		bool                                                       ConfirmClicked;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HU5B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.IsAnyOpeningOrClosingAnimsPlaying
	 */
	struct UBPW_Christmas_Calendar_Slot_C_IsAnyOpeningOrClosingAnimsPlaying_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.StartHintGlow
	 */
	struct UBPW_Christmas_Calendar_Slot_C_StartHintGlow_Params
	{	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.CheckDate
	 */
	struct UBPW_Christmas_Calendar_Slot_C_CheckDate_Params
	{	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.State_OpenEmpty
	 */
	struct UBPW_Christmas_Calendar_Slot_C_State_OpenEmpty_Params
	{	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.State_OpenedNotEmpty
	 */
	struct UBPW_Christmas_Calendar_Slot_C_State_OpenedNotEmpty_Params
	{	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.State_Unopened
	 */
	struct UBPW_Christmas_Calendar_Slot_C_State_Unopened_Params
	{	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.UpdateState
	 */
	struct UBPW_Christmas_Calendar_Slot_C_UpdateState_Params
	{	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.UpdateIfEmpty
	 */
	struct UBPW_Christmas_Calendar_Slot_C_UpdateIfEmpty_Params
	{	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.PositionImageOnSlot
	 */
	struct UBPW_Christmas_Calendar_Slot_C_PositionImageOnSlot_Params
	{
	public:
		class UWidget*                                             Image;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.HasBeenOpened
	 */
	struct UBPW_Christmas_Calendar_Slot_C_HasBeenOpened_Params
	{	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.HideSlots
	 */
	struct UBPW_Christmas_Calendar_Slot_C_HideSlots_Params
	{	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.CloseSlot
	 */
	struct UBPW_Christmas_Calendar_Slot_C_CloseSlot_Params
	{	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.SetupCalendarSlot
	 */
	struct UBPW_Christmas_Calendar_Slot_C_SetupCalendarSlot_Params
	{
	public:
		class AFGBuildableCalendar*                                ChristmasCalendar;                                       // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.SpawnSmoke
	 */
	struct UBPW_Christmas_Calendar_Slot_C_SpawnSmoke_Params
	{	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.Cleanup
	 */
	struct UBPW_Christmas_Calendar_Slot_C_Cleanup_Params
	{	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.SetSlotVisibility
	 */
	struct UBPW_Christmas_Calendar_Slot_C_SetSlotVisibility_Params
	{
	public:
		bool                                                       ShowSlot;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.OpenSlot
	 */
	struct UBPW_Christmas_Calendar_Slot_C_OpenSlot_Params
	{
	public:
		class UTexture2D*                                          CalendarImage;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.OnMouseButtonDown
	 */
	struct UBPW_Christmas_Calendar_Slot_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.Destruct
	 */
	struct UBPW_Christmas_Calendar_Slot_C_Destruct_Params
	{	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.PreConstruct
	 */
	struct UBPW_Christmas_Calendar_Slot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.BndEvt__mInventorySlot_K2Node_ComponentBoundEvent_0_OnMoveStack__DelegateSignature
	 */
	struct UBPW_Christmas_Calendar_Slot_C_BndEvt__mInventorySlot_K2Node_ComponentBoundEvent_0_OnMoveStack__DelegateSignature_Params
	{
	public:
		class UWidget_InventorySlot_C*                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.Construct
	 */
	struct UBPW_Christmas_Calendar_Slot_C_Construct_Params
	{	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.Delayed Open
	 */
	struct UBPW_Christmas_Calendar_Slot_C_DelayedOpen_Params
	{	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.ExecuteUbergraph_BPW_Christmas_Calendar_Slot
	 */
	struct UBPW_Christmas_Calendar_Slot_C_ExecuteUbergraph_BPW_Christmas_Calendar_Slot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.OnMoveStack__DelegateSignature
	 */
	struct UBPW_Christmas_Calendar_Slot_C_OnMoveStack__DelegateSignature_Params
	{
	public:
		class UWidget_InventorySlot_C*                             Sender;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_Christmas_Calendar_Slot.BPW_Christmas_Calendar_Slot_C.OnClicked__DelegateSignature
	 */
	struct UBPW_Christmas_Calendar_Slot_C_OnClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
