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
	 * Function Widget_SpaceRabbit.Widget_SpaceRabbit_C.DropInventorySlotStack
	 */
	struct UWidget_SpaceRabbit_C_DropInventorySlotStack_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasStackMoved;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SpaceRabbit.Widget_SpaceRabbit_C.Cleanup
	 */
	struct UWidget_SpaceRabbit_C_Cleanup_Params
	{	};

	/**
	 * Function Widget_SpaceRabbit.Widget_SpaceRabbit_C.Init
	 */
	struct UWidget_SpaceRabbit_C_Init_Params
	{	};

	/**
	 * Function Widget_SpaceRabbit.Widget_SpaceRabbit_C.Construct
	 */
	struct UWidget_SpaceRabbit_C_Construct_Params
	{	};

	/**
	 * Function Widget_SpaceRabbit.Widget_SpaceRabbit_C.Destruct
	 */
	struct UWidget_SpaceRabbit_C_Destruct_Params
	{	};

	/**
	 * Function Widget_SpaceRabbit.Widget_SpaceRabbit_C.InitName
	 */
	struct UWidget_SpaceRabbit_C_InitName_Params
	{	};

	/**
	 * Function Widget_SpaceRabbit.Widget_SpaceRabbit_C.UpdateName
	 */
	struct UWidget_SpaceRabbit_C_UpdateName_Params
	{
	public:
		class FText                                                NewName;                                                 // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_SpaceRabbit.Widget_SpaceRabbit_C.OnNameObjectTextChanged
	 */
	struct UWidget_SpaceRabbit_C_OnNameObjectTextChanged_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_SpaceRabbit.Widget_SpaceRabbit_C.BndEvt__Widget_SpaceRabbit_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature
	 */
	struct UWidget_SpaceRabbit_C_BndEvt__Widget_SpaceRabbit_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_SpaceRabbit.Widget_SpaceRabbit_C.ExecuteUbergraph_Widget_SpaceRabbit
	 */
	struct UWidget_SpaceRabbit_C_ExecuteUbergraph_Widget_SpaceRabbit_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
