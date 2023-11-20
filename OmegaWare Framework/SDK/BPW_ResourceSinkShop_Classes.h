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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass BPW_ResourceSinkShop.BPW_ResourceSinkShop_C
	 * Size -> 0x01E5 (FullSize[0x0538] - InheritedSize[0x0353])
	 */
	class UBPW_ResourceSinkShop_C : public UWidget_UseableBase_C
	{
	public:
		unsigned char                                              UnknownData_J1IG[0x5];                                   // 0x0353(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    WelcomeAnim;                                             // 0x0360(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    HoverFav;                                                // 0x0368(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    HoverCart;                                               // 0x0370(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AddedToFavourites;                                       // 0x0378(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AddedToCart;                                             // 0x0380(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeInCategory;                                          // 0x0388(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UOverlay*                                            AmountInCartOverlay;                                     // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Background;                                              // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_ResourceSinkShop_Banner_C*                      BPW_ResourceSinkShop_Banner;                             // 0x03A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              CartButtonIcon;                                          // 0x03A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              FavButtonIcon;                                           // 0x03B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ficsitlogoBG;                                            // 0x03B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mAmountInShoppingCart;                                   // 0x03C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mAmountOfCouponsText;                                    // 0x03C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             mCart_Button;                                            // 0x03D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      mCategoryContainer;                                      // 0x03D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             mFavouritesButton;                                       // 0x03E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWrapBox*                                            mFavouritesContainer;                                    // 0x03E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mHeaderBG;                                               // 0x03F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mProductPageOverlay;                                     // 0x03F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mPurchasesdivider;                                       // 0x0400(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_InputBox_C*                                  mSearchbar;                                              // 0x0408(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWrapBox*                                            mSearchResultsContainer;                                 // 0x0410(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Inventory_C*                                 mShopInventory;                                          // 0x0418(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_ResourceSink_CartList_Container_C*              mShoppingCartList;                                       // 0x0420(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          mShopScrollbox;                                          // 0x0428(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mSubcategoryContainer;                                   // 0x0430(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mWelcomePanel;                                           // 0x0438(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      mWelcomeText;                                            // 0x0440(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_DarkMode_C*                           mWindow;                                                 // 0x0448(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PurchasesText;                                           // 0x0450(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              shopbg;                                                  // 0x0458(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SlidingTabs_C*                               ShopSlidingTabs;                                         // 0x0460(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_AlternateContentBackground_DarkMode_C* Widget_Window_AlternateContentBackground_DarkMode;       // 0x0468(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_ResourceSinkShop_Item_C*                        mHoveredButton;                                          // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UClass*                                              mHoveredSchematic;                                       // 0x0478(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UClass*                                              mSelectedSchematicCategory;                              // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      mAllSchematicCategories;                                 // 0x0488(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mIsSearchFocused;                                        // 0x0498(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mSearchWaitForKeyUp;                                     // 0x0499(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YI4W[0x6];                                   // 0x049A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        mSearchResultHoveredTimerHandle;                         // 0x04A0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<class UClass*, struct FResourceSinkShop_CartItem_Struct> mCartItemStruct;                                         // 0x04A8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class AFGBuildableResourceSinkShop*                        mResourceSinkShop;                                       // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class UBPW_ResourceSinkShop_Item_C*>                mShopItemButtons;                                        // 0x0500(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<struct FResourceSinkShop_Banner_Struct>             mBannerStruct;                                           // 0x0510(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		class UBPW_ResourceSinkShop_ProductPage_C*                 mProductPageWidget;                                      // 0x0520(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		TArray<struct FSchematicCategoryData>                      mCachedSchematicCategoryData;                            // 0x0528(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnSchematicPurchased(class UClass* purchasedSchematic);
		void SetShopToDarkMode(bool IsDarkMode);
		void RemoveBindings();
		void InventoryItemsRemoved(class UClass* ItemClass, int32_t numRemoved);
		void SetupBindings();
		void RefreshCart();
		void FetchShoppingCart();
		void StoreShoppingCart();
		void SaveAsShopFavourite(class AFGPlayerState* PlayerState, class UClass* schematic);
		void RemoveAsShopFavourite(class AFGPlayerState* PlayerState, class UClass* schematic);
		void GetCurrentSchematicCategoryData(struct FSchematicCategoryData* SchematicCategoryData);
		void CacheSchematicCategoryData();
		void CheckShopInventorySpaceForAllSchematics(bool* hasSpace);
		void OnAddToFavouriteClickedInFavouriteTab(class UClass* schematic);
		void SetSearchbarUnfocused();
		void SetSearchbarFocused();
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void CloseProductPageAndShowShopItems();
		void ClearAndHideSearchResults();
		void OnSearchCreateResult(const class FText& mSearchText);
		void OnFavouritesClicked();
		void PopulateFavourites();
		void OnAddToFavouriteClicked(class UClass* schematic);
		void OnShopProductClicked(class UClass* schematic);
		void OnStorageOpened();
		void UpdateBanner();
		void UpdateAmountOfCouponsInPlayerInventory();
		void ListButtonOnClicked(int32_t Index, class UWidget_ListButton_C* Button);
		void DropInventorySlotStack(class UWidget_InventorySlot_C* InventorySlot, bool* WasStackMoved);
		void CheckItemsInCart();
		void UpdateShopButtonStates();
		void InitShop();
		void ChangeItemAmountInCart(class UClass* schematic, int32_t ItemAmount);
		void UpdateCartAmount();
		void GetTotalCost(int32_t* TotalCost);
		void OnBuyAll();
		void UpdateShoppingCartList();
		void OnItemRemovedFromCart(class UClass* mSchematic);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OpenCartMenu();
		void PopulateShop();
		void OnSchematicCategoryClicked(int32_t Index);
		void CreateCategoryButtons();
		void OnShopSchematicHovered(class UClass* mSchematic, class UBPW_ResourceSinkShop_Item_C* mButton);
		void OnAddToCartClicked(class UClass* schematic);
		void BndEvt__mWindow_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature();
		void Construct();
		void BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_9_OnBuyAllButtonClicked__DelegateSignature();
		void BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_10_OnItemAmountChangedInCart__DelegateSignature(class UClass* schematic, int32_t Amount);
		void BndEvt__mShoppingCartList_K2Node_ComponentBoundEvent_11_OnItemRemovedFromCart__DelegateSignature(class UClass* mSchematic);
		void BndEvt__mWindow_K2Node_ComponentBoundEvent_5_OnTabButtonClicked__DelegateSignature(int32_t ButtonIndex);
		void BndEvt__mCart_Button_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__mFavouritesButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__mCart_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__mCart_Button_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__mFavouritesButton_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__mFavouritesButton_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__mSearchbar_K2Node_ComponentBoundEvent_16_OnTextChanged__DelegateSignature(const class FText& Text);
		void BndEvt__mSearchbar_K2Node_ComponentBoundEvent_17_OnTextComitted__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void PlayWelcomeAnimation();
		void EventUpdateCartButton();
		void BndEvt__BPW_ResourceSinkShop_mShoppingCartList_K2Node_ComponentBoundEvent_15_OnFavouriteChanged__DelegateSignature(class UClass* mSchematic);
		void Destruct();
		void OnWelcomeAnimationFinished();
		void ExecuteUbergraph_BPW_ResourceSinkShop(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
