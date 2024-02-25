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
	 * Function Widget_ActiveSchematicCost.Widget_ActiveSchematicCost_C.GetNumIngredientsPaidOff
	 */
	struct UWidget_ActiveSchematicCost_C_GetNumIngredientsPaidOff_Params
	{
	public:
		int32_t                                                    NumItems;                                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ActiveSchematicCost.Widget_ActiveSchematicCost_C.GetIngredient
	 */
	struct UWidget_ActiveSchematicCost_C_GetIngredient_Params
	{
	public:
		struct FItemAmount                                         ingredient;                                              // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function Widget_ActiveSchematicCost.Widget_ActiveSchematicCost_C.UpdateTimer
	 */
	struct UWidget_ActiveSchematicCost_C_UpdateTimer_Params
	{	};

	/**
	 * Function Widget_ActiveSchematicCost.Widget_ActiveSchematicCost_C.Construct
	 */
	struct UWidget_ActiveSchematicCost_C_Construct_Params
	{	};

	/**
	 * Function Widget_ActiveSchematicCost.Widget_ActiveSchematicCost_C.Destruct
	 */
	struct UWidget_ActiveSchematicCost_C_Destruct_Params
	{	};

	/**
	 * Function Widget_ActiveSchematicCost.Widget_ActiveSchematicCost_C.OnUpdateSlotSize
	 */
	struct UWidget_ActiveSchematicCost_C_OnUpdateSlotSize_Params
	{
	public:
		class FString                                              updatedCvar;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ActiveSchematicCost.Widget_ActiveSchematicCost_C.ExecuteUbergraph_Widget_ActiveSchematicCost
	 */
	struct UWidget_ActiveSchematicCost_C_ExecuteUbergraph_Widget_ActiveSchematicCost_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
