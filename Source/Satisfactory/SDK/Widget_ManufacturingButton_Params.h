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
	 * Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.UpdateButtonStyle
	 */
	struct UWidget_ManufacturingButton_C_UpdateButtonStyle_Params
	{	};

	/**
	 * Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.CheckIsSelected
	 */
	struct UWidget_ManufacturingButton_C_CheckIsSelected_Params
	{
	public:
		bool                                                       mIsSelected;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.GetRecipeName
	 */
	struct UWidget_ManufacturingButton_C_GetRecipeName_Params
	{	};

	/**
	 * Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.SetRecipeIcon
	 */
	struct UWidget_ManufacturingButton_C_SetRecipeIcon_Params
	{	};

	/**
	 * Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnMouseButtonDown
	 */
	struct UWidget_ManufacturingButton_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UWidget_ManufacturingButton_C_BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_ManufacturingButton_C_BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_ManufacturingButton_C_BndEvt__mRecipeButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.Construct
	 */
	struct UWidget_ManufacturingButton_C_Construct_Params
	{	};

	/**
	 * Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.PreConstruct
	 */
	struct UWidget_ManufacturingButton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.Destruct
	 */
	struct UWidget_ManufacturingButton_C_Destruct_Params
	{	};

	/**
	 * Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.ExecuteUbergraph_Widget_ManufacturingButton
	 */
	struct UWidget_ManufacturingButton_C_ExecuteUbergraph_Widget_ManufacturingButton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NOC6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnStopHoveringManufacturingRecipe__DelegateSignature
	 */
	struct UWidget_ManufacturingButton_C_OnStopHoveringManufacturingRecipe__DelegateSignature_Params
	{
	public:
		class UClass*                                              UnhoveredRecipe;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnManufacturingRecipeHovered__DelegateSignature
	 */
	struct UWidget_ManufacturingButton_C_OnManufacturingRecipeHovered__DelegateSignature_Params
	{
	public:
		class UClass*                                              RecipeHover;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_ManufacturingButton.Widget_ManufacturingButton_C.OnManufacturingRecipeClicked__DelegateSignature
	 */
	struct UWidget_ManufacturingButton_C_OnManufacturingRecipeClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              recipe;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
