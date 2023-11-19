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
	 * WidgetBlueprintGeneratedClass BPW_Build_QuickSwitch.BPW_Build_QuickSwitch_C
	 * Size -> 0x01C9 (FullSize[0x0449] - InheritedSize[0x0280])
	 */
	class UBPW_Build_QuickSwitch_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimScrollRight;                                         // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    AnimScrollLeft;                                          // 0x0290(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidget_Hint_C*                                      mHintNext;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Hint_C*                                      mHintPrevious;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_RadialMenu_C*                                Widget_RadialMenu;                                       // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClass*                                              mItemDescriptor;                                         // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<class FString, class UClass*>                         mRecipes;                                                // 0x02B8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnBuildingClose;                                         // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mIsOpen;                                                 // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mButtonDown;                                             // 0x0319(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_IYH8[0x6];                                   // 0x031A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        mButtonDownTimer;                                        // 0x0320(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UClass*                                              mCurrentRecipe;                                          // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TMap<class FString, class UClass*>                         mSupportedSplineModes;                                   // 0x0330(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mIsBuildModes;                                           // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UA6K[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnBuildModeClosed;                                       // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		double                                                     mButtonDownDelay;                                        // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UClass*                                              mCurrentBuildMode;                                       // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<class UClass*>                                      mMaterialRecipes;                                        // 0x03A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UClass*                                              mCurrentMaterialRecipe;                                  // 0x03B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UFGBlueprintDescriptor*                              mCurrentBlueprint;                                       // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		EQuickSwitch_Modes                                         mQuickSwitchMode;                                        // 0x03C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X6F9[0x7];                                   // 0x03C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class FString, class UFGBlueprintDescriptor*>         mBlueprints;                                             // 0x03D0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnBlueprintClosed;                                       // 0x0420(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    mEntryLimit;                                             // 0x0430(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HBX6[0x4];                                   // 0x0434(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UFGBlueprintDescriptor*>                      mAllBlueprintsInSubcategory;                             // 0x0438(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mMenuOverflows;                                          // 0x0448(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void BuildBlueprintMenu();
		void UpdateHintText();
		void GetBlueprints(TArray<class UFGBlueprintDescriptor*>* Blueprints, bool* Success);
		void SetupBlueprints();
		void GetCustomizerDescriptorText(class UClass* mItemDescriptor);
		void PlayTapCategorySFX(int32_t MatchedRecipesIndex);
		void PlayTapBuildmodeSFX();
		void PlayFastSwitchMaterialSFX();
		void SetCurrentMaterialRecipe(class UClass* mCurrentMaterialRecipe);
		void SetupMaterialDescriptors();
		void OnMenuScrolled(bool ScrollRight);
		void OnRadialMenuClosed(const class FText& InText);
		void OpenBuildModes();
		void CloseQuickSwitch(EQuickSwitch_Modes mQuickSwitchMode);
		void SetupRecipes();
		void GetItemRecipes(TArray<class UClass*>* Recipes, TArray<int32_t>* Dividers, bool* Success);
		void InpActEvt_IA_QuickSwitchMenuScrolledLeft_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
		void InpActEvt_IA_QuickSwitchMenuScrolledRight_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
		void BndEvt__Widget_RadialMenu_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature(const class FText& ActiveName);
		void Open(class UClass* mItemDescriptor);
		void ShowRadialMenu();
		void Destruct();
		void OpenWithBlueprints(class UFGBlueprintDescriptor* blueprintDescriptor);
		void ExecuteUbergraph_BPW_Build_QuickSwitch(int32_t EntryPoint);
		void OnBlueprintClosed__DelegateSignature(class UFGBlueprintDescriptor* Blueprint);
		void OnBuildModeClosed__DelegateSignature(class UClass* buildMode);
		void OnBuildingClose__DelegateSignature(class UClass* recipe);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
