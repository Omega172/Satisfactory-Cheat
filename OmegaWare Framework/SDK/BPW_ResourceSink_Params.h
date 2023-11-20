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
	 * Function BPW_ResourceSink.BPW_ResourceSink_C.IsCouponInventoryValid
	 */
	struct UBPW_ResourceSink_C_IsCouponInventoryValid_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2OEN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ResourceSink.BPW_ResourceSink_C.UpdatePowerWarning
	 */
	struct UBPW_ResourceSink_C_UpdatePowerWarning_Params
	{	};

	/**
	 * Function BPW_ResourceSink.BPW_ResourceSink_C.DropInventorySlotStack
	 */
	struct UBPW_ResourceSink_C_DropInventorySlotStack_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasStackMoved;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSink.BPW_ResourceSink_C.UpdateTicketSoundCurve
	 */
	struct UBPW_ResourceSink_C_UpdateTicketSoundCurve_Params
	{	};

	/**
	 * Function BPW_ResourceSink.BPW_ResourceSink_C.IntArrayToFloatArray
	 */
	struct UBPW_ResourceSink_C_IntArrayToFloatArray_Params
	{
	public:
		TArray<int32_t>                                            IntArray;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<double>                                             FloatArray;                                              // 0x0010(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function BPW_ResourceSink.BPW_ResourceSink_C.UpdateStats
	 */
	struct UBPW_ResourceSink_C_UpdateStats_Params
	{	};

	/**
	 * Function BPW_ResourceSink.BPW_ResourceSink_C.Cleanup
	 */
	struct UBPW_ResourceSink_C_Cleanup_Params
	{	};

	/**
	 * Function BPW_ResourceSink.BPW_ResourceSink_C.Construct
	 */
	struct UBPW_ResourceSink_C_Construct_Params
	{	};

	/**
	 * Function BPW_ResourceSink.BPW_ResourceSink_C.Destruct
	 */
	struct UBPW_ResourceSink_C_Destruct_Params
	{	};

	/**
	 * Function BPW_ResourceSink.BPW_ResourceSink_C.BndEvt__Widget_GlowingFactoryButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UBPW_ResourceSink_C_BndEvt__Widget_GlowingFactoryButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSink.BPW_ResourceSink_C.BndEvt__BPW_ResourceSinkCoupon_K2Node_ComponentBoundEvent_1_OnPrintCompleted__DelegateSignature
	 */
	struct UBPW_ResourceSink_C_BndEvt__BPW_ResourceSinkCoupon_K2Node_ComponentBoundEvent_1_OnPrintCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSink.BPW_ResourceSink_C.OnCustomTick
	 */
	struct UBPW_ResourceSink_C_OnCustomTick_Params
	{
	public:
		float                                                      UpdateTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSink.BPW_ResourceSink_C.BndEvt__BPW_ResourceSinkCoupon_K2Node_ComponentBoundEvent_2_OnPrintPaused__DelegateSignature
	 */
	struct UBPW_ResourceSink_C_BndEvt__BPW_ResourceSinkCoupon_K2Node_ComponentBoundEvent_2_OnPrintPaused__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSink.BPW_ResourceSink_C.OnItemAddedToInventory
	 */
	struct UBPW_ResourceSink_C_OnItemAddedToInventory_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    numAdded;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSink.BPW_ResourceSink_C.BndEvt__mResourceSink_K2Node_ComponentBoundEvent_3_BuildingStateChanged__DelegateSignature
	 */
	struct UBPW_ResourceSink_C_BndEvt__mResourceSink_K2Node_ComponentBoundEvent_3_BuildingStateChanged__DelegateSignature_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSink.BPW_ResourceSink_C.BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_4_OnStandbyClicked__DelegateSignature
	 */
	struct UBPW_ResourceSink_C_BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_4_OnStandbyClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSink.BPW_ResourceSink_C.OnStandbyHasChanged
	 */
	struct UBPW_ResourceSink_C_OnStandbyHasChanged_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSink.BPW_ResourceSink_C.DelayedUpdate
	 */
	struct UBPW_ResourceSink_C_DelayedUpdate_Params
	{	};

	/**
	 * Function BPW_ResourceSink.BPW_ResourceSink_C.ExecuteUbergraph_BPW_ResourceSink
	 */
	struct UBPW_ResourceSink_C_ExecuteUbergraph_BPW_ResourceSink_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
