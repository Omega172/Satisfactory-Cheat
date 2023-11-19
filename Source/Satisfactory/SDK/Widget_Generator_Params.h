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
	 * Function Widget_Generator.Widget_Generator_C.GetAmountFromClass
	 */
	struct UWidget_Generator_C_GetAmountFromClass_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		double                                                     InValue;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		double                                                     ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.SelectProductionModule
	 */
	struct UWidget_Generator_C_SelectProductionModule_Params
	{	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.UpdateFluidStats
	 */
	struct UWidget_Generator_C_UpdateFluidStats_Params
	{	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.SetupInputs
	 */
	struct UWidget_Generator_C_SetupInputs_Params
	{	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.OnReplicationDetailActorCreated
	 */
	struct UWidget_Generator_C_OnReplicationDetailActorCreated_Params
	{
	public:
		class AActor*                                              ReplicationDetailActor;                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.UpdateHeaderText
	 */
	struct UWidget_Generator_C_UpdateHeaderText_Params
	{	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.UpdateWarningWidget
	 */
	struct UWidget_Generator_C_UpdateWarningWidget_Params
	{	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.DropInventorySlotStack
	 */
	struct UWidget_Generator_C_DropInventorySlotStack_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasStackMoved;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KUS3[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.UpdateSlotStats
	 */
	struct UWidget_Generator_C_UpdateSlotStats_Params
	{	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.GetFuseVisibility
	 */
	struct UWidget_Generator_C_GetFuseVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.UpdateProgress
	 */
	struct UWidget_Generator_C_UpdateProgress_Params
	{	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.OnGetPowerCircuit
	 */
	struct UWidget_Generator_C_OnGetPowerCircuit_Params
	{
	public:
		class UFGPowerCircuit*                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.IsConnected
	 */
	struct UWidget_Generator_C_IsConnected_Params
	{
	public:
		bool                                                       IsConnected;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8DWO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.Cleanup
	 */
	struct UWidget_Generator_C_Cleanup_Params
	{	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.GetBurnProgressPercent
	 */
	struct UWidget_Generator_C_GetBurnProgressPercent_Params
	{
	public:
		double                                                     ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.Init
	 */
	struct UWidget_Generator_C_Init_Params
	{	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.Construct
	 */
	struct UWidget_Generator_C_Construct_Params
	{	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.Destruct
	 */
	struct UWidget_Generator_C_Destruct_Params
	{	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_1_OnStandbyClicked__DelegateSignature
	 */
	struct UWidget_Generator_C_BndEvt__Widget_StandbyButton_K2Node_ComponentBoundEvent_1_OnStandbyClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.ResetFuse
	 */
	struct UWidget_Generator_C_ResetFuse_Params
	{	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.WarningMessageCheck
	 */
	struct UWidget_Generator_C_WarningMessageCheck_Params
	{	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.OnProductionChanged
	 */
	struct UWidget_Generator_C_OnProductionChanged_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.OnCustomTick
	 */
	struct UWidget_Generator_C_OnCustomTick_Params
	{
	public:
		float                                                      UpdateTime;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.OnStandbyHasChanged
	 */
	struct UWidget_Generator_C_OnStandbyHasChanged_Params
	{
	public:
		bool                                                       State;                                                   // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Generator.Widget_Generator_C.ExecuteUbergraph_Widget_Generator
	 */
	struct UWidget_Generator_C_ExecuteUbergraph_Widget_Generator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SRCA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
