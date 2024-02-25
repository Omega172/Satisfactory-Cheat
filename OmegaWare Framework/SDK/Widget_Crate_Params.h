#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
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
	 * Function Widget_Crate.Widget_Crate_C.DropInventorySlotStack
	 */
	struct UWidget_Crate_C_DropInventorySlotStack_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasStackMoved;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Crate.Widget_Crate_C.Cleanup
	 */
	struct UWidget_Crate_C_Cleanup_Params
	{	};

	/**
	 * Function Widget_Crate.Widget_Crate_C.Init
	 */
	struct UWidget_Crate_C_Init_Params
	{	};

	/**
	 * Function Widget_Crate.Widget_Crate_C.Tick
	 */
	struct UWidget_Crate_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Crate.Widget_Crate_C.Construct
	 */
	struct UWidget_Crate_C_Construct_Params
	{	};

	/**
	 * Function Widget_Crate.Widget_Crate_C.Destruct
	 */
	struct UWidget_Crate_C_Destruct_Params
	{	};

	/**
	 * Function Widget_Crate.Widget_Crate_C.OnGrabAll
	 */
	struct UWidget_Crate_C_OnGrabAll_Params
	{	};

	/**
	 * Function Widget_Crate.Widget_Crate_C.ExecuteUbergraph_Widget_Crate
	 */
	struct UWidget_Crate_C_ExecuteUbergraph_Widget_Crate_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
