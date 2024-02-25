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
	 * WidgetBlueprintGeneratedClass Widget_ShoppingList.Widget_ShoppingList_C
	 * Size -> 0x0138 (FullSize[0x03B8] - InheritedSize[0x0280])
	 */
	class UWidget_ShoppingList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    Anim_OnHover;                                            // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBackgroundBlur*                                     mBGBlur;                                                 // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mClearListButton;                                        // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_TitleButton_DarkMode_C*                      mCloseButton;                                            // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_ShoppingList_Divider_C*                         mDivPrivateNotes;                                        // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_ShoppingList_Divider_C*                         mDivPublicNotes;                                         // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mDivRecipeParts;                                         // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_ShoppingList_Divider_C*                         mDivRecipes;                                             // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMultiLineEditableText*                              mEditablePrivateNotes;                                   // 0x02C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMultiLineEditableText*                              mEditablePublicNotes;                                    // 0x02D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             mEditTodoListButton;                                     // 0x02D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        mEditTodoListCanvas;                                     // 0x02E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mEditToDoListIcon;                                       // 0x02E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mIconObject;                                             // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFGListView*                                         mIngredientList;                                         // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        mIsInteractiveContainer;                                 // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            mListSizeBox;                                            // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mNoRecipesText;                                          // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mOpenGradient;                                           // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             mOpenToggleButton;                                       // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      mPrivateNotes;                                           // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mPrivateNotesContainer;                                  // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UListView*                                           mProductList;                                            // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      mPublicNotes;                                            // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mPublicNotesContainer;                                   // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             mSizeSlider;                                             // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mTitleObject;                                            // 0x0358(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        ShoppingListBox;                                         // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Scrollbox_C*                                 Widget_Scrollbox;                                        // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FItemAmount>                                 mTotalCost;                                              // 0x0370(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mIsOpen;                                                 // 0x0380(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_1RRT[0x7];                                   // 0x0381(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnToDoListOpen;                                          // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnToDoListClosed;                                        // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class AFGPlayerState*                                      mPlayerState;                                            // 0x03A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UFGShoppingListComponent*                            mShoppingListComponent;                                  // 0x03B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateIngredientList();
		bool IsProductListEmpty();
		void UpdateProductList();
		void UpdateSettings();
		void InitSettings();
		void ConvertSize(double In, bool FromSliderToSizeBox, double* Out);
		class FText CharCountLimiter(const class FText& InText, bool* IsOverLimit);
		bool AreRecipesVisible();
		void UpdatePublicNotes();
		void UpdatePrivateNotes();
		void ParseNotes(const class FString& InText, class FText* OutText);
		void UpdateContentVisibility();
		void ShowHideOpenButton(bool Show);
		void SetTodolistContentStyle(bool IsTodoListOpen);
		void SetClearListButtonVisibility();
		void SetIsOpen(bool IsOpen);
		void Construct();
		void UpdateShoppingListRows();
		void BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void EventOnUpdateShoppingList();
		void BndEvt__Button_87_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_87_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_87_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Widget_TitleButton_DarkMode_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
		void BndEvt__Button_911_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__Button_911_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Button_911_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__Slider_77_K2Node_ComponentBoundEvent_15_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__Slider_77_K2Node_ComponentBoundEvent_16_OnMouseCaptureBeginEvent__DelegateSignature();
		void BndEvt__Slider_77_K2Node_ComponentBoundEvent_17_OnMouseCaptureEndEvent__DelegateSignature();
		void BndEvt__Slider_77_K2Node_ComponentBoundEvent_18_OnControllerCaptureBeginEvent__DelegateSignature();
		void BndEvt__Slider_77_K2Node_ComponentBoundEvent_19_OnControllerCaptureEndEvent__DelegateSignature();
		void Destruct();
		void BndEvt__Widget_ShoppingList_mEditablePublicNotes_K2Node_ComponentBoundEvent_10_OnMultiLineEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__Widget_ShoppingList_mEditablePrivateNotes_K2Node_ComponentBoundEvent_11_OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__Widget_ShoppingList_mDivPrivateNotes_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature(bool IsOpen);
		void BndEvt__Widget_ShoppingList_mDivPublicNotes_K2Node_ComponentBoundEvent_9_OnStateChanged__DelegateSignature(bool IsOpen);
		void BndEvt__Widget_ShoppingList_mDivRecipes_K2Node_ComponentBoundEvent_20_OnStateChanged__DelegateSignature(bool IsOpen);
		void BndEvt__Widget_ShoppingList_mEditablePrivateNotes_K2Node_ComponentBoundEvent_4_OnMultiLineEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__Widget_ShoppingList_mEditablePublicNotes_K2Node_ComponentBoundEvent_7_OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void BndEvt__Widget_ShoppingList_mProductList_K2Node_ComponentBoundEvent_14_OnItemIsHoveredChangedDynamic__DelegateSignature(class UObject* Item, bool bIsHovered);
		void ExecuteUbergraph_Widget_ShoppingList(int32_t EntryPoint);
		void OnToDoListClosed__DelegateSignature();
		void OnToDoListOpen__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
