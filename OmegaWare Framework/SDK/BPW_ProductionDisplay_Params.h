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
	 * Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.SetIsIdle
	 */
	struct UBPW_ProductionDisplay_C_SetIsIdle_Params
	{
	public:
		bool                                                       mIsIdle;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.UpdateFluxPower
	 */
	struct UBPW_ProductionDisplay_C_UpdateFluxPower_Params
	{
	public:
		double                                                     FluxPowerMin;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     FluxPowerMax;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.CreateSingleModule
	 */
	struct UBPW_ProductionDisplay_C_CreateSingleModule_Params
	{
	public:
		struct FStruct_ProductionDisplayModule                     ProductionModule;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.AddModule
	 */
	struct UBPW_ProductionDisplay_C_AddModule_Params
	{
	public:
		struct FStruct_ProductionDisplayModule                     ProductionModule;                                        // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.SetResourceIcon
	 */
	struct UBPW_ProductionDisplay_C_SetResourceIcon_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.GetInputSlot
	 */
	struct UBPW_ProductionDisplay_C_GetInputSlot_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.GetOutputSlot
	 */
	struct UBPW_ProductionDisplay_C_GetOutputSlot_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       Success;                                                 // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.ManuallySetItemAmount
	 */
	struct UBPW_ProductionDisplay_C_ManuallySetItemAmount_Params
	{
	public:
		E_InputOutput                                              InputOrOutput;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5WGE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FItemAmount                                         ItemAmount;                                              // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.SetupInputOutputInventories
	 */
	struct UBPW_ProductionDisplay_C_SetupInputOutputInventories_Params
	{
	public:
		class UFGInventoryComponent*                               InputInventoryComponent;                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		class UFGInventoryComponent*                               OutputInventoryComponent;                                // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.UpdateRecipe
	 */
	struct UBPW_ProductionDisplay_C_UpdateRecipe_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.UpdatePerMinStat
	 */
	struct UBPW_ProductionDisplay_C_UpdatePerMinStat_Params
	{
	public:
		double                                                     CycleTime;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.UpdateProgress
	 */
	struct UBPW_ProductionDisplay_C_UpdateProgress_Params
	{
	public:
		double                                                     InPercent;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.UpdateProductionStats
	 */
	struct UBPW_ProductionDisplay_C_UpdateProductionStats_Params
	{
	public:
		double                                                     Power;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     CycleTime;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     efficiency;                                              // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.CreateSpacer
	 */
	struct UBPW_ProductionDisplay_C_CreateSpacer_Params
	{
	public:
		double                                                     Offset;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     Size;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.CreateModulesFromArray
	 */
	struct UBPW_ProductionDisplay_C_CreateModulesFromArray_Params
	{	};

	/**
	 * Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.PreConstruct
	 */
	struct UBPW_ProductionDisplay_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.OnUpdateDropArea
	 */
	struct UBPW_ProductionDisplay_C_OnUpdateDropArea_Params
	{	};

	/**
	 * Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.ExecuteUbergraph_BPW_ProductionDisplay
	 */
	struct UBPW_ProductionDisplay_C_ExecuteUbergraph_BPW_ProductionDisplay_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
