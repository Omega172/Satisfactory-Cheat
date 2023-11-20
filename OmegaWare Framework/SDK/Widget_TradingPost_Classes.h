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
	 * WidgetBlueprintGeneratedClass Widget_TradingPost.Widget_TradingPost_C
	 * Size -> 0x0105 (FullSize[0x0458] - InheritedSize[0x0353])
	 */
	class UWidget_TradingPost_C : public UWidget_UseableBase_C
	{
	public:
		unsigned char                                              UnknownData_YCFT[0x5];                                   // 0x0353(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    GlowInputAnim;                                           // 0x0360(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ShakeAnim;                                               // 0x0368(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              GlowInput;                                               // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_4;                                                 // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      mInventoryBox;                                           // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_TradingPost_LaunchButton_C*                  mLaunchShipButton;                                       // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_TradingPost_PayOffGrid_C*                    mPayOffGrid;                                             // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SchematicList_C*                             mSchematicList;                                          // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mSchematicOverlay;                                       // 0x03A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mSelectMilestoneText;                                    // 0x03A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_TradingPost_ShipAwayFeedback_C*              mShipAwayFeedback;                                       // 0x03B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mSmokeContainer_BottomLeft;                              // 0x03B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mSmokeContainer_BottomRight;                             // 0x03C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mSmokeContainer_TopCenter;                               // 0x03C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_DarkMode_C*                           mWindow;                                                 // 0x03D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_PulsingNamedSlot_C*                          PuslingSchematic;                                        // 0x03D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              ShipBG;                                                  // 0x03E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      TierList;                                                // 0x03E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_InventorySlot_DropArea_C*                    Widget_InventorySlot_DropArea;                           // 0x03F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SlidingTabs_C*                               Widget_SlidingTabs;                                      // 0x03F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_TradingPost_ActivateSchematicButton_C*       Widget_TradingPost_ActivateSchematicButton;              // 0x0400(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_TradingPost_LanuchButtonPlatform_C*          Widget_TradingPost_LanuchButtonPlatform;                 // 0x0408(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_TradingPost_RecipePreview_C*                 Widget_TradingPost_RecipePreview;                        // 0x0410(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_ContentBackground_DarkMode_C*         Widget_Window_ContentBackground_DarkMode_2;              // 0x0418(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AFGBuildableTradingPost*                             mTradingPost;                                            // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UClass*                                              mSelectedSchematic;                                      // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class AFGSchematicManager*                                 mCachedSchematicManager;                                 // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mActiveTier;                                             // 0x0438(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MUK9[0x4];                                   // 0x043C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      mRelevantItems;                                          // 0x0440(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        mUpdateTimer;                                            // 0x0450(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateSelectSchematicText();
		void UpdateAnimationPayOffGrid();
		void UpdateSelectMilestoneFeedback();
		void SetActivateButtonVisibility();
		void SetSelectedSchematic(class UClass* mSelectedSchematic);
		void DropInventorySlotStack(class UWidget_InventorySlot_C* InventorySlot, bool* WasStackMoved);
		void GetLowestNonFullyResearchedTier(int32_t* tier, bool* FoundTier);
		void CheckIfTierIsFullyResearched(int32_t tier, bool* IsResearched);
		void SetTierAndDefaultSchematic(int32_t tier);
		void UpdateSchematicHintVisibility();
		void GenerateTierList();
		void SetRewardInformation(const class FText& InTitle, const class FText& inDesc, const struct FSlateBrush& inIcon);
		void SetActiveTab();
		void GetShipInventoryVisibility();
		void ActivateSelectedSchematic();
		void SetDefaultDescriptionText(class UClass* mSchematicClass);
		void UpdateRewardInfoFromProduct(class UWidget_SchematicRewardItem_C* RewardWidget);
		void OnSchematicClicked(class UClass* schematic);
		void Cleanup();
		void CloseTradepost();
		void Destruct();
		void Init();
		void OnActiveSchematicChanged(class UClass* schematic);
		void Construct();
		void purchasedSchematic(class UClass* purchasedSchematic);
		void mShakeWindow();
		void BndEvt__mWindow_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature();
		void CreateSmoke();
		void BndEvt__mWindow_K2Node_ComponentBoundEvent_3_OnTabButtonClicked__DelegateSignature(int32_t ButtonIndex);
		void PreConstruct(bool IsDesignTime);
		void UpdateVisualFeedback();
		void BndEvt__Widget_TradingPost_Widget_TradingPost_ActivateSchematicButton_K2Node_ComponentBoundEvent_1_onSchematicActivateButtonClicked__DelegateSignature();
		void ExecuteUbergraph_Widget_TradingPost(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
