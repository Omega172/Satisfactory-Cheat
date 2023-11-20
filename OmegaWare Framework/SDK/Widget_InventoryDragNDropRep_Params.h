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
	 * Function Widget_InventoryDragNDropRep.Widget_InventoryDragNDropRep_C.Construct
	 */
	struct UWidget_InventoryDragNDropRep_C_Construct_Params
	{	};

	/**
	 * Function Widget_InventoryDragNDropRep.Widget_InventoryDragNDropRep_C.Destruct
	 */
	struct UWidget_InventoryDragNDropRep_C_Destruct_Params
	{	};

	/**
	 * Function Widget_InventoryDragNDropRep.Widget_InventoryDragNDropRep_C.CheckSlot
	 */
	struct UWidget_InventoryDragNDropRep_C_CheckSlot_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		int32_t                                                    numRemoved;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventoryDragNDropRep.Widget_InventoryDragNDropRep_C.ExecuteUbergraph_Widget_InventoryDragNDropRep
	 */
	struct UWidget_InventoryDragNDropRep_C_ExecuteUbergraph_Widget_InventoryDragNDropRep_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E9Z6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
