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
	 * Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.SetCraftAmountSize
	 */
	struct UWidget_SmallManufacturingScreen_C_SetCraftAmountSize_Params
	{
	public:
		bool                                                       IsSmall;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.UpdateCraftAmountText
	 */
	struct UWidget_SmallManufacturingScreen_C_UpdateCraftAmountText_Params
	{
	public:
		double                                                     Percent;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.SetCraftAmount
	 */
	struct UWidget_SmallManufacturingScreen_C_SetCraftAmount_Params
	{
	public:
		int32_t                                                    mCraftAmount;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VFM7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.SetIsWorkshop
	 */
	struct UWidget_SmallManufacturingScreen_C_SetIsWorkshop_Params
	{
	public:
		bool                                                       mIsWorkshop;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.SetHasSelectedRecipe
	 */
	struct UWidget_SmallManufacturingScreen_C_SetHasSelectedRecipe_Params
	{
	public:
		bool                                                       HasRecipeSelected;                                       // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.HideWarning
	 */
	struct UWidget_SmallManufacturingScreen_C_HideWarning_Params
	{	};

	/**
	 * Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.ShowWarning
	 */
	struct UWidget_SmallManufacturingScreen_C_ShowWarning_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.OnCraft
	 */
	struct UWidget_SmallManufacturingScreen_C_OnCraft_Params
	{	};

	/**
	 * Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.OnCraftCompleted
	 */
	struct UWidget_SmallManufacturingScreen_C_OnCraftCompleted_Params
	{	};

	/**
	 * Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.GetProgressbarPercent
	 */
	struct UWidget_SmallManufacturingScreen_C_GetProgressbarPercent_Params
	{
	public:
		double                                                     Percent;                                                 // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.SetProgressBarPercent
	 */
	struct UWidget_SmallManufacturingScreen_C_SetProgressBarPercent_Params
	{
	public:
		double                                                     InPercent;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.PreConstruct
	 */
	struct UWidget_SmallManufacturingScreen_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.Construct
	 */
	struct UWidget_SmallManufacturingScreen_C_Construct_Params
	{	};

	/**
	 * Function Widget_SmallManufacturingScreen.Widget_SmallManufacturingScreen_C.ExecuteUbergraph_Widget_SmallManufacturingScreen
	 */
	struct UWidget_SmallManufacturingScreen_C_ExecuteUbergraph_Widget_SmallManufacturingScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
