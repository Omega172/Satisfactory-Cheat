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
	 * Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.DropOntoInventorySlot
	 */
	struct UWidget_TradingPostPayOffSlot_C_DropOntoInventorySlot_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_49ID[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.SetPayOffBackground
	 */
	struct UWidget_TradingPostPayOffSlot_C_SetPayOffBackground_Params
	{	};

	/**
	 * Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.GetProgressbarPercent
	 */
	struct UWidget_TradingPostPayOffSlot_C_GetProgressbarPercent_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D9MG[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.SetTextboxFormating
	 */
	struct UWidget_TradingPostPayOffSlot_C_SetTextboxFormating_Params
	{	};

	/**
	 * Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.GetCustomTooltip
	 */
	struct UWidget_TradingPostPayOffSlot_C_GetCustomTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.OnDrop
	 */
	struct UWidget_TradingPostPayOffSlot_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_4G8R[0x3];                                   // 0x00B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.SetItemAmountText
	 */
	struct UWidget_TradingPostPayOffSlot_C_SetItemAmountText_Params
	{	};

	/**
	 * Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.SetSchematicIcon
	 */
	struct UWidget_TradingPostPayOffSlot_C_SetSchematicIcon_Params
	{	};

	/**
	 * Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.Construct
	 */
	struct UWidget_TradingPostPayOffSlot_C_Construct_Params
	{	};

	/**
	 * Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.OnSchematicPaidOff
	 */
	struct UWidget_TradingPostPayOffSlot_C_OnSchematicPaidOff_Params
	{
	public:
		class AFGSchematicManager*                                 schematicManager;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.Destruct
	 */
	struct UWidget_TradingPostPayOffSlot_C_Destruct_Params
	{	};

	/**
	 * Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.OnMouseEnter
	 */
	struct UWidget_TradingPostPayOffSlot_C_OnMouseEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.Update Slot
	 */
	struct UWidget_TradingPostPayOffSlot_C_UpdateSlot_Params
	{	};

	/**
	 * Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.UpdateEmptyState
	 */
	struct UWidget_TradingPostPayOffSlot_C_UpdateEmptyState_Params
	{	};

	/**
	 * Function Widget_TradingPostPayOffSlot.Widget_TradingPostPayOffSlot_C.ExecuteUbergraph_Widget_TradingPostPayOffSlot
	 */
	struct UWidget_TradingPostPayOffSlot_C_ExecuteUbergraph_Widget_TradingPostPayOffSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
