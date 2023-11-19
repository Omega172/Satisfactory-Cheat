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
	 * Function Widget_PortableMiner.Widget_PortableMiner_C.DropInventorySlotStack
	 */
	struct UWidget_PortableMiner_C_DropInventorySlotStack_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasStackMoved;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PortableMiner.Widget_PortableMiner_C.InitCallbacks
	 */
	struct UWidget_PortableMiner_C_InitCallbacks_Params
	{	};

	/**
	 * Function Widget_PortableMiner.Widget_PortableMiner_C.UpdateMinerInfo
	 */
	struct UWidget_PortableMiner_C_UpdateMinerInfo_Params
	{	};

	/**
	 * Function Widget_PortableMiner.Widget_PortableMiner_C.UpdateMinerProgress
	 */
	struct UWidget_PortableMiner_C_UpdateMinerProgress_Params
	{	};

	/**
	 * Function Widget_PortableMiner.Widget_PortableMiner_C.Init
	 */
	struct UWidget_PortableMiner_C_Init_Params
	{	};

	/**
	 * Function Widget_PortableMiner.Widget_PortableMiner_C.Tick
	 */
	struct UWidget_PortableMiner_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_PortableMiner.Widget_PortableMiner_C.Construct
	 */
	struct UWidget_PortableMiner_C_Construct_Params
	{	};

	/**
	 * Function Widget_PortableMiner.Widget_PortableMiner_C.BndEvt__mButtonTakeAllItems_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWidget_PortableMiner_C_BndEvt__mButtonTakeAllItems_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_PortableMiner.Widget_PortableMiner_C.BndEvt__Widget_PortableMiner_mButtonPickUp_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UWidget_PortableMiner_C_BndEvt__Widget_PortableMiner_mButtonPickUp_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_PortableMiner.Widget_PortableMiner_C.ExecuteUbergraph_Widget_PortableMiner
	 */
	struct UWidget_PortableMiner_C_ExecuteUbergraph_Widget_PortableMiner_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QOF7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
