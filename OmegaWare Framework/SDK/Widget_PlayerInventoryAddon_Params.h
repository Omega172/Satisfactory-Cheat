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
	 * Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.Internal_UpdateRelevantInventory
	 */
	struct UWidget_PlayerInventoryAddon_C_Internal_UpdateRelevantInventory_Params
	{	};

	/**
	 * Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.AnimateNewInventorySlots
	 */
	struct UWidget_PlayerInventoryAddon_C_AnimateNewInventorySlots_Params
	{
	public:
		int32_t                                                    InputPin;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.FindInventorySlotWithIdx
	 */
	struct UWidget_PlayerInventoryAddon_C_FindInventorySlotWithIdx_Params
	{
	public:
		int32_t                                                    slotIdx;                                                 // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Q354[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_InventorySlot_C*                             ArrayElement;                                            // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetDividerVisibility
	 */
	struct UWidget_PlayerInventoryAddon_C_SetDividerVisibility_Params
	{
	public:
		bool                                                       IsVisible;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetRelevantItemsText
	 */
	struct UWidget_PlayerInventoryAddon_C_SetRelevantItemsText_Params
	{
	public:
		class FText                                                mRelevantItemsText;                                      // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.ShouldItemClassUpdateRelevantInventory
	 */
	struct UWidget_PlayerInventoryAddon_C_ShouldItemClassUpdateRelevantInventory_Params
	{
	public:
		class UClass*                                              UpdatedItemClass;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       Return;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetupRelevantInventory
	 */
	struct UWidget_PlayerInventoryAddon_C_SetupRelevantInventory_Params
	{
	public:
		TArray<class UClass*>                                      mRelevantClasses;                                        // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.UpdateRelevantInventory
	 */
	struct UWidget_PlayerInventoryAddon_C_UpdateRelevantInventory_Params
	{	};

	/**
	 * Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.OnInventorySlotMoveStack
	 */
	struct UWidget_PlayerInventoryAddon_C_OnInventorySlotMoveStack_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlotSender;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SetInventoryComponents
	 */
	struct UWidget_PlayerInventoryAddon_C_SetInventoryComponents_Params
	{
	public:
		class UFGInventoryComponent*                               InventoryComponent;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UFGInventoryComponent*                               trash;                                                   // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.Construct
	 */
	struct UWidget_PlayerInventoryAddon_C_Construct_Params
	{	};

	/**
	 * Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWidget_PlayerInventoryAddon_C_BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.OnUpdateRelevantInventory
	 */
	struct UWidget_PlayerInventoryAddon_C_OnUpdateRelevantInventory_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		int32_t                                                    numAdded;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.PreConstruct
	 */
	struct UWidget_PlayerInventoryAddon_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.BndEvt__mTrashInventoryWidget_K2Node_ComponentBoundEvent_1_OnInventoryDragEnter__DelegateSignature
	 */
	struct UWidget_PlayerInventoryAddon_C_BndEvt__mTrashInventoryWidget_K2Node_ComponentBoundEvent_1_OnInventoryDragEnter__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.BndEvt__mTrashInventoryWidget_K2Node_ComponentBoundEvent_2_OnInventoryDragLeave__DelegateSignature
	 */
	struct UWidget_PlayerInventoryAddon_C_BndEvt__mTrashInventoryWidget_K2Node_ComponentBoundEvent_2_OnInventoryDragLeave__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.BndEvt__mTrashInventoryWidget_K2Node_ComponentBoundEvent_3_OnInventoryMouseLeave__DelegateSignature
	 */
	struct UWidget_PlayerInventoryAddon_C_BndEvt__mTrashInventoryWidget_K2Node_ComponentBoundEvent_3_OnInventoryMouseLeave__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.Init
	 */
	struct UWidget_PlayerInventoryAddon_C_Init_Params
	{	};

	/**
	 * Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.ExecuteUbergraph_Widget_PlayerInventoryAddon
	 */
	struct UWidget_PlayerInventoryAddon_C_ExecuteUbergraph_Widget_PlayerInventoryAddon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PlayerInventoryAddon.Widget_PlayerInventoryAddon_C.SlotStackMoveEvent__DelegateSignature
	 */
	struct UWidget_PlayerInventoryAddon_C_SlotStackMoveEvent__DelegateSignature_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		EInteractionDirection                                      Direction;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
