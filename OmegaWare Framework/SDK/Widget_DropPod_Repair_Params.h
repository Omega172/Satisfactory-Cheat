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
	 * Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.GetHasAllRepairParts
	 */
	struct UWidget_DropPod_Repair_C_GetHasAllRepairParts_Params
	{
	public:
		bool                                                       HasAllParts;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8LIO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.SetHasDoorBeenOpened
	 */
	struct UWidget_DropPod_Repair_C_SetHasDoorBeenOpened_Params
	{	};

	/**
	 * Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.SetupScreenText
	 */
	struct UWidget_DropPod_Repair_C_SetupScreenText_Params
	{	};

	/**
	 * Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.SetupCostSlot
	 */
	struct UWidget_DropPod_Repair_C_SetupCostSlot_Params
	{	};

	/**
	 * Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.GetHasPartsAndPower
	 */
	struct UWidget_DropPod_Repair_C_GetHasPartsAndPower_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.GetRepairButtonVisibility
	 */
	struct UWidget_DropPod_Repair_C_GetRepairButtonVisibility_Params
	{
	public:
		ESlateVisibility                                           ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.GetRepairConditionText
	 */
	struct UWidget_DropPod_Repair_C_GetRepairConditionText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.BndEvt__mGrabAllButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature
	 */
	struct UWidget_DropPod_Repair_C_BndEvt__mGrabAllButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.Init
	 */
	struct UWidget_DropPod_Repair_C_Init_Params
	{	};

	/**
	 * Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.OnDoorOpen
	 */
	struct UWidget_DropPod_Repair_C_OnDoorOpen_Params
	{	};

	/**
	 * Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.PodUnlocked
	 */
	struct UWidget_DropPod_Repair_C_PodUnlocked_Params
	{	};

	/**
	 * Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.SpawnSmoke
	 */
	struct UWidget_DropPod_Repair_C_SpawnSmoke_Params
	{	};

	/**
	 * Function Widget_DropPod_Repair.Widget_DropPod_Repair_C.ExecuteUbergraph_Widget_DropPod_Repair
	 */
	struct UWidget_DropPod_Repair_C_ExecuteUbergraph_Widget_DropPod_Repair_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XXUN[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
