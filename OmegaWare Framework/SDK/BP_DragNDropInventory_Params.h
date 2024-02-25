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
	 * Function BP_DragNDropInventory.BP_DragNDropInventory_C.Dragged
	 */
	struct UBP_DragNDropInventory_C_Dragged_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_DragNDropInventory.BP_DragNDropInventory_C.DragCancelled
	 */
	struct UBP_DragNDropInventory_C_DragCancelled_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_DragNDropInventory.BP_DragNDropInventory_C.Drop
	 */
	struct UBP_DragNDropInventory_C_Drop_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_DragNDropInventory.BP_DragNDropInventory_C.ExecuteUbergraph_BP_DragNDropInventory
	 */
	struct UBP_DragNDropInventory_C_ExecuteUbergraph_BP_DragNDropInventory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PANV[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
