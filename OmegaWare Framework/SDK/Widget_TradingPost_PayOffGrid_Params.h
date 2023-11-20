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
	 * Function Widget_TradingPost_PayOffGrid.Widget_TradingPost_PayOffGrid_C.OnDropInventorySlot
	 */
	struct UWidget_TradingPost_PayOffGrid_C_OnDropInventorySlot_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasStackMoved;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TradingPost_PayOffGrid.Widget_TradingPost_PayOffGrid_C.DropInventorySlotStack
	 */
	struct UWidget_TradingPost_PayOffGrid_C_DropInventorySlotStack_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TradingPost_PayOffGrid.Widget_TradingPost_PayOffGrid_C.SetUpPayOffSlots
	 */
	struct UWidget_TradingPost_PayOffGrid_C_SetUpPayOffSlots_Params
	{
	public:
		class UClass*                                              mSchematic;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_TradingPost_PayOffGrid.Widget_TradingPost_PayOffGrid_C.Construct
	 */
	struct UWidget_TradingPost_PayOffGrid_C_Construct_Params
	{	};

	/**
	 * Function Widget_TradingPost_PayOffGrid.Widget_TradingPost_PayOffGrid_C.ExecuteUbergraph_Widget_TradingPost_PayOffGrid
	 */
	struct UWidget_TradingPost_PayOffGrid_C_ExecuteUbergraph_Widget_TradingPost_PayOffGrid_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
