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
	 * Function Widget_SchematicRewardItem.Widget_SchematicRewardItem_C.GetRecipeIconFeedback
	 */
	struct UWidget_SchematicRewardItem_C_GetRecipeIconFeedback_Params
	{
	public:
		bool                                                       IsPurchased;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsLocked;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SchematicRewardItem.Widget_SchematicRewardItem_C.UpdateVisibility
	 */
	struct UWidget_SchematicRewardItem_C_UpdateVisibility_Params
	{	};

	/**
	 * Function Widget_SchematicRewardItem.Widget_SchematicRewardItem_C.SetCategoryIconColor
	 */
	struct UWidget_SchematicRewardItem_C_SetCategoryIconColor_Params
	{
	public:
		bool                                                       IsPurchased;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsLocked;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SchematicRewardItem.Widget_SchematicRewardItem_C.SetCategoryTexture
	 */
	struct UWidget_SchematicRewardItem_C_SetCategoryTexture_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SchematicRewardItem.Widget_SchematicRewardItem_C.GetCategoryIcon
	 */
	struct UWidget_SchematicRewardItem_C_GetCategoryIcon_Params
	{	};

	/**
	 * Function Widget_SchematicRewardItem.Widget_SchematicRewardItem_C.GetButtonColor
	 */
	struct UWidget_SchematicRewardItem_C_GetButtonColor_Params
	{
	public:
		bool                                                       IsHovered;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsPurchased;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsLocked;                                                // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SchematicRewardItem.Widget_SchematicRewardItem_C.GetCategoryIconBackgroundColor
	 */
	struct UWidget_SchematicRewardItem_C_GetCategoryIconBackgroundColor_Params
	{
	public:
		bool                                                       IsPurchased;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsLocked;                                                // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SchematicRewardItem.Widget_SchematicRewardItem_C.IsValidRewardItem
	 */
	struct UWidget_SchematicRewardItem_C_IsValidRewardItem_Params
	{
	public:
		bool                                                       IsValid;                                                 // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_SchematicRewardItem.Widget_SchematicRewardItem_C.OnRewardClicked
	 */
	struct UWidget_SchematicRewardItem_C_OnRewardClicked_Params
	{	};

	/**
	 * Function Widget_SchematicRewardItem.Widget_SchematicRewardItem_C.GetName
	 */
	struct UWidget_SchematicRewardItem_C_GetName_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_SchematicRewardItem.Widget_SchematicRewardItem_C.GetIcon
	 */
	struct UWidget_SchematicRewardItem_C_GetIcon_Params
	{
	public:
		struct FSlateBrush                                         ReturnValue;                                             // 0x0000(0x00D0)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_SchematicRewardItem.Widget_SchematicRewardItem_C.Construct
	 */
	struct UWidget_SchematicRewardItem_C_Construct_Params
	{	};

	/**
	 * Function Widget_SchematicRewardItem.Widget_SchematicRewardItem_C.BndEvt__mSchematicRecipeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_SchematicRewardItem_C_BndEvt__mSchematicRecipeButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_SchematicRewardItem.Widget_SchematicRewardItem_C.BndEvt__mSchematicRecipeButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
	 */
	struct UWidget_SchematicRewardItem_C_BndEvt__mSchematicRecipeButton_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_SchematicRewardItem.Widget_SchematicRewardItem_C.ExecuteUbergraph_Widget_SchematicRewardItem
	 */
	struct UWidget_SchematicRewardItem_C_ExecuteUbergraph_Widget_SchematicRewardItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SM02[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_SchematicRewardItem.Widget_SchematicRewardItem_C.OnSchematicUnhovered__DelegateSignature
	 */
	struct UWidget_SchematicRewardItem_C_OnSchematicUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_SchematicRewardItem.Widget_SchematicRewardItem_C.OnSchematicHovered__DelegateSignature
	 */
	struct UWidget_SchematicRewardItem_C_OnSchematicHovered__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
