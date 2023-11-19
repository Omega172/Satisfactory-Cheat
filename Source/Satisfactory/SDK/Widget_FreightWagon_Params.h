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
	 * Function Widget_FreightWagon.Widget_FreightWagon_C.SetFluidInfo
	 */
	struct UWidget_FreightWagon_C_SetFluidInfo_Params
	{
	public:
		class UClass*                                              fluidDescriptor;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FreightWagon.Widget_FreightWagon_C.SetFluidAmount
	 */
	struct UWidget_FreightWagon_C_SetFluidAmount_Params
	{
	public:
		double                                                     Value;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FreightWagon.Widget_FreightWagon_C.SetFluidStats
	 */
	struct UWidget_FreightWagon_C_SetFluidStats_Params
	{	};

	/**
	 * Function Widget_FreightWagon.Widget_FreightWagon_C.OnDumpAllClicked
	 */
	struct UWidget_FreightWagon_C_OnDumpAllClicked_Params
	{	};

	/**
	 * Function Widget_FreightWagon.Widget_FreightWagon_C.OnGrabAllClicked
	 */
	struct UWidget_FreightWagon_C_OnGrabAllClicked_Params
	{	};

	/**
	 * Function Widget_FreightWagon.Widget_FreightWagon_C.OnSortButtonClicked
	 */
	struct UWidget_FreightWagon_C_OnSortButtonClicked_Params
	{	};

	/**
	 * Function Widget_FreightWagon.Widget_FreightWagon_C.SetFreightWagonInventoryComponent
	 */
	struct UWidget_FreightWagon_C_SetFreightWagonInventoryComponent_Params
	{	};

	/**
	 * Function Widget_FreightWagon.Widget_FreightWagon_C.BindStorageButtons
	 */
	struct UWidget_FreightWagon_C_BindStorageButtons_Params
	{	};

	/**
	 * Function Widget_FreightWagon.Widget_FreightWagon_C.DropInventorySlotStack
	 */
	struct UWidget_FreightWagon_C_DropInventorySlotStack_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasStackMoved;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FreightWagon.Widget_FreightWagon_C.UpdateHeaderText
	 */
	struct UWidget_FreightWagon_C_UpdateHeaderText_Params
	{	};

	/**
	 * Function Widget_FreightWagon.Widget_FreightWagon_C.Init
	 */
	struct UWidget_FreightWagon_C_Init_Params
	{	};

	/**
	 * Function Widget_FreightWagon.Widget_FreightWagon_C.CloseStorage
	 */
	struct UWidget_FreightWagon_C_CloseStorage_Params
	{	};

	/**
	 * Function Widget_FreightWagon.Widget_FreightWagon_C.Construct
	 */
	struct UWidget_FreightWagon_C_Construct_Params
	{	};

	/**
	 * Function Widget_FreightWagon.Widget_FreightWagon_C.DumpAllInStorage
	 */
	struct UWidget_FreightWagon_C_DumpAllInStorage_Params
	{	};

	/**
	 * Function Widget_FreightWagon.Widget_FreightWagon_C.GrabAllFromStorage
	 */
	struct UWidget_FreightWagon_C_GrabAllFromStorage_Params
	{	};

	/**
	 * Function Widget_FreightWagon.Widget_FreightWagon_C.BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UWidget_FreightWagon_C_BndEvt__mSortButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_FreightWagon.Widget_FreightWagon_C.Tick
	 */
	struct UWidget_FreightWagon_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FreightWagon.Widget_FreightWagon_C.OnCustomTick
	 */
	struct UWidget_FreightWagon_C_OnCustomTick_Params
	{
	public:
		float                                                      UpdateTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FreightWagon.Widget_FreightWagon_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_0_OnFluidLerp__DelegateSignature
	 */
	struct UWidget_FreightWagon_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_0_OnFluidLerp__DelegateSignature_Params
	{
	public:
		double                                                     Alpha;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FreightWagon.Widget_FreightWagon_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_2_OnFlush__DelegateSignature
	 */
	struct UWidget_FreightWagon_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_2_OnFlush__DelegateSignature_Params
	{
	public:
		double                                                     DrainDuration;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_FreightWagon.Widget_FreightWagon_C.BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_4_OnDrainCompleted__DelegateSignature
	 */
	struct UWidget_FreightWagon_C_BndEvt__BPW_FlushHandle_K2Node_ComponentBoundEvent_4_OnDrainCompleted__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_FreightWagon.Widget_FreightWagon_C.ExecuteUbergraph_Widget_FreightWagon
	 */
	struct UWidget_FreightWagon_C_ExecuteUbergraph_Widget_FreightWagon_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
