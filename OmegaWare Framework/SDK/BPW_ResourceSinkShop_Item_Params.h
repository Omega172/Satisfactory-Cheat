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
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.SetIsDarkMode
	 */
	struct UBPW_ResourceSinkShop_Item_C_SetIsDarkMode_Params
	{
	public:
		bool                                                       mIsDarkMode;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_5Z9D[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.UpdateSchematicStateFeedback
	 */
	struct UBPW_ResourceSinkShop_Item_C_UpdateSchematicStateFeedback_Params
	{
	public:
		ESlateVisibility                                           Visibility;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VSRZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Text;                                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             Icon;                                                    // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        iconColor;                                               // 0x0028(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        TextColor;                                               // 0x0038(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.UpdateOnFavouriteAddedFeedback
	 */
	struct UBPW_ResourceSinkShop_Item_C_UpdateOnFavouriteAddedFeedback_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.UpdateFavoriteButtonState
	 */
	struct UBPW_ResourceSinkShop_Item_C_UpdateFavoriteButtonState_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.GetFavoriteState
	 */
	struct UBPW_ResourceSinkShop_Item_C_GetFavoriteState_Params
	{
	public:
		bool                                                       IsFavorite;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NDC2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.OnFavoriteClicked
	 */
	struct UBPW_ResourceSinkShop_Item_C_OnFavoriteClicked_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.OnCartClicked
	 */
	struct UBPW_ResourceSinkShop_Item_C_OnCartClicked_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.GetButtonState
	 */
	struct UBPW_ResourceSinkShop_Item_C_GetButtonState_Params
	{
	public:
		E_ResourceSinkShop_Item_State                              State;                                                   // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.OpenTooltipMenu
	 */
	struct UBPW_ResourceSinkShop_Item_C_OpenTooltipMenu_Params
	{
	public:
		class UWidget*                                             ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.UpdateButtonState
	 */
	struct UBPW_ResourceSinkShop_Item_C_UpdateButtonState_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.GetItemCost
	 */
	struct UBPW_ResourceSinkShop_Item_C_GetItemCost_Params
	{
	public:
		int32_t                                                    cost;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DA6U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.GetItemIcon
	 */
	struct UBPW_ResourceSinkShop_Item_C_GetItemIcon_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.GetItemName
	 */
	struct UBPW_ResourceSinkShop_Item_C_GetItemName_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.Construct
	 */
	struct UBPW_ResourceSinkShop_Item_C_Construct_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__mShopItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_Item_C_BndEvt__mShopItemButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__mShopItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_Item_C_BndEvt__mShopItemButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.SimulateOnHovered
	 */
	struct UBPW_ResourceSinkShop_Item_C_SimulateOnHovered_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.SimulateOnUnhovered
	 */
	struct UBPW_ResourceSinkShop_Item_C_SimulateOnUnhovered_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__mShopItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_Item_C_BndEvt__mShopItemButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__BPW_ResourceSinkShop_Item_mAddToFavButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_Item_C_BndEvt__BPW_ResourceSinkShop_Item_mAddToFavButton_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__BPW_ResourceSinkShop_Item_mAddToFavButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_Item_C_BndEvt__BPW_ResourceSinkShop_Item_mAddToFavButton_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__BPW_ResourceSinkShop_Item_mAddToCartButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_Item_C_BndEvt__BPW_ResourceSinkShop_Item_mAddToCartButton_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__BPW_ResourceSinkShop_Item_mAddToCartButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_Item_C_BndEvt__BPW_ResourceSinkShop_Item_mAddToCartButton_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__BPW_ResourceSinkShop_Item_mAddToCartButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_Item_C_BndEvt__BPW_ResourceSinkShop_Item_mAddToCartButton_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.BndEvt__BPW_ResourceSinkShop_Item_mAddToFavButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_Item_C_BndEvt__BPW_ResourceSinkShop_Item_mAddToFavButton_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.PreConstruct
	 */
	struct UBPW_ResourceSinkShop_Item_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.ExecuteUbergraph_BPW_ResourceSinkShop_Item
	 */
	struct UBPW_ResourceSinkShop_Item_C_ExecuteUbergraph_BPW_ResourceSinkShop_Item_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.OnAddToFavouriteClicked__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_Item_C_OnAddToFavouriteClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              FGSchematic;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.OnAddToCartClicked__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_Item_C_OnAddToCartClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              mSchematic;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.OnShopItemHovered__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_Item_C_OnShopItemHovered__DelegateSignature_Params
	{
	public:
		class UClass*                                              FGSchematic;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UBPW_ResourceSinkShop_Item_C*                        Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop_Item.BPW_ResourceSinkShop_Item_C.OnShopItemClicked__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_Item_C_OnShopItemClicked__DelegateSignature_Params
	{
	public:
		class UClass*                                              FGSchematic;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
