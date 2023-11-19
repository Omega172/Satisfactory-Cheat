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
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.OnDropInventorySlot
	 */
	struct UWidget_SpaceElevator_C_OnDropInventorySlot_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasStackMoved;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.DisplayEarlyAccessBlocker
	 */
	struct UWidget_SpaceElevator_C_DisplayEarlyAccessBlocker_Params
	{	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.UpdateHeaderText
	 */
	struct UWidget_SpaceElevator_C_UpdateHeaderText_Params
	{	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.SetStatusText
	 */
	struct UWidget_SpaceElevator_C_SetStatusText_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Pulsing;                                                 // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P1V6[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.UpdatePhaseInfo
	 */
	struct UWidget_SpaceElevator_C_UpdatePhaseInfo_Params
	{	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.SetUnlockTiers
	 */
	struct UWidget_SpaceElevator_C_SetUnlockTiers_Params
	{
	public:
		int32_t                                                    FirstUnlockTier;                                         // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    LastUnlockTier;                                          // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.ClearInactiveLeverSelections
	 */
	struct UWidget_SpaceElevator_C_ClearInactiveLeverSelections_Params
	{
	public:
		class UWidgetAnimation*                                    ActiveAnimation;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.DropInventorySlotStack
	 */
	struct UWidget_SpaceElevator_C_DropInventorySlotStack_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasStackMoved;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.GetPayOffContainerVisibility
	 */
	struct UWidget_SpaceElevator_C_GetPayOffContainerVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.SetupPayOffWidgets
	 */
	struct UWidget_SpaceElevator_C_SetupPayOffWidgets_Params
	{	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.Construct
	 */
	struct UWidget_SpaceElevator_C_Construct_Params
	{	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.Init
	 */
	struct UWidget_SpaceElevator_C_Init_Params
	{	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.PollAndSetupInventory
	 */
	struct UWidget_SpaceElevator_C_PollAndSetupInventory_Params
	{	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.OnGamePhaseChanged
	 */
	struct UWidget_SpaceElevator_C_OnGamePhaseChanged_Params
	{
	public:
		EGamePhase                                                 NewGamePhase;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.On Lever Select
	 */
	struct UWidget_SpaceElevator_C_OnLeverSelect_Params
	{
	public:
		int32_t                                                    SelectionIndex;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.OnUpgrade
	 */
	struct UWidget_SpaceElevator_C_OnUpgrade_Params
	{	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.Tick
	 */
	struct UWidget_SpaceElevator_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.ActivateSend
	 */
	struct UWidget_SpaceElevator_C_ActivateSend_Params
	{	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.SpawnSmoke
	 */
	struct UWidget_SpaceElevator_C_SpawnSmoke_Params
	{	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.SpawnSparksRight
	 */
	struct UWidget_SpaceElevator_C_SpawnSparksRight_Params
	{	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.SpawnSparksLeft
	 */
	struct UWidget_SpaceElevator_C_SpawnSparksLeft_Params
	{	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.StartShake
	 */
	struct UWidget_SpaceElevator_C_StartShake_Params
	{	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.StopShake
	 */
	struct UWidget_SpaceElevator_C_StopShake_Params
	{	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.ResetLever
	 */
	struct UWidget_SpaceElevator_C_ResetLever_Params
	{	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.Destruct
	 */
	struct UWidget_SpaceElevator_C_Destruct_Params
	{	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.AnimNotify_Chime
	 */
	struct UWidget_SpaceElevator_C_AnimNotify_Chime_Params
	{	};

	/**
	 * Function Widget_SpaceElevator.Widget_SpaceElevator_C.ExecuteUbergraph_Widget_SpaceElevator
	 */
	struct UWidget_SpaceElevator_C_ExecuteUbergraph_Widget_SpaceElevator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PXO1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
