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
	 * Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.SetRecipeAmount
	 */
	struct UWidget_ManufacturingIOSlot_C_SetRecipeAmount_Params
	{
	public:
		struct FItemAmount                                         ItemAmount;                                              // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	};

	/**
	 * Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.SetupInventory
	 */
	struct UWidget_ManufacturingIOSlot_C_SetupInventory_Params
	{	};

	/**
	 * Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.UpdateNumPerSecond
	 */
	struct UWidget_ManufacturingIOSlot_C_UpdateNumPerSecond_Params
	{	};

	/**
	 * Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.GetItemAmount
	 */
	struct UWidget_ManufacturingIOSlot_C_GetItemAmount_Params
	{
	public:
		struct FItemAmount                                         ItemAmount;                                              // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.Construct
	 */
	struct UWidget_ManufacturingIOSlot_C_Construct_Params
	{	};

	/**
	 * Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.UpdateCostSlot
	 */
	struct UWidget_ManufacturingIOSlot_C_UpdateCostSlot_Params
	{	};

	/**
	 * Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.UpdateInfo
	 */
	struct UWidget_ManufacturingIOSlot_C_UpdateInfo_Params
	{	};

	/**
	 * Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.Destruct
	 */
	struct UWidget_ManufacturingIOSlot_C_Destruct_Params
	{	};

	/**
	 * Function Widget_ManufacturingIOSlot.Widget_ManufacturingIOSlot_C.ExecuteUbergraph_Widget_ManufacturingIOSlot
	 */
	struct UWidget_ManufacturingIOSlot_C_ExecuteUbergraph_Widget_ManufacturingIOSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
