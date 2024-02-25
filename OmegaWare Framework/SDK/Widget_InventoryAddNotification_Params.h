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
	 * Function Widget_InventoryAddNotification.Widget_InventoryAddNotification_C.RemoveOverflowOfItems
	 */
	struct UWidget_InventoryAddNotification_C_RemoveOverflowOfItems_Params
	{	};

	/**
	 * Function Widget_InventoryAddNotification.Widget_InventoryAddNotification_C.RemoveNotification
	 */
	struct UWidget_InventoryAddNotification_C_RemoveNotification_Params
	{
	public:
		class UClass*                                              mItemClass;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventoryAddNotification.Widget_InventoryAddNotification_C.BindOnInventoryAddAndCacheChar
	 */
	struct UWidget_InventoryAddNotification_C_BindOnInventoryAddAndCacheChar_Params
	{	};

	/**
	 * Function Widget_InventoryAddNotification.Widget_InventoryAddNotification_C.UnbindOnInventoryAdd
	 */
	struct UWidget_InventoryAddNotification_C_UnbindOnInventoryAdd_Params
	{
	public:
		class AFGCharacterPlayer*                                  FromCharacter;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventoryAddNotification.Widget_InventoryAddNotification_C.OnItemAdded
	 */
	struct UWidget_InventoryAddNotification_C_OnItemAdded_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    numAdded;                                                // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E17R[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_InventoryAddNotification.Widget_InventoryAddNotification_C.Destruct
	 */
	struct UWidget_InventoryAddNotification_C_Destruct_Params
	{	};

	/**
	 * Function Widget_InventoryAddNotification.Widget_InventoryAddNotification_C.Tick
	 */
	struct UWidget_InventoryAddNotification_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_InventoryAddNotification.Widget_InventoryAddNotification_C.Construct
	 */
	struct UWidget_InventoryAddNotification_C_Construct_Params
	{	};

	/**
	 * Function Widget_InventoryAddNotification.Widget_InventoryAddNotification_C.ExecuteUbergraph_Widget_InventoryAddNotification
	 */
	struct UWidget_InventoryAddNotification_C_ExecuteUbergraph_Widget_InventoryAddNotification_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
