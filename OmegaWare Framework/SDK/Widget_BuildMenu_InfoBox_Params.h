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
	 * Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetupBlueprintIcon
	 */
	struct UWidget_BuildMenu_InfoBox_C_SetupBlueprintIcon_Params
	{	};

	/**
	 * Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetBlueprintRecipe
	 */
	struct UWidget_BuildMenu_InfoBox_C_SetBlueprintRecipe_Params
	{
	public:
		class UFGBlueprintDescriptor*                              blueprintDescriptor;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FBlueprintRecord                                    BlueprintRecord;                                         // 0x0008(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetupCustomiserIcon
	 */
	struct UWidget_BuildMenu_InfoBox_C_SetupCustomiserIcon_Params
	{	};

	/**
	 * Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetCustomisationRecipe
	 */
	struct UWidget_BuildMenu_InfoBox_C_SetCustomisationRecipe_Params
	{
	public:
		class UClass*                                              CustomisationRecipe;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.AnimateIcon
	 */
	struct UWidget_BuildMenu_InfoBox_C_AnimateIcon_Params
	{	};

	/**
	 * Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetCostSlots
	 */
	struct UWidget_BuildMenu_InfoBox_C_SetCostSlots_Params
	{
	public:
		TArray<struct FItemAmount>                                 cost;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       TakeFromCentralStorage;                                  // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetCustomIconWidget
	 */
	struct UWidget_BuildMenu_InfoBox_C_SetCustomIconWidget_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetVisibleElements
	 */
	struct UWidget_BuildMenu_InfoBox_C_SetVisibleElements_Params
	{
	public:
		bool                                                       Name;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Descripction;                                            // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       StatsAndCost;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetName
	 */
	struct UWidget_BuildMenu_InfoBox_C_SetName_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetIcon
	 */
	struct UWidget_BuildMenu_InfoBox_C_SetIcon_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetDescription
	 */
	struct UWidget_BuildMenu_InfoBox_C_SetDescription_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetBuildRecipe
	 */
	struct UWidget_BuildMenu_InfoBox_C_SetBuildRecipe_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		TArray<class UClass*>                                      AvailableRecipes;                                        // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class AFGBuildGun*                                         BuildGun;                                                // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetByProductIconVisibility
	 */
	struct UWidget_BuildMenu_InfoBox_C_SetByProductIconVisibility_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.SetStatsVisibility
	 */
	struct UWidget_BuildMenu_InfoBox_C_SetStatsVisibility_Params
	{	};

	/**
	 * Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.AnimateCostSlots
	 */
	struct UWidget_BuildMenu_InfoBox_C_AnimateCostSlots_Params
	{	};

	/**
	 * Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.PreConstruct
	 */
	struct UWidget_BuildMenu_InfoBox_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.Construct
	 */
	struct UWidget_BuildMenu_InfoBox_C_Construct_Params
	{	};

	/**
	 * Function Widget_BuildMenu_InfoBox.Widget_BuildMenu_InfoBox_C.ExecuteUbergraph_Widget_BuildMenu_InfoBox
	 */
	struct UWidget_BuildMenu_InfoBox_C_ExecuteUbergraph_Widget_BuildMenu_InfoBox_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
