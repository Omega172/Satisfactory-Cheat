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
	 * Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.DropOntoInventorySlot
	 */
	struct UWidget_SpaceElevatorPayOffSlot_C_DropOntoInventorySlot_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7WOO[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetCustomTooltip
	 */
	struct UWidget_SpaceElevatorPayOffSlot_C_GetCustomTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetPaidOffSlotVisibility
	 */
	struct UWidget_SpaceElevatorPayOffSlot_C_GetPaidOffSlotVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetProgressBarVisibility
	 */
	struct UWidget_SpaceElevatorPayOffSlot_C_GetProgressBarVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetPaidOffColorFeedback
	 */
	struct UWidget_SpaceElevatorPayOffSlot_C_GetPaidOffColorFeedback_Params
	{
	public:
		struct FSlateColor                                         ReturnValue;                                             // 0x0000(0x0014)  (Parm, OutParm, ReturnParm)
		unsigned char                                              UnknownData_7GVD[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetPaidOffFeedbackImage
	 */
	struct UWidget_SpaceElevatorPayOffSlot_C_GetPaidOffFeedbackImage_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetProgressbarPercent
	 */
	struct UWidget_SpaceElevatorPayOffSlot_C_GetProgressbarPercent_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.OnDrop
	 */
	struct UWidget_SpaceElevatorPayOffSlot_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6IE2[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetItemQuotaText
	 */
	struct UWidget_SpaceElevatorPayOffSlot_C_GetItemQuotaText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetItemText
	 */
	struct UWidget_SpaceElevatorPayOffSlot_C_GetItemText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GetItemImage
	 */
	struct UWidget_SpaceElevatorPayOffSlot_C_GetItemImage_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x00D0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.Construct
	 */
	struct UWidget_SpaceElevatorPayOffSlot_C_Construct_Params
	{	};

	/**
	 * Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.Tick
	 */
	struct UWidget_SpaceElevatorPayOffSlot_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.GlowTimer
	 */
	struct UWidget_SpaceElevatorPayOffSlot_C_GlowTimer_Params
	{	};

	/**
	 * Function Widget_SpaceElevatorPayOffSlot.Widget_SpaceElevatorPayOffSlot_C.ExecuteUbergraph_Widget_SpaceElevatorPayOffSlot
	 */
	struct UWidget_SpaceElevatorPayOffSlot_C_ExecuteUbergraph_Widget_SpaceElevatorPayOffSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
