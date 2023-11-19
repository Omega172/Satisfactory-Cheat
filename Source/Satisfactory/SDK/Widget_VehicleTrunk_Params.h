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
	 * Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.TryDropOntoSlot
	 */
	struct UWidget_VehicleTrunk_C_TryDropOntoSlot_Params
	{
	public:
		class UWidget_InventorySlot_C*                             TargetSlot;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UWidget_InventorySlot_C*                             OtherSlot;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       SwapItemIfOccupied;                                      // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_D7WQ[0x6];                                   // 0x0012(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.UpdateRelevantClasses
	 */
	struct UWidget_VehicleTrunk_C_UpdateRelevantClasses_Params
	{	};

	/**
	 * Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.SetTitle
	 */
	struct UWidget_VehicleTrunk_C_SetTitle_Params
	{	};

	/**
	 * Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.InitCallbacks
	 */
	struct UWidget_VehicleTrunk_C_InitCallbacks_Params
	{	};

	/**
	 * Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.DropInventorySlotStack
	 */
	struct UWidget_VehicleTrunk_C_DropInventorySlotStack_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasStackMoved;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.SetWindowAlignment
	 */
	struct UWidget_VehicleTrunk_C_SetWindowAlignment_Params
	{	};

	/**
	 * Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.CloseVehicle
	 */
	struct UWidget_VehicleTrunk_C_CloseVehicle_Params
	{	};

	/**
	 * Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.Cleanup
	 */
	struct UWidget_VehicleTrunk_C_Cleanup_Params
	{	};

	/**
	 * Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.Destruct
	 */
	struct UWidget_VehicleTrunk_C_Destruct_Params
	{	};

	/**
	 * Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.Init
	 */
	struct UWidget_VehicleTrunk_C_Init_Params
	{	};

	/**
	 * Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.Construct
	 */
	struct UWidget_VehicleTrunk_C_Construct_Params
	{	};

	/**
	 * Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.GrabAllFromVehicleStorage
	 */
	struct UWidget_VehicleTrunk_C_GrabAllFromVehicleStorage_Params
	{	};

	/**
	 * Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.StoreAllInVehicleStorage
	 */
	struct UWidget_VehicleTrunk_C_StoreAllInVehicleStorage_Params
	{	};

	/**
	 * Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.BndEvt__mSortButton_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UWidget_VehicleTrunk_C_BndEvt__mSortButton_1_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_VehicleTrunk.Widget_VehicleTrunk_C.ExecuteUbergraph_Widget_VehicleTrunk
	 */
	struct UWidget_VehicleTrunk_C_ExecuteUbergraph_Widget_VehicleTrunk_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
