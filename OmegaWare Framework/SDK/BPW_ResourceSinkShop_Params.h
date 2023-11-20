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
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnSchematicPurchased
	 */
	struct UBPW_ResourceSinkShop_C_OnSchematicPurchased_Params
	{
	public:
		class UClass*                                              purchasedSchematic;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.SetShopToDarkMode
	 */
	struct UBPW_ResourceSinkShop_C_SetShopToDarkMode_Params
	{
	public:
		bool                                                       IsDarkMode;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_79Q7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.RemoveBindings
	 */
	struct UBPW_ResourceSinkShop_C_RemoveBindings_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.InventoryItemsRemoved
	 */
	struct UBPW_ResourceSinkShop_C_InventoryItemsRemoved_Params
	{
	public:
		class UClass*                                              ItemClass;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
		int32_t                                                    numRemoved;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.SetupBindings
	 */
	struct UBPW_ResourceSinkShop_C_SetupBindings_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.RefreshCart
	 */
	struct UBPW_ResourceSinkShop_C_RefreshCart_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.FetchShoppingCart
	 */
	struct UBPW_ResourceSinkShop_C_FetchShoppingCart_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.StoreShoppingCart
	 */
	struct UBPW_ResourceSinkShop_C_StoreShoppingCart_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.SaveAsShopFavourite
	 */
	struct UBPW_ResourceSinkShop_C_SaveAsShopFavourite_Params
	{
	public:
		class AFGPlayerState*                                      PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              schematic;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.RemoveAsShopFavourite
	 */
	struct UBPW_ResourceSinkShop_C_RemoveAsShopFavourite_Params
	{
	public:
		class AFGPlayerState*                                      PlayerState;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              schematic;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.GetCurrentSchematicCategoryData
	 */
	struct UBPW_ResourceSinkShop_C_GetCurrentSchematicCategoryData_Params
	{
	public:
		struct FSchematicCategoryData                              SchematicCategoryData;                                   // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.CacheSchematicCategoryData
	 */
	struct UBPW_ResourceSinkShop_C_CacheSchematicCategoryData_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.CheckShopInventorySpaceForAllSchematics
	 */
	struct UBPW_ResourceSinkShop_C_CheckShopInventorySpaceForAllSchematics_Params
	{
	public:
		bool                                                       hasSpace;                                                // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LZNZ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnAddToFavouriteClickedInFavouriteTab
	 */
	struct UBPW_ResourceSinkShop_C_OnAddToFavouriteClickedInFavouriteTab_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.SetSearchbarUnfocused
	 */
	struct UBPW_ResourceSinkShop_C_SetSearchbarUnfocused_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.SetSearchbarFocused
	 */
	struct UBPW_ResourceSinkShop_C_SetSearchbarFocused_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnKeyUp
	 */
	struct UBPW_ResourceSinkShop_C_OnKeyUp_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0078(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.CloseProductPageAndShowShopItems
	 */
	struct UBPW_ResourceSinkShop_C_CloseProductPageAndShowShopItems_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.ClearAndHideSearchResults
	 */
	struct UBPW_ResourceSinkShop_C_ClearAndHideSearchResults_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnSearchCreateResult
	 */
	struct UBPW_ResourceSinkShop_C_OnSearchCreateResult_Params
	{
	public:
		class FText                                                mSearchText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnFavouritesClicked
	 */
	struct UBPW_ResourceSinkShop_C_OnFavouritesClicked_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.PopulateFavourites
	 */
	struct UBPW_ResourceSinkShop_C_PopulateFavourites_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnAddToFavouriteClicked
	 */
	struct UBPW_ResourceSinkShop_C_OnAddToFavouriteClicked_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnShopProductClicked
	 */
	struct UBPW_ResourceSinkShop_C_OnShopProductClicked_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnStorageOpened
	 */
	struct UBPW_ResourceSinkShop_C_OnStorageOpened_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.UpdateBanner
	 */
	struct UBPW_ResourceSinkShop_C_UpdateBanner_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.Update Amount Of Coupons In Player Inventory
	 */
	struct UBPW_ResourceSinkShop_C_UpdateAmountOfCouponsInPlayerInventory_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.ListButtonOnClicked
	 */
	struct UBPW_ResourceSinkShop_C_ListButtonOnClicked_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9R90[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_ListButton_C*                                Button;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.DropInventorySlotStack
	 */
	struct UBPW_ResourceSinkShop_C_DropInventorySlotStack_Params
	{
	public:
		class UWidget_InventorySlot_C*                             InventorySlot;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		bool                                                       WasStackMoved;                                           // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.CheckItemsInCart
	 */
	struct UBPW_ResourceSinkShop_C_CheckItemsInCart_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.UpdateShopButtonStates
	 */
	struct UBPW_ResourceSinkShop_C_UpdateShopButtonStates_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.InitShop
	 */
	struct UBPW_ResourceSinkShop_C_InitShop_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.ChangeItemAmountInCart
	 */
	struct UBPW_ResourceSinkShop_C_ChangeItemAmountInCart_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ItemAmount;                                              // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JO30[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.UpdateCartAmount
	 */
	struct UBPW_ResourceSinkShop_C_UpdateCartAmount_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.GetTotalCost
	 */
	struct UBPW_ResourceSinkShop_C_GetTotalCost_Params
	{
	public:
		int32_t                                                    TotalCost;                                               // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnBuyAll
	 */
	struct UBPW_ResourceSinkShop_C_OnBuyAll_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.UpdateShoppingCartList
	 */
	struct UBPW_ResourceSinkShop_C_UpdateShoppingCartList_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnItemRemovedFromCart
	 */
	struct UBPW_ResourceSinkShop_C_OnItemRemovedFromCart_Params
	{
	public:
		class UClass*                                              mSchematic;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnMouseButtonDown
	 */
	struct UBPW_ResourceSinkShop_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OpenCartMenu
	 */
	struct UBPW_ResourceSinkShop_C_OpenCartMenu_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.PopulateShop
	 */
	struct UBPW_ResourceSinkShop_C_PopulateShop_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnSchematicCategoryClicked
	 */
	struct UBPW_ResourceSinkShop_C_OnSchematicCategoryClicked_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.CreateCategoryButtons
	 */
	struct UBPW_ResourceSinkShop_C_CreateCategoryButtons_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnShopSchematicHovered
	 */
	struct UBPW_ResourceSinkShop_C_OnShopSchematicHovered_Params
	{
	public:
		class UClass*                                              mSchematic;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UBPW_ResourceSinkShop_Item_C*                        mButton;                                                 // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.OnAddToCartClicked
	 */
	struct UBPW_ResourceSinkShop_C_OnAddToCartClicked_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mWindow_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_C_BndEvt__mWindow_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.Construct
	 */
	struct UBPW_ResourceSinkShop_C_Construct_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_9_OnBuyAllButtonClicked__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_C_BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_9_OnBuyAllButtonClicked__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_10_OnItemAmountChangedInCart__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_C_BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_10_OnItemAmountChangedInCart__DelegateSignature_Params
	{
	public:
		class UClass*                                              schematic;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_11_OnItemRemovedFromCart__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_C_BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_11_OnItemRemovedFromCart__DelegateSignature_Params
	{
	public:
		class UClass*                                              mSchematic;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mWindow_K2Node_ComponentBoundEvent_5_OnTabButtonClicked__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_C_BndEvt__mWindow_K2Node_ComponentBoundEvent_5_OnTabButtonClicked__DelegateSignature_Params
	{
	public:
		int32_t                                                    ButtonIndex;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mCart_Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_C_BndEvt__mCart_Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mFavouritesButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_C_BndEvt__mFavouritesButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mCart_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_C_BndEvt__mCart_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mCart_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_C_BndEvt__mCart_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mFavouritesButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_C_BndEvt__mFavouritesButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mFavouritesButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_C_BndEvt__mFavouritesButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mSearchbar_K2Node_ComponentBoundEvent_16_OnTextChanged__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_C_BndEvt__mSearchbar_K2Node_ComponentBoundEvent_16_OnTextChanged__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__mSearchbar_K2Node_ComponentBoundEvent_17_OnTextComitted__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_C_BndEvt__mSearchbar_K2Node_ComponentBoundEvent_17_OnTextComitted__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		ETextCommit                                                CommitMethod;                                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.Play Welcome Animation
	 */
	struct UBPW_ResourceSinkShop_C_PlayWelcomeAnimation_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.Event Update Cart Button
	 */
	struct UBPW_ResourceSinkShop_C_EventUpdateCartButton_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.BndEvt__BPW_ResourceSinkShop_mShoppingCartList_K2Node_ComponentBoundEvent_15_OnFavouriteChanged__DelegateSignature
	 */
	struct UBPW_ResourceSinkShop_C_BndEvt__BPW_ResourceSinkShop_mShoppingCartList_K2Node_ComponentBoundEvent_15_OnFavouriteChanged__DelegateSignature_Params
	{
	public:
		class UClass*                                              mSchematic;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.Destruct
	 */
	struct UBPW_ResourceSinkShop_C_Destruct_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.On Welcome Animation Finished
	 */
	struct UBPW_ResourceSinkShop_C_OnWelcomeAnimationFinished_Params
	{	};

	/**
	 * Function BPW_ResourceSinkShop.BPW_ResourceSinkShop_C.ExecuteUbergraph_BPW_ResourceSinkShop
	 */
	struct UBPW_ResourceSinkShop_C_ExecuteUbergraph_BPW_ResourceSinkShop_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
