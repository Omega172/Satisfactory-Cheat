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
	 * Function Widget_Output_Slot.Widget_Output_Slot_C.SetShowSecondPartsPerMin
	 */
	struct UWidget_Output_Slot_C_SetShowSecondPartsPerMin_Params
	{
	public:
		bool                                                       ShowSecondPartsPerMin;                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UJDC[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UClass*                                              SecondaryItemDesc;                                       // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Output_Slot.Widget_Output_Slot_C.UpdateProductionStats
	 */
	struct UWidget_Output_Slot_C_UpdateProductionStats_Params
	{
	public:
		int32_t                                                    NumPerCycle;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RR8N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		double                                                     CycleTime;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     PowerConsumption;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     efficiency;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    SecondNumPerCycle;                                       // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Output_Slot.Widget_Output_Slot_C.UpdateCycleProgress
	 */
	struct UWidget_Output_Slot_C_UpdateCycleProgress_Params
	{
	public:
		double                                                     CycleProgress;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Output_Slot.Widget_Output_Slot_C.UpdateStaticInfo
	 */
	struct UWidget_Output_Slot_C_UpdateStaticInfo_Params
	{
	public:
		class FText                                                RecipeName;                                              // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_Output_Slot.Widget_Output_Slot_C.GenerateCostSlots
	 */
	struct UWidget_Output_Slot_C_GenerateCostSlots_Params
	{
	public:
		TArray<struct FOutputCostSlotData_Struct>                  OutputCostSlotData;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function Widget_Output_Slot.Widget_Output_Slot_C.GetSlot
	 */
	struct UWidget_Output_Slot_C_GetSlot_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8M5A[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_YT24[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Output_Slot.Widget_Output_Slot_C.GenerateOutputSlots
	 */
	struct UWidget_Output_Slot_C_GenerateOutputSlots_Params
	{
	public:
		TArray<struct FOutputSlotData_Struct>                      OutputSlotData;                                          // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	};

	/**
	 * Function Widget_Output_Slot.Widget_Output_Slot_C.UpdateWasteSlotVisibility
	 */
	struct UWidget_Output_Slot_C_UpdateWasteSlotVisibility_Params
	{	};

	/**
	 * Function Widget_Output_Slot.Widget_Output_Slot_C.CreateEfficiencyToolTip
	 */
	struct UWidget_Output_Slot_C_CreateEfficiencyToolTip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Output_Slot.Widget_Output_Slot_C.CreatePowerConsumptionToolTip
	 */
	struct UWidget_Output_Slot_C_CreatePowerConsumptionToolTip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Output_Slot.Widget_Output_Slot_C.CreateCycleTimeTooltip
	 */
	struct UWidget_Output_Slot_C_CreateCycleTimeTooltip_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Output_Slot.Widget_Output_Slot_C.Construct
	 */
	struct UWidget_Output_Slot_C_Construct_Params
	{	};

	/**
	 * Function Widget_Output_Slot.Widget_Output_Slot_C.PreConstruct
	 */
	struct UWidget_Output_Slot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Output_Slot.Widget_Output_Slot_C.OnInventorySlotStackMove
	 */
	struct UWidget_Output_Slot_C_OnInventorySlotStackMove_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Output_Slot.Widget_Output_Slot_C.ExecuteUbergraph_Widget_Output_Slot
	 */
	struct UWidget_Output_Slot_C_ExecuteUbergraph_Widget_Output_Slot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Output_Slot.Widget_Output_Slot_C.OnDropInventorySlotStack__DelegateSignature
	 */
	struct UWidget_Output_Slot_C_OnDropInventorySlotStack__DelegateSignature_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
