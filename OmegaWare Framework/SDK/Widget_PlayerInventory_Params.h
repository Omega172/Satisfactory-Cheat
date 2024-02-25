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
	 * Function Widget_PlayerInventory.Widget_PlayerInventory_C.AnimateNewInventorySlots
	 */
	struct UWidget_PlayerInventory_C_AnimateNewInventorySlots_Params
	{
	public:
		int32_t                                                    NumOfNewSlots;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerInventory.Widget_PlayerInventory_C.OnKeyUp
	 */
	struct UWidget_PlayerInventory_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_PlayerInventory.Widget_PlayerInventory_C.SetupArmInventoryResize
	 */
	struct UWidget_PlayerInventory_C_SetupArmInventoryResize_Params
	{	};

	/**
	 * Function Widget_PlayerInventory.Widget_PlayerInventory_C.IsArmEquipmentInventoryOutdated
	 */
	struct UWidget_PlayerInventory_C_IsArmEquipmentInventoryOutdated_Params
	{
	public:
		bool                                                       isOutdated;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7FUS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_PlayerInventory.Widget_PlayerInventory_C.OnPreviewKeyDown
	 */
	struct UWidget_PlayerInventory_C_OnPreviewKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_PlayerInventory.Widget_PlayerInventory_C.OnDrop
	 */
	struct UWidget_PlayerInventory_C_OnDrop_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0078)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UDragDropOperation*                                  Operation;                                               // 0x00B0(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x00B8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerInventory.Widget_PlayerInventory_C.TryGetCentralStorages
	 */
	struct UWidget_PlayerInventory_C_TryGetCentralStorages_Params
	{	};

	/**
	 * Function Widget_PlayerInventory.Widget_PlayerInventory_C.OnKeyDown
	 */
	struct UWidget_PlayerInventory_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_PlayerInventory.Widget_PlayerInventory_C.Cleanup
	 */
	struct UWidget_PlayerInventory_C_Cleanup_Params
	{	};

	/**
	 * Function Widget_PlayerInventory.Widget_PlayerInventory_C.SetInventoryComponents
	 */
	struct UWidget_PlayerInventory_C_SetInventoryComponents_Params
	{
	public:
		class UFGInventoryComponent*                               InventoryComponent;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UFGInventoryComponent*                               arms;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UFGInventoryComponent*                               Back;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UFGInventoryComponent*                               head;                                                    // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UFGInventoryComponent*                               trash;                                                   // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerInventory.Widget_PlayerInventory_C.Init
	 */
	struct UWidget_PlayerInventory_C_Init_Params
	{	};

	/**
	 * Function Widget_PlayerInventory.Widget_PlayerInventory_C.CloseInventory
	 */
	struct UWidget_PlayerInventory_C_CloseInventory_Params
	{	};

	/**
	 * Function Widget_PlayerInventory.Widget_PlayerInventory_C.Destruct
	 */
	struct UWidget_PlayerInventory_C_Destruct_Params
	{	};

	/**
	 * Function Widget_PlayerInventory.Widget_PlayerInventory_C.Construct
	 */
	struct UWidget_PlayerInventory_C_Construct_Params
	{	};

	/**
	 * Function Widget_PlayerInventory.Widget_PlayerInventory_C.CentralStorageButtonClicked
	 */
	struct UWidget_PlayerInventory_C_CentralStorageButtonClicked_Params
	{
	public:
		class UWidget_Button_C*                                    ClickedButton;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerInventory.Widget_PlayerInventory_C.OnCentralStorageAddedOrRemoved
	 */
	struct UWidget_PlayerInventory_C_OnCentralStorageAddedOrRemoved_Params
	{	};

	/**
	 * Function Widget_PlayerInventory.Widget_PlayerInventory_C.PreConstruct
	 */
	struct UWidget_PlayerInventory_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerInventory.Widget_PlayerInventory_C.BndEvt__mInventory_K2Node_ComponentBoundEvent_0_OnRelevantShortcutPressed__DelegateSignature
	 */
	struct UWidget_PlayerInventory_C_BndEvt__mInventory_K2Node_ComponentBoundEvent_0_OnRelevantShortcutPressed__DelegateSignature_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerInventory.Widget_PlayerInventory_C.ExecuteUbergraph_Widget_PlayerInventory
	 */
	struct UWidget_PlayerInventory_C_ExecuteUbergraph_Widget_PlayerInventory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZBDD[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
