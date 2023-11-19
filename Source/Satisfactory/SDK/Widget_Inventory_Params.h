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
	 * Function Widget_Inventory.Widget_Inventory_C.OnInventorySlotMoved
	 */
	struct UWidget_Inventory_C_OnInventorySlotMoved_Params
	{
	public:
		class UWidget_InventorySlot_C*                             SourceInventorySlot;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Inventory.Widget_Inventory_C.CalculateWidthFromPixelOverride
	 */
	struct UWidget_Inventory_C_CalculateWidthFromPixelOverride_Params
	{	};

	/**
	 * Function Widget_Inventory.Widget_Inventory_C.GetAllInventorySlots
	 */
	struct UWidget_Inventory_C_GetAllInventorySlots_Params
	{
	public:
		TArray<class UWidget_InventorySlot_C*>                     InventorySlots;                                          // 0x0000(0x0010)  (Parm, OutParm, ContainsInstancedReference)
	};

	/**
	 * Function Widget_Inventory.Widget_Inventory_C.GetSqrtOfLinearSize
	 */
	struct UWidget_Inventory_C_GetSqrtOfLinearSize_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Inventory.Widget_Inventory_C.GetWidth
	 */
	struct UWidget_Inventory_C_GetWidth_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LSY5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Inventory.Widget_Inventory_C.CreateAllSlots
	 */
	struct UWidget_Inventory_C_CreateAllSlots_Params
	{	};

	/**
	 * Function Widget_Inventory.Widget_Inventory_C.ClearAllSlots
	 */
	struct UWidget_Inventory_C_ClearAllSlots_Params
	{	};

	/**
	 * Function Widget_Inventory.Widget_Inventory_C.CalcIndex
	 */
	struct UWidget_Inventory_C_CalcIndex_Params
	{
	public:
		int32_t                                                    X;                                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Y;                                                       // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Width;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    idx;                                                     // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Inventory.Widget_Inventory_C.CreateSlot
	 */
	struct UWidget_Inventory_C_CreateSlot_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Row;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Column;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BU4L[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_InventorySlot_C*                             Result;                                                  // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Inventory.Widget_Inventory_C.Init
	 */
	struct UWidget_Inventory_C_Init_Params
	{
	public:
		class UFGInventoryComponent*                               Component;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Inventory.Widget_Inventory_C.OnInventoryResized
	 */
	struct UWidget_Inventory_C_OnInventoryResized_Params
	{
	public:
		int32_t                                                    oldSize;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    NewSize;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Inventory.Widget_Inventory_C.Destruct
	 */
	struct UWidget_Inventory_C_Destruct_Params
	{	};

	/**
	 * Function Widget_Inventory.Widget_Inventory_C.Construct
	 */
	struct UWidget_Inventory_C_Construct_Params
	{	};

	/**
	 * Function Widget_Inventory.Widget_Inventory_C.OnDragEnter
	 */
	struct UWidget_Inventory_C_OnDragEnter_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Inventory.Widget_Inventory_C.OnDragLeave
	 */
	struct UWidget_Inventory_C_OnDragLeave_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x0078(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Inventory.Widget_Inventory_C.OnMouseLeave
	 */
	struct UWidget_Inventory_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_Inventory.Widget_Inventory_C.AnimateNewSlots
	 */
	struct UWidget_Inventory_C_AnimateNewSlots_Params
	{
	public:
		int32_t                                                    NumNewSlots;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Inventory.Widget_Inventory_C.ExecuteUbergraph_Widget_Inventory
	 */
	struct UWidget_Inventory_C_ExecuteUbergraph_Widget_Inventory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Inventory.Widget_Inventory_C.OnSlotMoved__DelegateSignature
	 */
	struct UWidget_Inventory_C_OnSlotMoved__DelegateSignature_Params
	{
	public:
		class UWidget_InventorySlot_C*                             SourceInventorySlot;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Inventory.Widget_Inventory_C.OnInventoryMouseLeave__DelegateSignature
	 */
	struct UWidget_Inventory_C_OnInventoryMouseLeave__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Inventory.Widget_Inventory_C.OnInventoryDragLeave__DelegateSignature
	 */
	struct UWidget_Inventory_C_OnInventoryDragLeave__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Inventory.Widget_Inventory_C.OnInventoryDragEnter__DelegateSignature
	 */
	struct UWidget_Inventory_C_OnInventoryDragEnter__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
