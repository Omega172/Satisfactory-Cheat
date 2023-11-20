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
	 * Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.UpdateItemAmountValidity
	 */
	struct UBPW_ProductionDisplayModule_InputOutput_C_UpdateItemAmountValidity_Params
	{	};

	/**
	 * Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.GetInventorySlot
	 */
	struct UBPW_ProductionDisplayModule_InputOutput_C_GetInventorySlot_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.DropInventoryStackOnPlayerInventory
	 */
	struct UBPW_ProductionDisplayModule_InputOutput_C_DropInventoryStackOnPlayerInventory_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.SetupInventoryComponent
	 */
	struct UBPW_ProductionDisplayModule_InputOutput_C_SetupInventoryComponent_Params
	{
	public:
		class UFGInventoryComponent*                               mCachedInventoryComponent;                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.GetSuffix
	 */
	struct UBPW_ProductionDisplayModule_InputOutput_C_GetSuffix_Params
	{
	public:
		class UClass*                                              InClass;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class FText                                                Result;                                                  // 0x0008(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.UpdatePerMinStat
	 */
	struct UBPW_ProductionDisplayModule_InputOutput_C_UpdatePerMinStat_Params
	{
	public:
		double                                                     CycleTime;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.UpdateItemAmount
	 */
	struct UBPW_ProductionDisplayModule_InputOutput_C_UpdateItemAmount_Params
	{
	public:
		struct FItemAmount                                         ItemAmount;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.ClearSlotWidget
	 */
	struct UBPW_ProductionDisplayModule_InputOutput_C_ClearSlotWidget_Params
	{	};

	/**
	 * Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.PositionInventorySlot
	 */
	struct UBPW_ProductionDisplayModule_InputOutput_C_PositionInventorySlot_Params
	{
	public:
		class UWidget*                                             Slot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.CreateInventorySlot
	 */
	struct UBPW_ProductionDisplayModule_InputOutput_C_CreateInventorySlot_Params
	{	};

	/**
	 * Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.PreConstruct
	 */
	struct UBPW_ProductionDisplayModule_InputOutput_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplayModule_InputOutput.BPW_ProductionDisplayModule_InputOutput_C.ExecuteUbergraph_BPW_ProductionDisplayModule_InputOutput
	 */
	struct UBPW_ProductionDisplayModule_InputOutput_C_ExecuteUbergraph_BPW_ProductionDisplayModule_InputOutput_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
