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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass Widget_BuildMode.Widget_BuildMode_C
	 * Size -> 0x0198 (FullSize[0x0480] - InheritedSize[0x02E8])
	 */
	class UWidget_BuildMode_C : public UFGInteractWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    SampleAnim;                                              // 0x02F0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    FadeInSplineAnim;                                        // 0x02F8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              bgBuildingName;                                          // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Build_QuickSwitch_C*                            BPW_Build_QuickSwitch;                                   // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            BuildDismantleHints;                                     // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            BuildingNameOverlay;                                     // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mBgCurrentBuildMode;                                     // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_HintContainer_C*                             mBuildHints;                                             // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      mBuildingNameText;                                       // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mBuildModeContainer;                                     // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mBuildModeText;                                          // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mBuildUIPanel;                                           // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWrapBox*                                            mCostSlotsGrid;                                          // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_AlignableWrapBox_C*                             mDisqualifiers;                                          // 0x0358(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_AlignableWrapBox_C*                             mMissingParts;                                           // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFGBuildGunState*                                    mOwningState;                                            // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class AFGHologram*                                         mSetupCostHologram;                                      // 0x0370(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mPrevHologramCostLength;                                 // 0x0378(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_ICOX[0x4];                                   // 0x037C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UWidget_CostSlotWrapper_C*>                   mCostSlots;                                              // 0x0380(0x0010) Edit, BlueprintVisible, ContainsInstancedReference
		bool                                                       isDismantleMode;                                         // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_3PMD[0x7];                                   // 0x0391(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FItemAmount>                                 mPrevHologramCost;                                       // 0x0398(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<struct FItemAmount>                                 mCurrentHologramCost;                                    // 0x03A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mRebuildHologramCosts;                                   // 0x03B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NAA4[0x7];                                   // 0x03B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<unsigned char>                                      mSupportedSplineModes;                                   // 0x03C0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mShouldShowBuildModesHint;                               // 0x03D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6UEH[0x7];                                   // 0x03D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     mCostSlotTImer;                                          // 0x03D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsSmallSlot;                                            // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IBTD[0x7];                                   // 0x03E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      mCurrentDisqualifiers;                                   // 0x03E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnQuickSwitchBuildingButtonDown;                         // 0x03F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnQuickSwitchClosed;                                     // 0x0408(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mHideAllHints;                                           // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_0B0S[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnQuickSwitchBuildModeButtonDown;                        // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		double                                                     mCurrentZoopAmount;                                      // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mHideBuildModeHUD;                                       // 0x0438(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YC0Q[0x7];                                   // 0x0439(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStruct_KeybindingHint>                      mStandardKeybinds;                                       // 0x0440(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    mMaxCostSlots;                                           // 0x0450(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mNumOverflowCostSlots;                                   // 0x0454(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBPW_CostSlotOverflowIndicator_C*                    mCostSlotOverflow;                                       // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UBP_BuildGunStateBuild_C*                            mBuildGunStateBuild;                                     // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       mQuickSwitchBlueprintMode;                               // 0x0468(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CZZ4[0x7];                                   // 0x0469(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FStruct_KeybindingHint>                      mCachedKeybinds;                                         // 0x0470(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void OnHologramNudgeFailed(class AFGHologram* Hologram, ENudgeFailReason Reason);
		void OnHologramLockStateChanged(class AFGHologram* Hologram, bool Locked);
		void GetGameModeFeedback();
		void SortAndTruncateCost(TArray<struct FItemAmount>* cost, TArray<struct FItemAmount>* SortedCostSlots);
		void SetKeybindingHints(TArray<struct FStruct_KeybindingHint>* mKeybinds);
		void ShowHideBuildModeHUD(bool mHideBuildModeHUD);
		void FormatName(class UClass* Descriptor, double ZoopAmount, class FText* Text);
		void OpenQuickSwitchBuilding(class UClass* mItemDescriptor);
		void SetCurrentBuildModeText(class UClass* buildMode);
		void SetHideAllHints(bool mHideAllHints);
		void SetName(const class FText& InText);
		bool GetHasMultipleSplineModes();
		void UpdateHintVisibility();
		void SetHologramCost(TArray<struct FItemAmount>* mCurrentHologramCost, bool HasValidState);
		void UpdateBuildDisqualifiersText(TArray<class UClass*>* Disqualifiers);
		void UpdateCost();
		void CreateCostSlots(TArray<struct FItemAmount>* cost);
		void InpActEvt_IA_QuickSwitch_K2Node_EnhancedInputActionEvent_7(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
		void InpActEvt_IA_QuickSwitch_K2Node_EnhancedInputActionEvent_6(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
		void InpActEvt_IA_QuickSwitch_K2Node_EnhancedInputActionEvent_5(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
		void InpActEvt_IA_ModeSelect_K2Node_EnhancedInputActionEvent_4(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
		void InpActEvt_IA_ModeSelect_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
		void InpActEvt_IA_ModeSelect_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
		void InpActEvt_IA_HideHUD_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
		void Construct();
		void OnEscapePressed();
		void OnCustomTick(float UpdateTime);
		void PlayOnBuildModeChangedAnimation(class UClass* buildMode);
		void OnRecipeSampled(class UClass* newRecipe);
		void OnOpenQuickSwitchBuildings();
		void OnCloseQuickSwitchBuilding();
		void EnableHighContrastBuildMode();
		void SetSmallSlots();
		void PreConstruct(bool IsDesignTime);
		void OnOpenQuickSwitchBuildModes();
		void BndEvt__BPW_Build_QuickSwitch_K2Node_ComponentBoundEvent_1_OnBuildingClose__DelegateSignature(class UClass* recipe);
		void BndEvt__BPW_Build_QuickSwitch_K2Node_ComponentBoundEvent_2_OnBuildModeClosed__DelegateSignature(class UClass* buildMode);
		void OnCloseQuickSwitchBuildMode();
		void OnHotbarUpdatedForMaterialDescriptor(class UClass* MaterialDesc);
		void OnZoopUpdated(float currentZoop, float maxZoop, const struct FVector& zoopLocation);
		void OnRecipeChanged(class UClass* newRecipe);
		void SetOwningState(class UFGBuildGunState* mOwningState);
		void BndEvt__Widget_BuildMode_BPW_Build_QuickSwitch_K2Node_ComponentBoundEvent_0_OnBlueprintClosed__DelegateSignature(class UFGBlueprintDescriptor* Blueprint);
		void ExecuteUbergraph_Widget_BuildMode(int32_t EntryPoint);
		void OnQuickSwitchBuildModeButtonDown__DelegateSignature();
		void OnQuickSwitchClosed__DelegateSignature(class UClass* recipe);
		void OnQuickSwitchBuildingButtonDown__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
