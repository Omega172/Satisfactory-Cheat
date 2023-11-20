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
	 * Function Widget_TooltipInventorySlots.Widget_TooltipInventorySlots_C.GetExtraInventorySlotText
	 */
	struct UWidget_TooltipInventorySlots_C_GetExtraInventorySlotText_Params
	{
	public:
		class FText                                                NewParam;                                                // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Widget_TooltipInventorySlots.Widget_TooltipInventorySlots_C.GetExtraArmsSlotText
	 */
	struct UWidget_TooltipInventorySlots_C_GetExtraArmsSlotText_Params
	{
	public:
		class FText                                                NewParam;                                                // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function Widget_TooltipInventorySlots.Widget_TooltipInventorySlots_C.Construct
	 */
	struct UWidget_TooltipInventorySlots_C_Construct_Params
	{	};

	/**
	 * Function Widget_TooltipInventorySlots.Widget_TooltipInventorySlots_C.ExecuteUbergraph_Widget_TooltipInventorySlots
	 */
	struct UWidget_TooltipInventorySlots_C_ExecuteUbergraph_Widget_TooltipInventorySlots_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HZHB[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
