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
	 * Function Widget_Storage.Widget_Storage_C.SetInventoryComp
	 */
	struct UWidget_Storage_C_SetInventoryComp_Params
	{
	public:
		class UFGInventoryComponent*                               InventoryComp;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Storage.Widget_Storage_C.OnSortClicked
	 */
	struct UWidget_Storage_C_OnSortClicked_Params
	{	};

	/**
	 * Function Widget_Storage.Widget_Storage_C.OnDumpAllClicked
	 */
	struct UWidget_Storage_C_OnDumpAllClicked_Params
	{	};

	/**
	 * Function Widget_Storage.Widget_Storage_C.OnGrabAllClicked
	 */
	struct UWidget_Storage_C_OnGrabAllClicked_Params
	{	};

	/**
	 * Function Widget_Storage.Widget_Storage_C.BindStorageButtons
	 */
	struct UWidget_Storage_C_BindStorageButtons_Params
	{	};

	/**
	 * Function Widget_Storage.Widget_Storage_C.DropInventorySlotStack
	 */
	struct UWidget_Storage_C_DropInventorySlotStack_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasStackMoved;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Storage.Widget_Storage_C.Cleanup
	 */
	struct UWidget_Storage_C_Cleanup_Params
	{	};

	/**
	 * Function Widget_Storage.Widget_Storage_C.Init
	 */
	struct UWidget_Storage_C_Init_Params
	{	};

	/**
	 * Function Widget_Storage.Widget_Storage_C.Destruct
	 */
	struct UWidget_Storage_C_Destruct_Params
	{	};

	/**
	 * Function Widget_Storage.Widget_Storage_C.Construct
	 */
	struct UWidget_Storage_C_Construct_Params
	{	};

	/**
	 * Function Widget_Storage.Widget_Storage_C.DumpAllInStorage
	 */
	struct UWidget_Storage_C_DumpAllInStorage_Params
	{	};

	/**
	 * Function Widget_Storage.Widget_Storage_C.GrabAllFromStorage
	 */
	struct UWidget_Storage_C_GrabAllFromStorage_Params
	{	};

	/**
	 * Function Widget_Storage.Widget_Storage_C.BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWidget_Storage_C_BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Storage.Widget_Storage_C.OnInventoryComponentReplicated
	 */
	struct UWidget_Storage_C_OnInventoryComponentReplicated_Params
	{
	public:
		class AActor*                                              replicationDetailActorOwner;                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Storage.Widget_Storage_C.ExecuteUbergraph_Widget_Storage
	 */
	struct UWidget_Storage_C_ExecuteUbergraph_Widget_Storage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
