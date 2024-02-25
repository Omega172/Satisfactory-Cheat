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
	 * Class UMG.NotifyFieldValueChanged
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNotifyFieldValueChanged : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Visual
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVisual : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Widget
	 * Size -> 0x0128 (FullSize[0x0150] - InheritedSize[0x0028])
	 */
	class UWidget : public UVisual
	{
	public:
		unsigned char                                              UnknownData_P978[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPanelSlot*                                          Slot;                                                    // 0x0030(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, TextExportTransient, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      bIsEnabledDelegate;                                      // 0x0038(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ToolTipText;                                             // 0x0048(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ToolTipTextDelegate;                                     // 0x0060(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidget*                                             ToolTipWidget;                                           // 0x0070(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ToolTipWidgetDelegate;                                   // 0x0078(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      VisibilityDelegate;                                      // 0x0088(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWidgetTransform                                    RenderTransform;                                         // 0x0098(0x0038) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FVector2D                                           RenderTransformPivot;                                    // 0x00D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFlowDirectionPreference                                   FlowDirectionPreference;                                 // 0x00E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsVariable : 1;                                         // 0x00E1(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCreatedByConstructionScript : 1;                        // 0x00E1(0x0001) BIT_FIELD Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsEnabled : 1;                                          // 0x00E1(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride_Cursor : 1;                                    // 0x00E1(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsVolatile : 1;                                         // 0x00E1(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EMouseCursor                                               Cursor;                                                  // 0x00E2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWidgetClipping                                            Clipping;                                                // 0x00E3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateVisibility                                           Visibility;                                              // 0x00E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W6FC[0x3];                                   // 0x00E5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RenderOpacity;                                           // 0x00E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O1U7[0x4];                                   // 0x00EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USlateAccessibleWidgetData*                          AccessibleWidgetData;                                    // 0x00F0(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UWidgetNavigation*                                   Navigation;                                              // 0x00F8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XEDP[0x20];                                  // 0x0100(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UPropertyBinding*>                            NativeBindings;                                          // 0x0120(0x0010) ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CKXZ[0x20];                                  // 0x0130(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetVisibility(ESlateVisibility InVisibility);
		void SetUserFocus(class APlayerController* PlayerController);
		void SetToolTipText(const class FText& InToolTipText);
		void SetToolTip(class UWidget* Widget);
		void SetRenderTranslation(const struct FVector2D& Translation);
		void SetRenderTransformPivot(const struct FVector2D& Pivot);
		void SetRenderTransformAngle(float Angle);
		void SetRenderTransform(const struct FWidgetTransform& InTransform);
		void SetRenderShear(const struct FVector2D& Shear);
		void SetRenderScale(const struct FVector2D& Scale);
		void SetRenderOpacity(float InOpacity);
		void SetNavigationRuleExplicit(EUINavigation Direction, class UWidget* InWidget);
		void SetNavigationRuleCustomBoundary(EUINavigation Direction, const class FScriptDelegate& InCustomDelegate);
		void SetNavigationRuleCustom(EUINavigation Direction, const class FScriptDelegate& InCustomDelegate);
		void SetNavigationRuleBase(EUINavigation Direction, EUINavigationRule Rule);
		void SetNavigationRule(EUINavigation Direction, EUINavigationRule Rule, const class FName& WidgetToFocus);
		void SetKeyboardFocus();
		void SetIsEnabled(bool bInIsEnabled);
		void SetFocus();
		void SetCursor(EMouseCursor InCursor);
		void SetClipping(EWidgetClipping InClipping);
		void SetAllNavigationRules(EUINavigationRule Rule, const class FName& WidgetToFocus);
		void ResetCursor();
		void RemoveFromParent();
		struct FEventReply OnReply__DelegateSignature();
		struct FEventReply OnPointerEvent__DelegateSignature(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void K2_RemoveFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, const class FScriptDelegate& Delegate);
		void K2_BroadcastFieldValueChanged(const struct FFieldNotificationId& FieldId);
		void K2_AddFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, const class FScriptDelegate& Delegate);
		bool IsVisible();
		bool IsRendered();
		bool IsInViewport();
		bool IsHovered();
		void InvalidateLayoutAndVolatility();
		bool HasUserFocusedDescendants(class APlayerController* PlayerController);
		bool HasUserFocus(class APlayerController* PlayerController);
		bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex);
		bool HasMouseCapture();
		bool HasKeyboardFocus();
		bool HasFocusedDescendants();
		bool HasAnyUserFocus();
		class UWidget* GetWidget__DelegateSignature();
		ESlateVisibility GetVisibility();
		struct FGeometry GetTickSpaceGeometry();
		class FText GetText__DelegateSignature();
		ESlateVisibility GetSlateVisibility__DelegateSignature();
		struct FSlateColor GetSlateColor__DelegateSignature();
		struct FSlateBrush GetSlateBrush__DelegateSignature();
		float GetRenderTransformAngle();
		float GetRenderOpacity();
		class UPanelWidget* GetParent();
		struct FGeometry GetPaintSpaceGeometry();
		class APlayerController* GetOwningPlayer();
		class ULocalPlayer* GetOwningLocalPlayer();
		EMouseCursor GetMouseCursor__DelegateSignature();
		struct FLinearColor GetLinearColor__DelegateSignature();
		bool GetIsEnabled();
		int32_t GetInt32__DelegateSignature();
		class UGameInstance* GetGameInstance();
		class FString GetFriendlyDisplayLabel();
		float GetFloat__DelegateSignature();
		struct FVector2D GetDesiredSize();
		EWidgetClipping GetClipping();
		ECheckBoxState GetCheckBoxState__DelegateSignature();
		struct FGeometry GetCachedGeometry();
		bool GetBool__DelegateSignature();
		class FText GetAccessibleText();
		class FText GetAccessibleSummaryText();
		class UWidget* GenerateWidgetForString__DelegateSignature(const class FString& Item);
		class UWidget* GenerateWidgetForObject__DelegateSignature(class UObject* Item);
		void ForceVolatile(bool bForce);
		void ForceLayoutPrepass();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ListViewBase
	 * Size -> 0x0118 (FullSize[0x0268] - InheritedSize[0x0150])
	 */
	class UListViewBase : public UWidget
	{
	public:
		class FScriptMulticastDelegate                             BP_OnEntryGenerated;                                     // 0x0150(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZSVZ[0x10];                                  // 0x0160(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              EntryWidgetClass;                                        // 0x0170(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WheelScrollMultiplier;                                   // 0x0178(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableScrollAnimation;                                  // 0x017C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       AllowOverscroll;                                         // 0x017D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableRightClickScrolling;                              // 0x017E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEnableFixedLineOffset;                                  // 0x017F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      FixedLineScrollOffset;                                   // 0x0180(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAllowDragging;                                          // 0x0184(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_XN35[0x3];                                   // 0x0185(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             BP_OnEntryReleased;                                      // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		struct FUserWidgetPool                                     EntryWidgetPool;                                         // 0x0198(0x0088) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S5X0[0x48];                                  // 0x0220(0x0048) MISSED OFFSET (PADDING)

	public:
		void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
		void SetScrollOffset(float InScrollOffset);
		void SetScrollbarVisibility(ESlateVisibility InVisibility);
		void ScrollToTop();
		void ScrollToBottom();
		void RequestRefresh();
		void RegenerateAllEntries();
		float GetScrollOffset();
		TArray<class UUserWidget*> GetDisplayedEntryWidgets();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ListView
	 * Size -> 0x09C8 (FullSize[0x0C30] - InheritedSize[0x0268])
	 */
	class UListView : public UListViewBase
	{
	public:
		unsigned char                                              UnknownData_N60E[0xD8];                                  // 0x0268(0x00D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTableViewStyle                                     WidgetStyle;                                             // 0x0340(0x00E0) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		struct FScrollBarStyle                                     ScrollBarStyle;                                          // 0x0420(0x0770) Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected
		EOrientation                                               Orientation;                                             // 0x0B90(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ESelectionMode                                             SelectionMode;                                           // 0x0B91(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EConsumeMouseWheel                                         ConsumeMouseWheel;                                       // 0x0B92(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bClearSelectionOnClick;                                  // 0x0B93(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsFocusable;                                            // 0x0B94(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AHO6[0x3];                                   // 0x0B95(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      EntrySpacing;                                            // 0x0B98(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bReturnFocusToSelection;                                 // 0x0B9C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B9QA[0x3];                                   // 0x0B9D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UObject*>                                     ListItems;                                               // 0x0BA0(0x0010) ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1WO9[0x10];                                  // 0x0BB0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             BP_OnEntryInitialized;                                   // 0x0BC0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnItemClicked;                                        // 0x0BD0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnItemDoubleClicked;                                  // 0x0BE0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnItemIsHoveredChanged;                               // 0x0BF0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnItemSelectionChanged;                               // 0x0C00(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnItemScrolledIntoView;                               // 0x0C10(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnListViewScrolled;                                   // 0x0C20(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate

	public:
		void SetSelectionMode(ESelectionMode SelectionMode);
		void SetSelectedIndex(int32_t Index);
		void ScrollIndexIntoView(int32_t Index);
		void RemoveItem(class UObject* Item);
		void OnListItemOuterEndPlayed(class AActor* ItemOuter, EEndPlayReason EndPlayReason);
		void OnListItemEndPlayed(class AActor* Item, EEndPlayReason EndPlayReason);
		void NavigateToIndex(int32_t Index);
		bool IsRefreshPending();
		int32_t GetNumItems();
		TArray<class UObject*> GetListItems();
		class UObject* GetItemAt(int32_t Index);
		int32_t GetIndexForItem(class UObject* Item);
		void ClearListItems();
		void BP_SetSelectedItem(class UObject* Item);
		void BP_SetListItems(TArray<class UObject*> InListItems);
		void BP_SetItemSelection(class UObject* Item, bool bSelected);
		void BP_ScrollItemIntoView(class UObject* Item);
		void BP_NavigateToItem(class UObject* Item);
		bool BP_IsItemVisible(class UObject* Item);
		bool BP_GetSelectedItems(TArray<class UObject*>* Items);
		class UObject* BP_GetSelectedItem();
		int32_t BP_GetNumItemsSelected();
		void BP_ClearSelection();
		void BP_CancelScrollIntoView();
		void AddItem(class UObject* Item);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ListViewDesignerPreviewItem
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UListViewDesignerPreviewItem : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SlateAccessibleWidgetData
	 * Size -> 0x0058 (FullSize[0x0080] - InheritedSize[0x0028])
	 */
	class USlateAccessibleWidgetData : public UObject
	{
	public:
		bool                                                       bCanChildrenBeAccessible;                                // 0x0028(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateAccessibleBehavior                                   AccessibleBehavior;                                      // 0x0029(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateAccessibleBehavior                                   AccessibleSummaryBehavior;                               // 0x002A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1TZ6[0x5];                                   // 0x002B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                AccessibleText;                                          // 0x0030(0x0018) NativeAccessSpecifierPublic
		class FScriptDelegate                                      AccessibleTextDelegate;                                  // 0x0048(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                AccessibleSummaryText;                                   // 0x0058(0x0018) NativeAccessSpecifierPublic
		class FScriptDelegate                                      AccessibleSummaryTextDelegate;                           // 0x0070(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UserWidgetBlueprint
	 * Size -> 0x0000 (FullSize[0x00A8] - InheritedSize[0x00A8])
	 */
	class UUserWidgetBlueprint : public UBlueprint
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UserWidget
	 * Size -> 0x0130 (FullSize[0x0280] - InheritedSize[0x0150])
	 */
	class UUserWidget : public UWidget
	{
	public:
		unsigned char                                              UnknownData_1PCF[0x8];                                   // 0x0150(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x0158(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ColorAndOpacityDelegate;                                 // 0x0168(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         ForegroundColor;                                         // 0x0178(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ForegroundColorDelegate;                                 // 0x018C(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0QS7[0x4];                                   // 0x019C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnVisibilityChanged;                                     // 0x01A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LTHF[0x18];                                  // 0x01B0(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             padding;                                                 // 0x01C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    Priority;                                                // 0x01D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFocusable : 1;                                        // 0x01DC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bStopAction : 1;                                         // 0x01DC(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T0ZJ[0x3];                                   // 0x01DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUMGSequencePlayer*>                          ActiveSequencePlayers;                                   // 0x01E0(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic
		class UUMGSequenceTickManager*                             AnimationTickManager;                                    // 0x01F0(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UUMGSequencePlayer*>                          StoppedSequencePlayers;                                  // 0x01F8(0x0010) ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<struct FNamedSlotBinding>                           NamedSlotBindings;                                       // 0x0208(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UUserWidgetExtension*>                        Extensions;                                              // 0x0218(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		class UWidgetTree*                                         WidgetTree;                                              // 0x0228(0x0008) ZeroConstructor, Transient, DuplicateTransient, NoDestructor, TextExportTransient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasScriptImplementedTick : 1;                           // 0x0230(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasScriptImplementedPaint : 1;                          // 0x0230(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_63YA[0x17];                                  // 0x0231(0x0017) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EWidgetTickFrequency                                       TickFrequency;                                           // 0x0248(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JE58[0x7];                                   // 0x0249(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInputComponent*                                     InputComponent;                                          // 0x0250(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FAnimationEventBinding>                      AnimationCallbacks;                                      // 0x0258(0x0010) ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_X2CS[0x18];                                  // 0x0268(0x0018) MISSED OFFSET (PADDING)

	public:
		void UnregisterInputComponent();
		void UnbindFromAnimationStarted(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate);
		void UnbindFromAnimationFinished(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate);
		void UnbindAllFromAnimationStarted(class UWidgetAnimation* Animation);
		void UnbindAllFromAnimationFinished(class UWidgetAnimation* Animation);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void StopListeningForInputAction(const class FName& ActionName, EInputEvent EventType);
		void StopListeningForAllInputActions();
		void StopAnimationsAndLatentActions();
		void StopAnimation(class UWidgetAnimation* InAnimation);
		void StopAllAnimations();
		void SetPositionInViewport(const struct FVector2D& Position, bool bRemoveDPIScale);
		void SetPlaybackSpeed(class UWidgetAnimation* InAnimation, float PlaybackSpeed);
		void SetPadding(const struct FMargin& InPadding);
		void SetOwningPlayer(class APlayerController* LocalPlayerController);
		void SetNumLoopsToPlay(class UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay);
		void SetInputActionPriority(int32_t NewPriority);
		void SetInputActionBlocking(bool bShouldBlock);
		void SetForegroundColor(const struct FSlateColor& InForegroundColor);
		void SetDesiredSizeInViewport(const struct FVector2D& Size);
		void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
		void SetAnimationCurrentTime(class UWidgetAnimation* InAnimation, float InTime);
		void SetAnchorsInViewport(const struct FAnchors& Anchors);
		void SetAlignmentInViewport(const struct FVector2D& Alignment);
		void ReverseAnimation(class UWidgetAnimation* InAnimation);
		void RemoveFromViewport();
		void RemoveExtensions(class UClass* InExtensionType);
		void RemoveExtension(class UUserWidgetExtension* InExtension);
		void RegisterInputComponent();
		void PreConstruct(bool IsDesignTime);
		void PlaySound(class USoundBase* SoundToPlay);
		class UUMGSequencePlayer* PlayAnimationTimeRange(class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState);
		class UUMGSequencePlayer* PlayAnimationReverse(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
		class UUMGSequencePlayer* PlayAnimationForward(class UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
		class UUMGSequencePlayer* PlayAnimation(class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState);
		float PauseAnimation(class UWidgetAnimation* InAnimation);
		struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
		struct FEventReply OnTouchMoved(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
		struct FEventReply OnTouchGesture(const struct FGeometry& MyGeometry, const struct FPointerEvent& GestureEvent);
		struct FEventReply OnTouchForceChanged(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
		struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, const struct FPointerEvent& InTouchEvent);
		void OnRemovedFromFocusPath(const struct FFocusEvent& InFocusEvent);
		struct FEventReply OnPreviewMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnPreviewKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void OnPaint(struct FPaintContext* Context);
		struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseCaptureLost();
		struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		struct FEventReply OnMouseButtonDoubleClick(const struct FGeometry& InMyGeometry, const struct FPointerEvent& InMouseEvent);
		struct FEventReply OnMotionDetected(const struct FGeometry& MyGeometry, const struct FMotionEvent& InMotionEvent);
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyChar(const struct FGeometry& MyGeometry, const struct FCharacterEvent& InCharacterEvent);
		void OnInitialized();
		struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent);
		void OnFocusLost(const struct FFocusEvent& InFocusEvent);
		bool OnDrop(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		bool OnDragOver(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
		void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void OnAnimationStarted(class UWidgetAnimation* Animation);
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		struct FEventReply OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent);
		void OnAddedToFocusPath(const struct FFocusEvent& InFocusEvent);
		void ListenForInputAction(const class FName& ActionName, EInputEvent EventType, bool bConsume, const class FScriptDelegate& Callback);
		bool IsPlayingAnimation();
		bool IsListeningForInputAction(const class FName& ActionName);
		bool IsInteractable();
		bool IsAnyAnimationPlaying();
		bool IsAnimationPlayingForward(class UWidgetAnimation* InAnimation);
		bool IsAnimationPlaying(class UWidgetAnimation* InAnimation);
		class APawn* GetOwningPlayerPawn();
		class APlayerCameraManager* GetOwningPlayerCameraManager();
		bool GetIsVisible();
		TArray<class UUserWidgetExtension*> GetExtensions(class UClass* ExtensionType);
		class UUserWidgetExtension* GetExtension(class UClass* ExtensionType);
		float GetAnimationCurrentTime(class UWidgetAnimation* InAnimation);
		struct FAnchors GetAnchorsInViewport();
		struct FVector2D GetAlignmentInViewport();
		void FlushAnimations();
		void Destruct();
		void Construct();
		void CancelLatentActions();
		void BindToAnimationStarted(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate);
		void BindToAnimationFinished(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate);
		void BindToAnimationEvent(class UWidgetAnimation* Animation, const class FScriptDelegate& Delegate, EWidgetAnimationEvent AnimationEvent, const class FName& UserTag);
		void AddToViewport(int32_t ZOrder);
		bool AddToPlayerScreen(int32_t ZOrder);
		class UUserWidgetExtension* AddExtension(class UClass* InExtensionType);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UserWidgetExtension
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUserWidgetExtension : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetBlueprintGeneratedClassExtension
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWidgetBlueprintGeneratedClassExtension : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetFieldNotificationExtension
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UWidgetFieldNotificationExtension : public UUserWidgetExtension
	{
	public:
		unsigned char                                              UnknownData_P83I[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetNavigation
	 * Size -> 0x00D8 (FullSize[0x0100] - InheritedSize[0x0028])
	 */
	class UWidgetNavigation : public UObject
	{
	public:
		struct FWidgetNavigationData                               Up;                                                      // 0x0028(0x0024) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FWidgetNavigationData                               Down;                                                    // 0x004C(0x0024) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FWidgetNavigationData                               Left;                                                    // 0x0070(0x0024) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FWidgetNavigationData                               Right;                                                   // 0x0094(0x0024) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FWidgetNavigationData                               Next;                                                    // 0x00B8(0x0024) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FWidgetNavigationData                               Previous;                                                // 0x00DC(0x0024) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieScene2DTransformPropertySystem
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMovieScene2DTransformPropertySystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieScene2DTransformSection
	 * Size -> 0x0780 (FullSize[0x0870] - InheritedSize[0x00F0])
	 */
	class UMovieScene2DTransformSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_KNNP[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieScene2DTransformMask                          TransformMask;                                           // 0x00F8(0x0004) NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HK5M[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneFloatChannel                             Translation[0x2];                                        // 0x0100(0x0220) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             Rotation;                                                // 0x0320(0x0110) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             Scale[0x2];                                              // 0x0430(0x0220) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             Shear[0x2];                                              // 0x0650(0x0220) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieScene2DTransformTrack
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UMovieScene2DTransformTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieSceneMarginPropertySystem
	 * Size -> 0x0000 (FullSize[0x0058] - InheritedSize[0x0058])
	 */
	class UMovieSceneMarginPropertySystem : public UMovieScenePropertySystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieSceneMarginSection
	 * Size -> 0x0448 (FullSize[0x0538] - InheritedSize[0x00F0])
	 */
	class UMovieSceneMarginSection : public UMovieSceneSection
	{
	public:
		unsigned char                                              UnknownData_0DTA[0x8];                                   // 0x00F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneFloatChannel                             TopCurve;                                                // 0x00F8(0x0110) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             LeftCurve;                                               // 0x0208(0x0110) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             RightCurve;                                              // 0x0318(0x0110) NativeAccessSpecifierPublic
		struct FMovieSceneFloatChannel                             BottomCurve;                                             // 0x0428(0x0110) NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieSceneMarginTrack
	 * Size -> 0x0000 (FullSize[0x00C8] - InheritedSize[0x00C8])
	 */
	class UMovieSceneMarginTrack : public UMovieScenePropertyTrack
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieSceneWidgetMaterialSystem
	 * Size -> 0x0160 (FullSize[0x01A0] - InheritedSize[0x0040])
	 */
	class UMovieSceneWidgetMaterialSystem : public UMovieSceneEntitySystem
	{
	public:
		unsigned char                                              UnknownData_TGPL[0x160];                                 // 0x0040(0x0160) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MovieSceneWidgetMaterialTrack
	 * Size -> 0x0028 (FullSize[0x00D0] - InheritedSize[0x00A8])
	 */
	class UMovieSceneWidgetMaterialTrack : public UMovieSceneMaterialTrack
	{
	public:
		unsigned char                                              UnknownData_6363[0x10];                                  // 0x00A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        BrushPropertyNamePath;                                   // 0x00B8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class FName                                                TrackName;                                               // 0x00C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UMGSequencePlayer
	 * Size -> 0x0310 (FullSize[0x0338] - InheritedSize[0x0028])
	 */
	class UUMGSequencePlayer : public UObject
	{
	public:
		unsigned char                                              UnknownData_5653[0x1F8];                                 // 0x0028(0x01F8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidgetAnimation*                                    Animation;                                               // 0x0220(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VMW4[0x8];                                   // 0x0228(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMovieSceneRootEvaluationTemplateInstance           RootTemplateInstance;                                    // 0x0230(0x0088) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J8WD[0x80];                                  // 0x02B8(0x0080) MISSED OFFSET (PADDING)

	public:
		void SetUserTag(const class FName& InUserTag);
		class FName GetUserTag();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UMGSequenceTickManager
	 * Size -> 0x0098 (FullSize[0x00C0] - InheritedSize[0x0028])
	 */
	class UUMGSequenceTickManager : public UObject
	{
	public:
		TMap<TWeakObjectPtr<class UUserWidget>, struct FSequenceTickManagerWidgetData> WeakUserWidgetData;                                      // 0x0028(0x0050) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UMovieSceneEntitySystemLinker*                       Linker;                                                  // 0x0078(0x0008) ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TS7H[0x40];                                  // 0x0080(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetAnimation
	 * Size -> 0x0030 (FullSize[0x0098] - InheritedSize[0x0068])
	 */
	class UWidgetAnimation : public UMovieSceneSequence
	{
	public:
		class UMovieScene*                                         MovieScene;                                              // 0x0068(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FWidgetAnimationBinding>                     AnimationBindings;                                       // 0x0070(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bLegacyFinishOnStop;                                     // 0x0080(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_KAGL[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisplayLabel;                                            // 0x0088(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void UnbindFromAnimationStarted(class UUserWidget* Widget, const class FScriptDelegate& Delegate);
		void UnbindFromAnimationFinished(class UUserWidget* Widget, const class FScriptDelegate& Delegate);
		void UnbindAllFromAnimationStarted(class UUserWidget* Widget);
		void UnbindAllFromAnimationFinished(class UUserWidget* Widget);
		float GetStartTime();
		float GetEndTime();
		void BindToAnimationStarted(class UUserWidget* Widget, const class FScriptDelegate& Delegate);
		void BindToAnimationFinished(class UUserWidget* Widget, const class FScriptDelegate& Delegate);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetAnimationDelegateBinding
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UWidgetAnimationDelegateBinding : public UDynamicBlueprintBinding
	{
	public:
		TArray<struct FBlueprintWidgetAnimationDelegateBinding>    WidgetAnimationDelegateBindings;                         // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetAnimationPlayCallbackProxy
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UWidgetAnimationPlayCallbackProxy : public UObject
	{
	public:
		class FScriptMulticastDelegate                             Finished;                                                // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2XVR[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		class UWidgetAnimationPlayCallbackProxy* STATIC_CreatePlayAnimationTimeRangeProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed);
		class UWidgetAnimationPlayCallbackProxy* STATIC_CreatePlayAnimationProxyObject(class UUMGSequencePlayer** Result, class UUserWidget* Widget, class UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, EUMGSequencePlayMode PlayMode, float PlaybackSpeed);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.PropertyBinding
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class UPropertyBinding : public UObject
	{
	public:
		TWeakObjectPtr<class UObject>                              SourceObject;                                            // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FDynamicPropertyPath                                SourcePath;                                              // 0x0030(0x0038) NativeAccessSpecifierPublic
		class FName                                                DestinationProperty;                                     // 0x0068(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.BoolBinding
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UBoolBinding : public UPropertyBinding
	{
	public:
		bool GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.BrushBinding
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBrushBinding : public UPropertyBinding
	{
	public:
		unsigned char                                              UnknownData_UYXD[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		struct FSlateBrush GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.CheckedStateBinding
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UCheckedStateBinding : public UPropertyBinding
	{
	public:
		unsigned char                                              UnknownData_P6CK[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		ECheckBoxState GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ColorBinding
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UColorBinding : public UPropertyBinding
	{
	public:
		unsigned char                                              UnknownData_OHQ1[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		struct FSlateColor GetSlateValue();
		struct FLinearColor GetLinearValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.FloatBinding
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UFloatBinding : public UPropertyBinding
	{
	public:
		float GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Int32Binding
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UInt32Binding : public UPropertyBinding
	{
	public:
		int32_t GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MouseCursorBinding
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UMouseCursorBinding : public UPropertyBinding
	{
	public:
		EMouseCursor GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.TextBinding
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UTextBinding : public UPropertyBinding
	{
	public:
		unsigned char                                              UnknownData_WBBF[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		class FText GetTextValue();
		class FString GetStringValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.VisibilityBinding
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UVisibilityBinding : public UPropertyBinding
	{
	public:
		ESlateVisibility GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetBinding
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UWidgetBinding : public UPropertyBinding
	{
	public:
		class UWidget* GetValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.AsyncTaskDownloadImage
	 * Size -> 0x0020 (FullSize[0x0050] - InheritedSize[0x0030])
	 */
	class UAsyncTaskDownloadImage : public UBlueprintAsyncActionBase
	{
	public:
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0030(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFail;                                                  // 0x0040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UAsyncTaskDownloadImage* STATIC_DownloadImage(const class FString& URL);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.GameViewportSubsystem
	 * Size -> 0x0080 (FullSize[0x00B0] - InheritedSize[0x0030])
	 */
	class UGameViewportSubsystem : public UEngineSubsystem
	{
	public:
		unsigned char                                              UnknownData_A7OW[0x80];                                  // 0x0030(0x0080) MISSED OFFSET (PADDING)

	public:
		struct FGameViewportWidgetSlot STATIC_SetWidgetSlotPosition(const struct FGameViewportWidgetSlot& Slot, class UWidget* Widget, const struct FVector2D& Position, bool bRemoveDPIScale);
		struct FGameViewportWidgetSlot STATIC_SetWidgetSlotDesiredSize(const struct FGameViewportWidgetSlot& Slot, const struct FVector2D& Size);
		void SetWidgetSlot(class UWidget* Widget, const struct FGameViewportWidgetSlot& Slot);
		void RemoveWidget(class UWidget* Widget);
		bool IsWidgetAdded(class UWidget* Widget);
		struct FGameViewportWidgetSlot GetWidgetSlot(class UWidget* Widget);
		void AddWidgetForPlayer(class UWidget* Widget, class ULocalPlayer* Player, const struct FGameViewportWidgetSlot& Slot);
		void AddWidget(class UWidget* Widget, const struct FGameViewportWidgetSlot& Slot);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UserListEntry
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUserListEntry : public UInterface
	{
	public:
		void BP_OnItemSelectionChanged(bool bIsSelected);
		void BP_OnItemExpansionChanged(bool bIsExpanded);
		void BP_OnEntryReleased();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UserListEntryLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUserListEntryLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsListItemSelected();
		bool STATIC_IsListItemExpanded();
		class UListViewBase* STATIC_GetOwningListView();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UserObjectListEntry
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUserObjectListEntry : public UUserListEntry
	{
	public:
		void OnListItemObjectSet(class UObject* ListItemObject);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UserObjectListEntryLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UObject* STATIC_GetListItemObject();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.PanelWidget
	 * Size -> 0x0018 (FullSize[0x0168] - InheritedSize[0x0150])
	 */
	class UPanelWidget : public UWidget
	{
	public:
		TArray<class UPanelSlot*>                                  Slots;                                                   // 0x0150(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_868J[0x8];                                   // 0x0160(0x0008) MISSED OFFSET (PADDING)

	public:
		bool RemoveChildAt(int32_t Index);
		bool RemoveChild(class UWidget* Content);
		bool HasChild(class UWidget* Content);
		bool HasAnyChildren();
		int32_t GetChildrenCount();
		int32_t GetChildIndex(class UWidget* Content);
		class UWidget* GetChildAt(int32_t Index);
		TArray<class UWidget*> GetAllChildren();
		void ClearChildren();
		class UPanelSlot* AddChild(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ContentWidget
	 * Size -> 0x0000 (FullSize[0x0168] - InheritedSize[0x0168])
	 */
	class UContentWidget : public UPanelWidget
	{
	public:
		class UPanelSlot* SetContent(class UWidget* Content);
		class UPanelSlot* GetContentSlot();
		class UWidget* GetContent();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.BackgroundBlur
	 * Size -> 0x0128 (FullSize[0x0290] - InheritedSize[0x0168])
	 */
	class UBackgroundBlur : public UContentWidget
	{
	public:
		struct FMargin                                             padding;                                                 // 0x0168(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0178(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0179(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bApplyAlphaToBlur;                                       // 0x017A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W8ZM[0x1];                                   // 0x017B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlurStrength;                                            // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAutoRadiusCalculation;                          // 0x0180(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BSDN[0x3];                                   // 0x0181(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BlurRadius;                                              // 0x0184(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TI56[0x8];                                   // 0x0188(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector4                                            CornerRadius;                                            // 0x0190(0x0020) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateBrush                                         LowQualityFallbackBrush;                                 // 0x01B0(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6MRE[0x10];                                  // 0x0280(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetLowQualityFallbackBrush(const struct FSlateBrush& InBrush);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		void SetCornerRadius(const struct FVector4& InCornerRadius);
		void SetBlurStrength(float InStrength);
		void SetBlurRadius(int32_t InBlurRadius);
		void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.PanelSlot
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UPanelSlot : public UVisual
	{
	public:
		class UPanelWidget*                                        Parent;                                                  // 0x0028(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidget*                                             Content;                                                 // 0x0030(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.BackgroundBlurSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UBackgroundBlurSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_NX52[0x16];                                  // 0x004A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Border
	 * Size -> 0x01A8 (FullSize[0x0310] - InheritedSize[0x0168])
	 */
	class UBorder : public UContentWidget
	{
	public:
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0168(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0169(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowEffectWhenDisabled : 1;                             // 0x016A(0x0001) BIT_FIELD Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9FJU[0x1];                                   // 0x016B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        ContentColorAndOpacity;                                  // 0x016C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ContentColorAndOpacityDelegate;                          // 0x017C(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             padding;                                                 // 0x018C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M8Z0[0x4];                                   // 0x019C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         Background;                                              // 0x01A0(0x00D0) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FScriptDelegate                                      BackgroundDelegate;                                      // 0x0270(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BrushColor;                                              // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      BrushColorDelegate;                                      // 0x0290(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           DesiredSizeScale;                                        // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlipForRightToLeftFlowDirection;                        // 0x02B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2JR9[0x3];                                   // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnMouseButtonDownEvent;                                  // 0x02B4(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseButtonUpEvent;                                    // 0x02C4(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseMoveEvent;                                        // 0x02D4(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnMouseDoubleClickEvent;                                 // 0x02E4(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_58TW[0x1C];                                  // 0x02F4(0x001C) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetShowEffectWhenDisabled(bool bInShowEffectWhenDisabled);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		void SetDesiredSizeScale(const struct FVector2D& InScale);
		void SetContentColorAndOpacity(const struct FLinearColor& InContentColorAndOpacity);
		void SetBrushFromTexture(class UTexture2D* Texture);
		void SetBrushFromMaterial(class UMaterialInterface* Material);
		void SetBrushFromAsset(class USlateBrushAsset* Asset);
		void SetBrushColor(const struct FLinearColor& InBrushColor);
		void SetBrush(const struct FSlateBrush& InBrush);
		class UMaterialInstanceDynamic* GetDynamicMaterial();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.BorderSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UBorderSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_V3HD[0x16];                                  // 0x004A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Button
	 * Size -> 0x0488 (FullSize[0x05F0] - InheritedSize[0x0168])
	 */
	class UButton : public UContentWidget
	{
	public:
		unsigned char                                              UnknownData_I3AC[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        WidgetStyle;                                             // 0x0170(0x03F0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x0560(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        BackgroundColor;                                         // 0x0570(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EButtonClickMethod                                         ClickMethod;                                             // 0x0580(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EButtonTouchMethod                                         TouchMethod;                                             // 0x0581(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EButtonPressMethod                                         PressMethod;                                             // 0x0582(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x0583(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_70SB[0x4];                                   // 0x0584(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x0588(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPressed;                                               // 0x0598(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReleased;                                              // 0x05A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnHovered;                                               // 0x05B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUnhovered;                                             // 0x05C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PTG7[0x18];                                  // 0x05D8(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetTouchMethod(EButtonTouchMethod InTouchMethod);
		void SetStyle(const struct FButtonStyle& InStyle);
		void SetPressMethod(EButtonPressMethod InPressMethod);
		void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
		void SetClickMethod(EButtonClickMethod InClickMethod);
		void SetBackgroundColor(const struct FLinearColor& InBackgroundColor);
		bool IsPressed();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ButtonSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UButtonSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YK0A[0x16];                                  // 0x004A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.CanvasPanel
	 * Size -> 0x0010 (FullSize[0x0178] - InheritedSize[0x0168])
	 */
	class UCanvasPanel : public UPanelWidget
	{
	public:
		unsigned char                                              UnknownData_XGZR[0x10];                                  // 0x0168(0x0010) MISSED OFFSET (PADDING)

	public:
		class UCanvasPanelSlot* AddChildToCanvas(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.CanvasPanelSlot
	 * Size -> 0x0050 (FullSize[0x0088] - InheritedSize[0x0038])
	 */
	class UCanvasPanelSlot : public UPanelSlot
	{
	public:
		struct FAnchorData                                         LayoutData;                                              // 0x0038(0x0040) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bAutoSize;                                               // 0x0078(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QVTC[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ZOrder;                                                  // 0x007C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QNST[0x8];                                   // 0x0080(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetZOrder(int32_t InZOrder);
		void SetSize(const struct FVector2D& InSize);
		void SetPosition(const struct FVector2D& InPosition);
		void SetOffsets(const struct FMargin& InOffset);
		void SetMinimum(const struct FVector2D& InMinimumAnchors);
		void SetMaximum(const struct FVector2D& InMaximumAnchors);
		void SetLayout(const struct FAnchorData& InLayoutData);
		void SetAutoSize(bool InbAutoSize);
		void SetAnchors(const struct FAnchors& InAnchors);
		void SetAlignment(const struct FVector2D& InAlignment);
		int32_t GetZOrder();
		struct FVector2D GetSize();
		struct FVector2D GetPosition();
		struct FMargin GetOffsets();
		struct FAnchorData GetLayout();
		bool GetAutoSize();
		struct FAnchors GetAnchors();
		struct FVector2D GetAlignment();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.CheckBox
	 * Size -> 0x0B18 (FullSize[0x0C80] - InheritedSize[0x0168])
	 */
	class UCheckBox : public UContentWidget
	{
	public:
		ECheckBoxState                                             CheckedState;                                            // 0x0168(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TFHR[0x3];                                   // 0x0169(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      CheckedStateDelegate;                                    // 0x016C(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_87KI[0x4];                                   // 0x017C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCheckBoxStyle                                      WidgetStyle;                                             // 0x0180(0x0AD0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0C50(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EButtonClickMethod                                         ClickMethod;                                             // 0x0C51(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EButtonTouchMethod                                         TouchMethod;                                             // 0x0C52(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EButtonPressMethod                                         PressMethod;                                             // 0x0C53(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x0C54(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_418Z[0x3];                                   // 0x0C55(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCheckStateChanged;                                     // 0x0C58(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LFA7[0x18];                                  // 0x0C68(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetTouchMethod(EButtonTouchMethod InTouchMethod);
		void SetPressMethod(EButtonPressMethod InPressMethod);
		void SetIsChecked(bool InIsChecked);
		void SetClickMethod(EButtonClickMethod InClickMethod);
		void SetCheckedState(ECheckBoxState InCheckedState);
		bool IsPressed();
		bool IsChecked();
		ECheckBoxState GetCheckedState();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.CircularThrobber
	 * Size -> 0x0100 (FullSize[0x0250] - InheritedSize[0x0150])
	 */
	class UCircularThrobber : public UWidget
	{
	public:
		int32_t                                                    NumberOfPieces;                                          // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Period;                                                  // 0x0154(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0158(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NJZI[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         Image;                                                   // 0x0160(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bEnableRadius;                                           // 0x0230(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_66KR[0x1F];                                  // 0x0231(0x001F) MISSED OFFSET (PADDING)

	public:
		void SetRadius(float InRadius);
		void SetPeriod(float InPeriod);
		void SetNumberOfPieces(int32_t InNumberOfPieces);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ComboBox
	 * Size -> 0x07B0 (FullSize[0x0900] - InheritedSize[0x0150])
	 */
	class UComboBox : public UWidget
	{
	public:
		struct FScrollBarStyle                                     ScrollBarStyle;                                          // 0x0150(0x0770) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class UObject*>                                     Items;                                                   // 0x08C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnGenerateWidgetEvent;                                   // 0x08D0(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFocusable;                                            // 0x08E0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UMKL[0x1F];                                  // 0x08E1(0x001F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ComboBoxKey
	 * Size -> 0x1BD0 (FullSize[0x1D20] - InheritedSize[0x0150])
	 */
	class UComboBoxKey : public UWidget
	{
	public:
		TArray<class FName>                                        Options;                                                 // 0x0150(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		class FName                                                SelectedOption;                                          // 0x0160(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_I815[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FComboBoxStyle                                      WidgetStyle;                                             // 0x0170(0x0660) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTableRowStyle                                      ItemStyle;                                               // 0x07D0(0x0D50) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FScrollBarStyle                                     ScrollBarStyle;                                          // 0x1520(0x0770) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FSlateColor                                         ForegroundColor;                                         // 0x1C90(0x0014) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FMargin                                             ContentPadding;                                          // 0x1CA4(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MaxListHeight;                                           // 0x1CB4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasDownArrow;                                           // 0x1CB8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableGamepadNavigationMode;                            // 0x1CB9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFocusable;                                            // 0x1CBA(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1BM7[0x1];                                   // 0x1CBB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnGenerateContentWidget;                                 // 0x1CBC(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnGenerateItemWidget;                                    // 0x1CCC(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8T29[0x4];                                   // 0x1CDC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x1CE0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnOpening;                                               // 0x1CF0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W3SK[0x20];                                  // 0x1D00(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetSelectedOption(const class FName& Option);
		bool RemoveOption(const class FName& Option);
		void OnSelectionChangedEvent__DelegateSignature(const class FName& SelectedItem, ESelectInfo SelectionType);
		void OnOpeningEvent__DelegateSignature();
		bool IsOpen();
		class FName GetSelectedOption();
		class UWidget* GenerateWidgetEvent__DelegateSignature(const class FName& Item);
		void ClearSelection();
		void ClearOptions();
		void AddOption(const class FName& Option);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ComboBoxString
	 * Size -> 0x1C50 (FullSize[0x1DA0] - InheritedSize[0x0150])
	 */
	class UComboBoxString : public UWidget
	{
	public:
		TArray<class FString>                                      DefaultOptions;                                          // 0x0150(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		class FString                                              SelectedOption;                                          // 0x0160(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FComboBoxStyle                                      WidgetStyle;                                             // 0x0170(0x0660) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTableRowStyle                                      ItemStyle;                                               // 0x07D0(0x0D50) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FScrollBarStyle                                     ScrollBarStyle;                                          // 0x1520(0x0770) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FMargin                                             ContentPadding;                                          // 0x1C90(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MaxListHeight;                                           // 0x1CA0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HasDownArrow;                                            // 0x1CA4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableGamepadNavigationMode;                             // 0x1CA5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EXZV[0x2];                                   // 0x1CA6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x1CA8(0x0058) Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         ForegroundColor;                                         // 0x1D00(0x0014) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bIsFocusable;                                            // 0x1D14(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PDQN[0x3];                                   // 0x1D15(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnGenerateWidgetEvent;                                   // 0x1D18(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x1D28(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnOpening;                                               // 0x1D38(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KM0N[0x58];                                  // 0x1D48(0x0058) MISSED OFFSET (PADDING)

	public:
		void SetSelectedOption(const class FString& Option);
		void SetSelectedIndex(int32_t Index);
		void SetIsOpen(bool InIsOpen, bool bFocusMenu, int32_t FocusUserIndex);
		bool RemoveOption(const class FString& Option);
		void RefreshOptions();
		void OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void OnOpeningEvent__DelegateSignature();
		bool IsOpen();
		class FString GetSelectedOption();
		int32_t GetSelectedIndex();
		int32_t GetOptionCount();
		class FString GetOptionAtIndex(int32_t Index);
		int32_t FindOptionIndex(const class FString& Option);
		void ClearSelection();
		void ClearOptions();
		void AddOption(const class FString& Option);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.DynamicEntryBoxBase
	 * Size -> 0x00E0 (FullSize[0x0230] - InheritedSize[0x0150])
	 */
	class UDynamicEntryBoxBase : public UWidget
	{
	public:
		struct FVector2D                                           EntrySpacing;                                            // 0x0150(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<struct FVector2D>                                   SpacingPattern;                                          // 0x0160(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		EDynamicBoxType                                            EntryBoxType;                                            // 0x0170(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BBPB[0x3];                                   // 0x0171(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateChildSize                                     EntrySizeRule;                                           // 0x0174(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected
		EHorizontalAlignment                                       EntryHorizontalAlignment;                                // 0x017C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EVerticalAlignment                                         EntryVerticalAlignment;                                  // 0x017D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_MIN6[0x2];                                   // 0x017E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxElementSize;                                          // 0x0180(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FRadialBoxSettings                                  RadialBoxSettings;                                       // 0x0184(0x0010) Edit, BlueprintVisible, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_GOOG[0x14];                                  // 0x0194(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FUserWidgetPool                                     EntryWidgetPool;                                         // 0x01A8(0x0088) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		void SetRadialSettings(const struct FRadialBoxSettings& InSettings);
		void SetEntrySpacing(const struct FVector2D& InEntrySpacing);
		int32_t GetNumEntries();
		TArray<class UUserWidget*> GetAllEntries();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.DynamicEntryBox
	 * Size -> 0x0008 (FullSize[0x0238] - InheritedSize[0x0230])
	 */
	class UDynamicEntryBox : public UDynamicEntryBoxBase
	{
	public:
		class UClass*                                              EntryWidgetClass;                                        // 0x0230(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Reset(bool bDeleteWidgets);
		void RemoveEntry(class UUserWidget* EntryWidget);
		class UUserWidget* BP_CreateEntryOfClass(class UClass* EntryClass);
		class UUserWidget* BP_CreateEntry();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.EditableText
	 * Size -> 0x0390 (FullSize[0x04E0] - InheritedSize[0x0150])
	 */
	class UEditableText : public UWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0150(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FScriptDelegate                                      TextDelegate;                                            // 0x0168(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                HintText;                                                // 0x0178(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FScriptDelegate                                      HintTextDelegate;                                        // 0x0190(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEditableTextStyle                                  WidgetStyle;                                             // 0x01A0(0x02F0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       IsReadOnly;                                              // 0x0490(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPassword;                                              // 0x0491(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AAN8[0x2];                                   // 0x0492(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDesiredWidth;                                     // 0x0494(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCaretMovedWhenGainFocus;                               // 0x0498(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextWhenFocused;                                // 0x0499(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RevertTextOnEscape;                                      // 0x049A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClearKeyboardFocusOnCommit;                              // 0x049B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextOnCommit;                                   // 0x049C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowContextMenu;                                        // 0x049D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVirtualKeyboardType                                       KeyboardType;                                            // 0x049E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVirtualKeyboardOptions                             VirtualKeyboardOptions;                                  // 0x049F(0x0001) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		EVirtualKeyboardTrigger                                    VirtualKeyboardTrigger;                                  // 0x04A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVirtualKeyboardDismissAction                              VirtualKeyboardDismissAction;                            // 0x04A1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextJustify                                               Justification;                                           // 0x04A2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextOverflowPolicy                                        OverflowPolicy;                                          // 0x04A3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FShapedTextOptions                                  ShapedTextOptions;                                       // 0x04A4(0x0003) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0WVK[0x1];                                   // 0x04A7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x04A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x04B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JYGQ[0x18];                                  // 0x04C8(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy);
		void SetText(const class FText& InText);
		void SetMinimumDesiredWidth(float InMinDesiredWidth);
		void SetJustification(ETextJustify InJustification);
		void SetIsReadOnly(bool InbIsReadyOnly);
		void SetIsPassword(bool InbIsPassword);
		void SetHintText(const class FText& InHintText);
		void SetFontOutlineMaterial(class UMaterialInterface* InMaterial);
		void SetFontMaterial(class UMaterialInterface* InMaterial);
		void SetFont(const struct FSlateFontInfo& InFontInfo);
		void OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		class FText GetText();
		ETextJustify GetJustification();
		class FText GetHintText();
		struct FSlateFontInfo GetFont();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.EditableTextBox
	 * Size -> 0x0F20 (FullSize[0x1070] - InheritedSize[0x0150])
	 */
	class UEditableTextBox : public UWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0150(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FScriptDelegate                                      TextDelegate;                                            // 0x0168(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F1FO[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEditableTextBoxStyle                               WidgetStyle;                                             // 0x0180(0x0E80) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                HintText;                                                // 0x1000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FScriptDelegate                                      HintTextDelegate;                                        // 0x1018(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsReadOnly;                                              // 0x1028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsPassword;                                              // 0x1029(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UQ68[0x2];                                   // 0x102A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinimumDesiredWidth;                                     // 0x102C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsCaretMovedWhenGainFocus;                               // 0x1030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextWhenFocused;                                // 0x1031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RevertTextOnEscape;                                      // 0x1032(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClearKeyboardFocusOnCommit;                              // 0x1033(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextOnCommit;                                   // 0x1034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowContextMenu;                                        // 0x1035(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVirtualKeyboardType                                       KeyboardType;                                            // 0x1036(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVirtualKeyboardOptions                             VirtualKeyboardOptions;                                  // 0x1037(0x0001) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		EVirtualKeyboardTrigger                                    VirtualKeyboardTrigger;                                  // 0x1038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVirtualKeyboardDismissAction                              VirtualKeyboardDismissAction;                            // 0x1039(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextJustify                                               Justification;                                           // 0x103A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextOverflowPolicy                                        OverflowPolicy;                                          // 0x103B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FShapedTextOptions                                  ShapedTextOptions;                                       // 0x103C(0x0003) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DYMC[0x1];                                   // 0x103F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x1040(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x1050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZEKP[0x10];                                  // 0x1060(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy);
		void SetText(const class FText& InText);
		void SetJustification(ETextJustify InJustification);
		void SetIsReadOnly(bool bReadOnly);
		void SetIsPassword(bool bIsPassword);
		void SetHintText(const class FText& InText);
		void SetForegroundColor(const struct FLinearColor& Color);
		void SetError(const class FText& InError);
		void OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		bool HasError();
		class FText GetText();
		void ClearError();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ExpandableArea
	 * Size -> 0x0310 (FullSize[0x0460] - InheritedSize[0x0150])
	 */
	class UExpandableArea : public UWidget
	{
	public:
		unsigned char                                              UnknownData_9JXW[0x10];                                  // 0x0150(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FExpandableAreaStyle                                Style;                                                   // 0x0160(0x01C0) Edit, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BorderBrush;                                             // 0x0320(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateColor                                         BorderColor;                                             // 0x03F0(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsExpanded;                                             // 0x0404(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_07B4[0x3];                                   // 0x0405(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxHeight;                                               // 0x0408(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             HeaderPadding;                                           // 0x040C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             AreaPadding;                                             // 0x041C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CP0Z[0x4];                                   // 0x042C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnExpansionChanged;                                      // 0x0430(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UWidget*                                             HeaderContent;                                           // 0x0440(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidget*                                             BodyContent;                                             // 0x0448(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_884J[0x10];                                  // 0x0450(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetIsExpanded_Animated(bool IsExpanded);
		void SetIsExpanded(bool IsExpanded);
		bool GetIsExpanded();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.GridPanel
	 * Size -> 0x0030 (FullSize[0x0198] - InheritedSize[0x0168])
	 */
	class UGridPanel : public UPanelWidget
	{
	public:
		TArray<float>                                              ColumnFill;                                              // 0x0168(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<float>                                              RowFill;                                                 // 0x0178(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RLHD[0x10];                                  // 0x0188(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetRowFill(int32_t RowIndex, float Coefficient);
		void SetColumnFill(int32_t ColumnIndex, float Coefficient);
		class UGridSlot* AddChildToGrid(class UWidget* Content, int32_t InRow, int32_t InColumn);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.GridSlot
	 * Size -> 0x0040 (FullSize[0x0078] - InheritedSize[0x0038])
	 */
	class UGridSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7JO9[0x2];                                   // 0x004A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Row;                                                     // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RowSpan;                                                 // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Column;                                                  // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ColumnSpan;                                              // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Layer;                                                   // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           Nudge;                                                   // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_79O2[0x8];                                   // 0x0070(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetRowSpan(int32_t InRowSpan);
		void SetRow(int32_t InRow);
		void SetPadding(const struct FMargin& InPadding);
		void SetNudge(const struct FVector2D& InNudge);
		void SetLayer(int32_t InLayer);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		void SetColumnSpan(int32_t InColumnSpan);
		void SetColumn(int32_t InColumn);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.HorizontalBox
	 * Size -> 0x0010 (FullSize[0x0178] - InheritedSize[0x0168])
	 */
	class UHorizontalBox : public UPanelWidget
	{
	public:
		unsigned char                                              UnknownData_1EYO[0x10];                                  // 0x0168(0x0010) MISSED OFFSET (PADDING)

	public:
		class UHorizontalBoxSlot* AddChildToHorizontalBox(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.HorizontalBoxSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UHorizontalBoxSlot : public UPanelSlot
	{
	public:
		unsigned char                                              UnknownData_IJAV[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateChildSize                                     Size;                                                    // 0x0040(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             padding;                                                 // 0x0048(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0059(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RCY1[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetSize(const struct FSlateChildSize& InSize);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Image
	 * Size -> 0x0160 (FullSize[0x02B0] - InheritedSize[0x0150])
	 */
	class UImage : public UWidget
	{
	public:
		struct FSlateBrush                                         Brush;                                                   // 0x0150(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FScriptDelegate                                      BrushDelegate;                                           // 0x0220(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ColorAndOpacity;                                         // 0x0230(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ColorAndOpacityDelegate;                                 // 0x0240(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFlipForRightToLeftFlowDirection;                        // 0x0250(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QUFM[0x3];                                   // 0x0251(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnMouseButtonDownEvent;                                  // 0x0254(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LFTN[0x4C];                                  // 0x0264(0x004C) MISSED OFFSET (PADDING)

	public:
		void SetOpacity(float InOpacity);
		void SetDesiredSizeOverride(const struct FVector2D& DesiredSize);
		void SetColorAndOpacity(const struct FLinearColor& InColorAndOpacity);
		void SetBrushTintColor(const struct FSlateColor& TintColor);
		void SetBrushResourceObject(class UObject* ResourceObject);
		void SetBrushFromTextureDynamic(class UTexture2DDynamic* Texture, bool bMatchSize);
		void SetBrushFromTexture(class UTexture2D* Texture, bool bMatchSize);
		void SetBrushFromSoftTexture(bool bMatchSize);
		void SetBrushFromSoftMaterial();
		void SetBrushFromMaterial(class UMaterialInterface* Material);
		void SetBrushFromAtlasInterface(bool bMatchSize);
		void SetBrushFromAsset(class USlateBrushAsset* Asset);
		void SetBrush(const struct FSlateBrush& InBrush);
		class UMaterialInstanceDynamic* GetDynamicMaterial();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.InputKeySelector
	 * Size -> 0x07E0 (FullSize[0x0930] - InheritedSize[0x0150])
	 */
	class UInputKeySelector : public UWidget
	{
	public:
		struct FButtonStyle                                        WidgetStyle;                                             // 0x0150(0x03F0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     TextStyle;                                               // 0x0540(0x0340) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FInputChord                                         SelectedKey;                                             // 0x0880(0x0020) BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             Margin;                                                  // 0x08A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		class FText                                                KeySelectionText;                                        // 0x08B0(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                NoKeySpecifiedText;                                      // 0x08C8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bAllowModifierKeys;                                      // 0x08E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowGamepadKeys;                                       // 0x08E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YD8C[0x6];                                   // 0x08E2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FKey>                                        EscapeKeys;                                              // 0x08E8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnKeySelected;                                           // 0x08F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnIsSelectingKeyChanged;                                 // 0x0908(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5257[0x18];                                  // 0x0918(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetTextBlockVisibility(ESlateVisibility InVisibility);
		void SetSelectedKey(const struct FInputChord& InSelectedKey);
		void SetNoKeySpecifiedText(const class FText& InNoKeySpecifiedText);
		void SetKeySelectionText(const class FText& InKeySelectionText);
		void SetEscapeKeys(TArray<struct FKey> InKeys);
		void SetAllowModifierKeys(bool bInAllowModifierKeys);
		void SetAllowGamepadKeys(bool bInAllowGamepadKeys);
		void OnKeySelected__DelegateSignature(const struct FInputChord& SelectedKey);
		void OnIsSelectingKeyChanged__DelegateSignature();
		bool GetIsSelectingKey();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.InvalidationBox
	 * Size -> 0x0018 (FullSize[0x0180] - InheritedSize[0x0168])
	 */
	class UInvalidationBox : public UContentWidget
	{
	public:
		bool                                                       bCanCache;                                               // 0x0168(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0956[0x17];                                  // 0x0169(0x0017) MISSED OFFSET (PADDING)

	public:
		void SetCanCache(bool CanCache);
		void InvalidateCache();
		bool GetCanCache();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MenuAnchor
	 * Size -> 0x0050 (FullSize[0x01B8] - InheritedSize[0x0168])
	 */
	class UMenuAnchor : public UContentWidget
	{
	public:
		class UClass*                                              MenuClass;                                               // 0x0168(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnGetMenuContentEvent;                                   // 0x0170(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnGetUserMenuContentEvent;                               // 0x0180(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMenuPlacement                                             Placement;                                               // 0x0190(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFitInWindow;                                            // 0x0191(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ShouldDeferPaintingAfterWindowContent;                   // 0x0192(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       UseApplicationMenuStack;                                 // 0x0193(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_25XQ[0x4];                                   // 0x0194(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMenuOpenChanged;                                       // 0x0198(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VNG9[0x10];                                  // 0x01A8(0x0010) MISSED OFFSET (PADDING)

	public:
		void ToggleOpen(bool bFocusOnOpen);
		bool ShouldOpenDueToClick();
		void SetPlacement(EMenuPlacement InPlacement);
		void Open(bool bFocusMenu);
		bool IsOpen();
		bool HasOpenSubMenus();
		class UUserWidget* GetUserWidget__DelegateSignature();
		struct FVector2D GetMenuPosition();
		void FitInWindow(bool bFit);
		void Close();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.TextLayoutWidget
	 * Size -> 0x0020 (FullSize[0x0170] - InheritedSize[0x0150])
	 */
	class UTextLayoutWidget : public UWidget
	{
	public:
		struct FShapedTextOptions                                  ShapedTextOptions;                                       // 0x0150(0x0003) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		ETextJustify                                               Justification;                                           // 0x0153(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETextWrappingPolicy                                        WrappingPolicy;                                          // 0x0154(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       AutoWrapText : 1;                                        // 0x0155(0x0001) BIT_FIELD Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_CD6D[0x2];                                   // 0x0156(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WrapTextAt;                                              // 0x0158(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FMargin                                             Margin;                                                  // 0x015C(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		float                                                      LineHeightPercentage;                                    // 0x016C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		void SetJustification(ETextJustify InJustification);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MultiLineEditableText
	 * Size -> 0x03C0 (FullSize[0x0530] - InheritedSize[0x0170])
	 */
	class UMultiLineEditableText : public UTextLayoutWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0170(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                HintText;                                                // 0x0188(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FScriptDelegate                                      HintTextDelegate;                                        // 0x01A0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTextBlockStyle                                     WidgetStyle;                                             // 0x01B0(0x0340) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsReadOnly;                                             // 0x04F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextWhenFocused;                                // 0x04F1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClearTextSelectionOnFocusLoss;                           // 0x04F2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RevertTextOnEscape;                                      // 0x04F3(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClearKeyboardFocusOnCommit;                              // 0x04F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowContextMenu;                                        // 0x04F5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVirtualKeyboardOptions                             VirtualKeyboardOptions;                                  // 0x04F6(0x0001) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		EVirtualKeyboardDismissAction                              VirtualKeyboardDismissAction;                            // 0x04F7(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x04F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x0508(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZG8G[0x18];                                  // 0x0518(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetWidgetStyle(const struct FTextBlockStyle& InWidgetStyle);
		void SetText(const class FText& InText);
		void SetIsReadOnly(bool bReadOnly);
		void SetHintText(const class FText& InHintText);
		void SetFontOutlineMaterial(class UMaterialInterface* InMaterial);
		void SetFontMaterial(class UMaterialInterface* InMaterial);
		void SetFont(const struct FSlateFontInfo& InFontInfo);
		void OnMultiLineEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnMultiLineEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		class FText GetText();
		class FText GetHintText();
		struct FSlateFontInfo GetFont();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.MultiLineEditableTextBox
	 * Size -> 0x0F00 (FullSize[0x1070] - InheritedSize[0x0170])
	 */
	class UMultiLineEditableTextBox : public UTextLayoutWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0170(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FText                                                HintText;                                                // 0x0188(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FScriptDelegate                                      HintTextDelegate;                                        // 0x01A0(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FEditableTextBoxStyle                               WidgetStyle;                                             // 0x01B0(0x0E80) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bIsReadOnly;                                             // 0x1030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowContextMenu;                                        // 0x1031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVirtualKeyboardOptions                             VirtualKeyboardOptions;                                  // 0x1032(0x0001) Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic
		EVirtualKeyboardDismissAction                              VirtualKeyboardDismissAction;                            // 0x1033(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_18CC[0x4];                                   // 0x1034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnTextChanged;                                           // 0x1038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnTextCommitted;                                         // 0x1048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_56YZ[0x18];                                  // 0x1058(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetTextStyle(const struct FTextBlockStyle& InTextStyle);
		void SetText(const class FText& InText);
		void SetIsReadOnly(bool bReadOnly);
		void SetHintText(const class FText& InHintText);
		void SetForegroundColor(const struct FLinearColor& Color);
		void SetError(const class FText& InError);
		void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(const class FText& Text);
		class FText GetText();
		class FText GetHintText();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.NamedSlot
	 * Size -> 0x0010 (FullSize[0x0178] - InheritedSize[0x0168])
	 */
	class UNamedSlot : public UContentWidget
	{
	public:
		unsigned char                                              UnknownData_R8SH[0x10];                                  // 0x0168(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.NamedSlotInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UNamedSlotInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.NativeWidgetHost
	 * Size -> 0x0010 (FullSize[0x0160] - InheritedSize[0x0150])
	 */
	class UNativeWidgetHost : public UWidget
	{
	public:
		unsigned char                                              UnknownData_19RU[0x10];                                  // 0x0150(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Overlay
	 * Size -> 0x0010 (FullSize[0x0178] - InheritedSize[0x0168])
	 */
	class UOverlay : public UPanelWidget
	{
	public:
		unsigned char                                              UnknownData_P0PI[0x10];                                  // 0x0168(0x0010) MISSED OFFSET (PADDING)

	public:
		bool ReplaceOverlayChildAt(int32_t Index, class UWidget* Content);
		class UOverlaySlot* AddChildToOverlay(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.OverlaySlot
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UOverlaySlot : public UPanelSlot
	{
	public:
		unsigned char                                              UnknownData_4FW9[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             padding;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JXYY[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ProgressBar
	 * Size -> 0x02F0 (FullSize[0x0440] - InheritedSize[0x0150])
	 */
	class UProgressBar : public UWidget
	{
	public:
		struct FProgressBarStyle                                   WidgetStyle;                                             // 0x0150(0x0290) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      Percent;                                                 // 0x03E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EProgressBarFillType                                       BarFillType;                                             // 0x03E4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EProgressBarFillStyle                                      BarFillStyle;                                            // 0x03E5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMarquee;                                              // 0x03E6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ALZ5[0x1];                                   // 0x03E7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           BorderPadding;                                           // 0x03E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      PercentDelegate;                                         // 0x03F8(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        FillColorAndOpacity;                                     // 0x0408(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      FillColorAndOpacityDelegate;                             // 0x0418(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PLNG[0x18];                                  // 0x0428(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetPercent(float InPercent);
		void SetIsMarquee(bool InbIsMarquee);
		void SetFillColorAndOpacity(const struct FLinearColor& InColor);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.RetainerBox
	 * Size -> 0x0030 (FullSize[0x0198] - InheritedSize[0x0168])
	 */
	class URetainerBox : public UContentWidget
	{
	public:
		bool                                                       bRetainRender;                                           // 0x0168(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       RenderOnInvalidation;                                    // 0x0169(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RenderOnPhase;                                           // 0x016A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_59KI[0x1];                                   // 0x016B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Phase;                                                   // 0x016C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PhaseCount;                                              // 0x0170(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CM32[0x4];                                   // 0x0174(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInterface*                                  EffectMaterial;                                          // 0x0178(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                TextureParameter;                                        // 0x0180(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6J61[0x10];                                  // 0x0188(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetTextureParameter(const class FName& TextureParameter);
		void SetRetainRendering(bool bInRetainRendering);
		void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases);
		void SetEffectMaterial(class UMaterialInterface* EffectMaterial);
		void RequestRender();
		class UMaterialInstanceDynamic* GetEffectMaterial();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.RichTextBlock
	 * Size -> 0x0700 (FullSize[0x0870] - InheritedSize[0x0170])
	 */
	class URichTextBlock : public UTextLayoutWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0170(0x0018) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		class UDataTable*                                          TextStyleSet;                                            // 0x0188(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      DecoratorClasses;                                        // 0x0190(0x0010) Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		bool                                                       bOverrideDefaultStyle;                                   // 0x01A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JF0N[0xF];                                   // 0x01A1(0x000F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTextBlockStyle                                     DefaultTextStyleOverride;                                // 0x01B0(0x0340) Edit, BlueprintVisible, Protected, NativeAccessSpecifierProtected
		float                                                      MinDesiredWidth;                                         // 0x04F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETextTransformPolicy                                       TextTransformPolicy;                                     // 0x04F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETextOverflowPolicy                                        TextOverflowPolicy;                                      // 0x04F5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_9JJL[0xA];                                   // 0x04F6(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTextBlockStyle                                     DefaultTextStyle;                                        // 0x0500(0x0340) Transient, Protected, NativeAccessSpecifierProtected
		TArray<class URichTextBlockDecorator*>                     InstanceDecorators;                                      // 0x0840(0x0010) ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_22PW[0x20];                                  // 0x0850(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetWrapTextAt(float InWrapTextAt);
		void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);
		void SetTextStyleSet(class UDataTable* NewTextStyleSet);
		void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy);
		void SetText(const class FText& InText);
		void SetMinDesiredWidth(float InMinDesiredWidth);
		void SetDefaultTextStyle(const struct FTextBlockStyle& InDefaultTextStyle);
		void SetDefaultStrikeBrush(struct FSlateBrush* InStrikeBrush);
		void SetDefaultShadowOffset(const struct FVector2D& InShadowOffset);
		void SetDefaultShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
		void SetDefaultMaterial(class UMaterialInterface* InMaterial);
		void SetDefaultFont(const struct FSlateFontInfo& InFontInfo);
		void SetDefaultColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
		void SetDecorators(TArray<class UClass*> InDecoratorClasses);
		void SetAutoWrapText(bool InAutoTextWrap);
		void RefreshTextLayout();
		class UDataTable* GetTextStyleSet();
		class FText GetText();
		class UMaterialInstanceDynamic* GetDefaultDynamicMaterial();
		class URichTextBlockDecorator* GetDecoratorByClass(class UClass* DecoratorClass);
		void ClearAllDefaultStyleOverrides();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.RichTextBlockDecorator
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URichTextBlockDecorator : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.RichTextBlockImageDecorator
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class URichTextBlockImageDecorator : public URichTextBlockDecorator
	{
	public:
		class UDataTable*                                          ImageSet;                                                // 0x0028(0x0008) Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SafeZone
	 * Size -> 0x0018 (FullSize[0x0180] - InheritedSize[0x0168])
	 */
	class USafeZone : public UContentWidget
	{
	public:
		bool                                                       PadLeft;                                                 // 0x0168(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PadRight;                                                // 0x0169(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PadTop;                                                  // 0x016A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PadBottom;                                               // 0x016B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_05ZC[0x14];                                  // 0x016C(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SafeZoneSlot
	 * Size -> 0x0038 (FullSize[0x0070] - InheritedSize[0x0038])
	 */
	class USafeZoneSlot : public UPanelSlot
	{
	public:
		bool                                                       bIsTitleSafe;                                            // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X76B[0x3];                                   // 0x0039(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             SafeAreaScale;                                           // 0x003C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HAlign;                                                  // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VAlign;                                                  // 0x004D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_33OW[0x2];                                   // 0x004E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             padding;                                                 // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DBQN[0x10];                                  // 0x0060(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScaleBox
	 * Size -> 0x0020 (FullSize[0x0188] - InheritedSize[0x0168])
	 */
	class UScaleBox : public UContentWidget
	{
	public:
		EStretch                                                   Stretch;                                                 // 0x0168(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStretchDirection                                          StretchDirection;                                        // 0x0169(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DLR5[0x2];                                   // 0x016A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UserSpecifiedScale;                                      // 0x016C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreInheritedScale;                                    // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GDF1[0x17];                                  // 0x0171(0x0017) MISSED OFFSET (PADDING)

	public:
		void SetUserSpecifiedScale(float InUserSpecifiedScale);
		void SetStretchDirection(EStretchDirection InStretchDirection);
		void SetStretch(EStretch InStretch);
		void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScaleBoxSlot
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UScaleBoxSlot : public UPanelSlot
	{
	public:
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0039(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YC28[0x16];                                  // 0x003A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Scrollbar
	 * Size -> 0x07B0 (FullSize[0x0900] - InheritedSize[0x0150])
	 */
	class UScrollbar : public UWidget
	{
	public:
		struct FScrollBarStyle                                     WidgetStyle;                                             // 0x0150(0x0770) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bAlwaysShowScrollbar;                                    // 0x08C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysShowScrollbarTrack;                               // 0x08C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x08C2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WWOO[0x5];                                   // 0x08C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Thickness;                                               // 0x08C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             padding;                                                 // 0x08D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MGAF[0x18];                                  // 0x08E8(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetState(float InOffsetFraction, float InThumbSizeFraction);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScrollBox
	 * Size -> 0x0B58 (FullSize[0x0CC0] - InheritedSize[0x0168])
	 */
	class UScrollBox : public UPanelWidget
	{
	public:
		unsigned char                                              UnknownData_AXF6[0x8];                                   // 0x0168(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScrollBoxStyle                                     WidgetStyle;                                             // 0x0170(0x0370) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FScrollBarStyle                                     WidgetBarStyle;                                          // 0x04E0(0x0770) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x0C50(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlateVisibility                                           ScrollBarVisibility;                                     // 0x0C51(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EConsumeMouseWheel                                         ConsumeMouseWheel;                                       // 0x0C52(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VIAR[0x5];                                   // 0x0C53(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           ScrollbarThickness;                                      // 0x0C58(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             ScrollbarPadding;                                        // 0x0C68(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       AlwaysShowScrollbar;                                     // 0x0C78(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AlwaysShowScrollbarTrack;                                // 0x0C79(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       AllowOverscroll;                                         // 0x0C7A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       BackPadScrolling;                                        // 0x0C7B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FrontPadScrolling;                                       // 0x0C7C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimateWheelScrolling;                                  // 0x0C7D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDescendantScrollDestination                               NavigationDestination;                                   // 0x0C7E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2UIU[0x1];                                   // 0x0C7F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      NavigationScrollPadding;                                 // 0x0C80(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EScrollWhenFocusChanges                                    ScrollWhenFocusChanges;                                  // 0x0C84(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowRightClickDragScrolling;                           // 0x0C85(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XQ45[0x2];                                   // 0x0C86(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WheelScrollMultiplier;                                   // 0x0C88(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CYIW[0x4];                                   // 0x0C8C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnUserScrolled;                                          // 0x0C90(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0DPE[0x20];                                  // 0x0CA0(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetWheelScrollMultiplier(float NewWheelScrollMultiplier);
		void SetScrollWhenFocusChanges(EScrollWhenFocusChanges NewScrollWhenFocusChanges);
		void SetScrollOffset(float NewScrollOffset);
		void SetScrollbarVisibility(ESlateVisibility NewScrollBarVisibility);
		void SetScrollbarThickness(const struct FVector2D& NewScrollbarThickness);
		void SetScrollbarPadding(const struct FMargin& NewScrollbarPadding);
		void SetOrientation(EOrientation NewOrientation);
		void SetNavigationDestination(EDescendantScrollDestination NewNavigationDestination);
		void SetConsumeMouseWheel(EConsumeMouseWheel NewConsumeMouseWheel);
		void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling);
		void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar);
		void SetAllowOverscroll(bool NewAllowOverscroll);
		void ScrollWidgetIntoView(class UWidget* WidgetToFind, bool AnimateScroll, EDescendantScrollDestination ScrollDestination, float padding);
		void ScrollToStart();
		void ScrollToEnd();
		float GetViewOffsetFraction();
		float GetViewFraction();
		float GetScrollOffsetOfEnd();
		float GetScrollOffset();
		void EndInertialScrolling();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.ScrollBoxSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UScrollBoxSlot : public UPanelSlot
	{
	public:
		struct FSlateChildSize                                     Size;                                                    // 0x0038(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPrivate
		struct FMargin                                             padding;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0050(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0051(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5V9A[0xE];                                   // 0x0052(0x000E) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SizeBox
	 * Size -> 0x0038 (FullSize[0x01A0] - InheritedSize[0x0168])
	 */
	class USizeBox : public UContentWidget
	{
	public:
		unsigned char                                              UnknownData_5X8V[0x10];                                  // 0x0168(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      WidthOverride;                                           // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HeightOverride;                                          // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDesiredWidth;                                         // 0x0180(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDesiredHeight;                                        // 0x0184(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDesiredWidth;                                         // 0x0188(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxDesiredHeight;                                        // 0x018C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinAspectRatio;                                          // 0x0190(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxAspectRatio;                                          // 0x0194(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride_WidthOverride : 1;                             // 0x0198(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride_HeightOverride : 1;                            // 0x0198(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride_MinDesiredWidth : 1;                           // 0x0198(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride_MinDesiredHeight : 1;                          // 0x0198(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride_MaxDesiredWidth : 1;                           // 0x0198(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride_MaxDesiredHeight : 1;                          // 0x0198(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride_MinAspectRatio : 1;                            // 0x0198(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverride_MaxAspectRatio : 1;                            // 0x0198(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M0Y1[0x7];                                   // 0x0199(0x0007) MISSED OFFSET (PADDING)

	public:
		void SetWidthOverride(float InWidthOverride);
		void SetMinDesiredWidth(float InMinDesiredWidth);
		void SetMinDesiredHeight(float InMinDesiredHeight);
		void SetMinAspectRatio(float InMinAspectRatio);
		void SetMaxDesiredWidth(float InMaxDesiredWidth);
		void SetMaxDesiredHeight(float InMaxDesiredHeight);
		void SetMaxAspectRatio(float InMaxAspectRatio);
		void SetHeightOverride(float InHeightOverride);
		void ClearWidthOverride();
		void ClearMinDesiredWidth();
		void ClearMinDesiredHeight();
		void ClearMinAspectRatio();
		void ClearMaxDesiredWidth();
		void ClearMaxDesiredHeight();
		void ClearMaxAspectRatio();
		void ClearHeightOverride();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SizeBoxSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class USizeBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JJIY[0x10];                                  // 0x0048(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0059(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q80D[0x6];                                   // 0x005A(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Slider
	 * Size -> 0x05B0 (FullSize[0x0700] - InheritedSize[0x0150])
	 */
	class USlider : public UWidget
	{
	public:
		float                                                      Value;                                                   // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ValueDelegate;                                           // 0x0154(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinValue;                                                // 0x0164(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxValue;                                                // 0x0168(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PVMT[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSliderStyle                                        WidgetStyle;                                             // 0x0170(0x0500) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x0670(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HIFZ[0x3];                                   // 0x0671(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        SliderBarColor;                                          // 0x0674(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        SliderHandleColor;                                       // 0x0684(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IndentHandle;                                            // 0x0694(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Locked;                                                  // 0x0695(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MouseUsesStep;                                           // 0x0696(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       RequiresControllerLock;                                  // 0x0697(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StepSize;                                                // 0x0698(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsFocusable;                                             // 0x069C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LCMR[0x3];                                   // 0x069D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMouseCaptureBegin;                                     // 0x06A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnMouseCaptureEnd;                                       // 0x06B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControllerCaptureBegin;                                // 0x06C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControllerCaptureEnd;                                  // 0x06D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x06E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_21QF[0x10];                                  // 0x06F0(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetValue(float InValue);
		void SetStepSize(float InValue);
		void SetSliderHandleColor(const struct FLinearColor& InValue);
		void SetSliderBarColor(const struct FLinearColor& InValue);
		void SetMinValue(float InValue);
		void SetMaxValue(float InValue);
		void SetLocked(bool InValue);
		void SetIndentHandle(bool InValue);
		float GetValue();
		float GetNormalizedValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Spacer
	 * Size -> 0x0020 (FullSize[0x0170] - InheritedSize[0x0150])
	 */
	class USpacer : public UWidget
	{
	public:
		struct FVector2D                                           Size;                                                    // 0x0150(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_81EY[0x10];                                  // 0x0160(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetSize(const struct FVector2D& InSize);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SpinBox
	 * Size -> 0x0720 (FullSize[0x0870] - InheritedSize[0x0150])
	 */
	class USpinBox : public UWidget
	{
	public:
		float                                                      Value;                                                   // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ValueDelegate;                                           // 0x0154(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R6PF[0xC];                                   // 0x0164(0x000C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSpinBoxStyle                                       WidgetStyle;                                             // 0x0170(0x0600) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		int32_t                                                    MinFractionalDigits;                                     // 0x0770(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxFractionalDigits;                                     // 0x0774(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAlwaysUsesDeltaSnap;                                    // 0x0778(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableSlider;                                           // 0x0779(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MS7V[0x2];                                   // 0x077A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Delta;                                                   // 0x077C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SliderExponent;                                          // 0x0780(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5NMN[0x4];                                   // 0x0784(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x0788(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextJustify                                               Justification;                                           // 0x07E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_916D[0x3];                                   // 0x07E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinDesiredWidth;                                         // 0x07E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVirtualKeyboardType                                       KeyboardType;                                            // 0x07E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ClearKeyboardFocusOnCommit;                              // 0x07E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       SelectAllTextOnCommit;                                   // 0x07EA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O6TA[0x1];                                   // 0x07EB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateColor                                         ForegroundColor;                                         // 0x07EC(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueChanged;                                          // 0x0800(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnValueCommitted;                                        // 0x0810(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBeginSliderMovement;                                   // 0x0820(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEndSliderMovement;                                     // 0x0830(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bOverride_MinValue : 1;                                  // 0x0840(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOverride_MaxValue : 1;                                  // 0x0840(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOverride_MinSliderValue : 1;                            // 0x0840(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bOverride_MaxSliderValue : 1;                            // 0x0840(0x0001) BIT_FIELD Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FLMK[0x3];                                   // 0x0841(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinValue;                                                // 0x0844(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxValue;                                                // 0x0848(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MinSliderValue;                                          // 0x084C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxSliderValue;                                          // 0x0850(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_KDX2[0x1C];                                  // 0x0854(0x001C) MISSED OFFSET (PADDING)

	public:
		void SetValue(float NewValue);
		void SetMinValue(float NewValue);
		void SetMinSliderValue(float NewValue);
		void SetMinFractionalDigits(int32_t NewValue);
		void SetMaxValue(float NewValue);
		void SetMaxSliderValue(float NewValue);
		void SetMaxFractionalDigits(int32_t NewValue);
		void SetForegroundColor(const struct FSlateColor& InForegroundColor);
		void SetDelta(float NewValue);
		void SetAlwaysUsesDeltaSnap(bool bNewValue);
		void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, ETextCommit CommitMethod);
		void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue);
		void OnSpinBoxBeginSliderMovement__DelegateSignature();
		float GetValue();
		float GetMinValue();
		float GetMinSliderValue();
		int32_t GetMinFractionalDigits();
		float GetMaxValue();
		float GetMaxSliderValue();
		int32_t GetMaxFractionalDigits();
		float GetDelta();
		bool GetAlwaysUsesDeltaSnap();
		void ClearMinValue();
		void ClearMinSliderValue();
		void ClearMaxValue();
		void ClearMaxSliderValue();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.StackBox
	 * Size -> 0x0018 (FullSize[0x0180] - InheritedSize[0x0168])
	 */
	class UStackBox : public UPanelWidget
	{
	public:
		EOrientation                                               Orientation;                                             // 0x0168(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_33AG[0x17];                                  // 0x0169(0x0017) MISSED OFFSET (PADDING)

	public:
		bool ReplaceStackBoxChildAt(int32_t Index, class UWidget* Content);
		class UStackBoxSlot* AddChildToStackBox(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.StackBoxSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UStackBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate
		struct FSlateChildSize                                     Size;                                                    // 0x0048(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPrivate
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F0TP[0xE];                                   // 0x0052(0x000E) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.TextBlock
	 * Size -> 0x01D0 (FullSize[0x0340] - InheritedSize[0x0170])
	 */
	class UTextBlock : public UTextLayoutWidget
	{
	public:
		class FText                                                Text;                                                    // 0x0170(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FScriptDelegate                                      TextDelegate;                                            // 0x0188(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSlateColor                                         ColorAndOpacity;                                         // 0x0198(0x0014) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ColorAndOpacityDelegate;                                 // 0x01AC(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RSHS[0x4];                                   // 0x01BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateFontInfo                                      Font;                                                    // 0x01C0(0x0058) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZ8W[0x8];                                   // 0x0218(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         StrikeBrush;                                             // 0x0220(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FVector2D                                           ShadowOffset;                                            // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ShadowColorAndOpacity;                                   // 0x0300(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptDelegate                                      ShadowColorAndOpacityDelegate;                           // 0x0310(0x0010) ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDesiredWidth;                                         // 0x0320(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWrapWithInvalidationPanel;                              // 0x0324(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextTransformPolicy                                       TextTransformPolicy;                                     // 0x0325(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextOverflowPolicy                                        TextOverflowPolicy;                                      // 0x0326(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSimpleTextMode;                                         // 0x0327(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_W3J5[0x18];                                  // 0x0328(0x0018) MISSED OFFSET (PADDING)

	public:
		void SetTextTransformPolicy(ETextTransformPolicy InTransformPolicy);
		void SetTextOverflowPolicy(ETextOverflowPolicy InOverflowPolicy);
		void SetText(const class FText& InText);
		void SetStrikeBrush(const struct FSlateBrush& InStrikeBrush);
		void SetShadowOffset(const struct FVector2D& InShadowOffset);
		void SetShadowColorAndOpacity(const struct FLinearColor& InShadowColorAndOpacity);
		void SetOpacity(float InOpacity);
		void SetMinDesiredWidth(float InMinDesiredWidth);
		void SetFontOutlineMaterial(class UMaterialInterface* InMaterial);
		void SetFontMaterial(class UMaterialInterface* InMaterial);
		void SetFont(const struct FSlateFontInfo& InFontInfo);
		void SetColorAndOpacity(const struct FSlateColor& InColorAndOpacity);
		void SetAutoWrapText(bool InAutoTextWrap);
		class FText GetText();
		class UMaterialInstanceDynamic* GetDynamicOutlineMaterial();
		class UMaterialInstanceDynamic* GetDynamicFontMaterial();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Throbber
	 * Size -> 0x00F0 (FullSize[0x0240] - InheritedSize[0x0150])
	 */
	class UThrobber : public UWidget
	{
	public:
		int32_t                                                    NumberOfPieces;                                          // 0x0150(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimateHorizontally;                                    // 0x0154(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimateVertically;                                      // 0x0155(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimateOpacity;                                         // 0x0156(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DBX2[0x9];                                   // 0x0157(0x0009) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         Image;                                                   // 0x0160(0x00D0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ARZO[0x10];                                  // 0x0230(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetNumberOfPieces(int32_t InNumberOfPieces);
		void SetAnimateVertically(bool bInAnimateVertically);
		void SetAnimateOpacity(bool bInAnimateOpacity);
		void SetAnimateHorizontally(bool bInAnimateHorizontally);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.TileView
	 * Size -> 0x0020 (FullSize[0x0C50] - InheritedSize[0x0C30])
	 */
	class UTileView : public UListView
	{
	public:
		float                                                      EntryHeight;                                             // 0x0C30(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      EntryWidth;                                              // 0x0C34(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EListItemAlignment                                         TileAlignment;                                           // 0x0C38(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bWrapHorizontalNavigation;                               // 0x0C39(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_37Z3[0x16];                                  // 0x0C3A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetEntryWidth(float NewWidth);
		void SetEntryHeight(float NewHeight);
		float GetEntryWidth();
		float GetEntryHeight();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.TreeView
	 * Size -> 0x0060 (FullSize[0x0C90] - InheritedSize[0x0C30])
	 */
	class UTreeView : public UListView
	{
	public:
		unsigned char                                              UnknownData_EJE7[0x10];                                  // 0x0C30(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      BP_OnGetItemChildren;                                    // 0x0C40(0x0010) Edit, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BP_OnItemExpansionChanged;                               // 0x0C50(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UIS5[0x30];                                  // 0x0C60(0x0030) MISSED OFFSET (PADDING)

	public:
		void SetItemExpansion(class UObject* Item, bool bExpandItem);
		void ExpandAll();
		void CollapseAll();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UniformGridPanel
	 * Size -> 0x0028 (FullSize[0x0190] - InheritedSize[0x0168])
	 */
	class UUniformGridPanel : public UPanelWidget
	{
	public:
		struct FMargin                                             SlotPadding;                                             // 0x0168(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinDesiredSlotWidth;                                     // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinDesiredSlotHeight;                                    // 0x017C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OJR1[0x10];                                  // 0x0180(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetSlotPadding(const struct FMargin& InSlotPadding);
		void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth);
		void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight);
		class UUniformGridSlot* AddChildToUniformGrid(class UWidget* Content, int32_t InRow, int32_t InColumn);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.UniformGridSlot
	 * Size -> 0x0018 (FullSize[0x0050] - InheritedSize[0x0038])
	 */
	class UUniformGridSlot : public UPanelSlot
	{
	public:
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IZMB[0x2];                                   // 0x003A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Row;                                                     // 0x003C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Column;                                                  // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FKPV[0xC];                                   // 0x0044(0x000C) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetRow(int32_t InRow);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		void SetColumn(int32_t InColumn);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.VerticalBox
	 * Size -> 0x0010 (FullSize[0x0178] - InheritedSize[0x0168])
	 */
	class UVerticalBox : public UPanelWidget
	{
	public:
		unsigned char                                              UnknownData_9MS6[0x10];                                  // 0x0168(0x0010) MISSED OFFSET (PADDING)

	public:
		class UVerticalBoxSlot* AddChildToVerticalBox(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.VerticalBoxSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UVerticalBoxSlot : public UPanelSlot
	{
	public:
		struct FSlateChildSize                                     Size;                                                    // 0x0038(0x0008) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             padding;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MVHA[0xE];                                   // 0x0052(0x000E) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetSize(const struct FSlateChildSize& InSize);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.Viewport
	 * Size -> 0x0050 (FullSize[0x01B8] - InheritedSize[0x0168])
	 */
	class UViewport : public UContentWidget
	{
	public:
		struct FLinearColor                                        BackgroundColor;                                         // 0x0168(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SDCL[0x40];                                  // 0x0178(0x0040) MISSED OFFSET (PADDING)

	public:
		class AActor* Spawn(class UClass* ActorClass);
		void SetViewRotation(const struct FRotator& Rotation);
		void SetViewLocation(const struct FVector& Location);
		struct FRotator GetViewRotation();
		class UWorld* GetViewportWorld();
		struct FVector GetViewLocation();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetComponent
	 * Size -> 0x0140 (FullSize[0x06E0] - InheritedSize[0x05A0])
	 */
	class UWidgetComponent : public UMeshComponent
	{
	public:
		EWidgetSpace                                               Space;                                                   // 0x05A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EWidgetTimingPolicy                                        TimingPolicy;                                            // 0x05A1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BQVM[0x6];                                   // 0x05A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              WidgetClass;                                             // 0x05A8(0x0008) Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FIntPoint                                           DrawSize;                                                // 0x05B0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bManuallyRedraw;                                         // 0x05B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRedrawRequested;                                        // 0x05B9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SVUG[0x2];                                   // 0x05BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RedrawTime;                                              // 0x05BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G9W3[0x8];                                   // 0x05C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           CurrentDrawSize;                                         // 0x05C8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bDrawAtDesiredSize;                                      // 0x05D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VI1L[0x7];                                   // 0x05D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Pivot;                                                   // 0x05D8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bReceiveHardwareInput;                                   // 0x05E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bWindowFocusable;                                        // 0x05E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EWindowVisibility                                          WindowVisibility;                                        // 0x05EA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bApplyGammaCorrection;                                   // 0x05EB(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G7N9[0x4];                                   // 0x05EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULocalPlayer*                                        OwnerPlayer;                                             // 0x05F0(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        BackgroundColor;                                         // 0x05F8(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FLinearColor                                        TintColorAndOpacity;                                     // 0x0608(0x0010) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      OpacityFromTexture;                                      // 0x0618(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EWidgetBlendMode                                           BlendMode;                                               // 0x061C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsTwoSided;                                             // 0x061D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       TickWhenOffscreen;                                       // 0x061E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_SQKT[0x1];                                   // 0x061F(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBodySetup*                                          BodySetup;                                               // 0x0620(0x0008) ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  TranslucentMaterial;                                     // 0x0628(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  TranslucentMaterial_OneSided;                            // 0x0630(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  OpaqueMaterial;                                          // 0x0638(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  OpaqueMaterial_OneSided;                                 // 0x0640(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  MaskedMaterial;                                          // 0x0648(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInterface*                                  MaskedMaterial_OneSided;                                 // 0x0650(0x0008) ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UTextureRenderTarget2D*                              RenderTarget;                                            // 0x0658(0x0008) ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMaterialInstanceDynamic*                            MaterialInstance;                                        // 0x0660(0x0008) ZeroConstructor, Transient, DuplicateTransient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAddedToScreen;                                          // 0x0668(0x0001) ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bEditTimeUsable;                                         // 0x0669(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_921X[0x2];                                   // 0x066A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                SharedLayerName;                                         // 0x066C(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    LayerZOrder;                                             // 0x0674(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EWidgetGeometryMode                                        GeometryMode;                                            // 0x0678(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6ZOK[0x3];                                   // 0x0679(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CylinderArcAngle;                                        // 0x067C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ETickMode                                                  TickMode;                                                // 0x0680(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1AMI[0x2F];                                  // 0x0681(0x002F) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUserWidget*                                         Widget;                                                  // 0x06B0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LBBA[0x28];                                  // 0x06B8(0x0028) MISSED OFFSET (PADDING)

	public:
		void SetWindowVisibility(EWindowVisibility InVisibility);
		void SetWindowFocusable(bool bInWindowFocusable);
		void SetWidgetSpace(EWidgetSpace NewSpace);
		void SetWidget(class UUserWidget* Widget);
		void SetTwoSided(bool bWantTwoSided);
		void SetTintColorAndOpacity(const struct FLinearColor& NewTintColorAndOpacity);
		void SetTickWhenOffscreen(bool bWantTickWhenOffscreen);
		void SetTickMode(ETickMode InTickMode);
		void SetRedrawTime(float InRedrawTime);
		void SetPivot(const struct FVector2D& InPivot);
		void SetOwnerPlayer(class ULocalPlayer* LocalPlayer);
		void SetManuallyRedraw(bool bUseManualRedraw);
		void SetGeometryMode(EWidgetGeometryMode InGeometryMode);
		void SetDrawSize(const struct FVector2D& Size);
		void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize);
		void SetCylinderArcAngle(float InCylinderArcAngle);
		void SetBackgroundColor(const struct FLinearColor& NewBackgroundColor);
		void RequestRenderUpdate();
		void RequestRedraw();
		bool IsWidgetVisible();
		EWindowVisibility GetWindowVisiblility();
		bool GetWindowFocusable();
		EWidgetSpace GetWidgetSpace();
		class UUserWidget* GetWidget();
		class UUserWidget* GetUserWidgetObject();
		bool GetTwoSided();
		bool GetTickWhenOffscreen();
		class UTextureRenderTarget2D* GetRenderTarget();
		float GetRedrawTime();
		struct FVector2D GetPivot();
		class ULocalPlayer* GetOwnerPlayer();
		class UMaterialInstanceDynamic* GetMaterialInstance();
		bool GetManuallyRedraw();
		EWidgetGeometryMode GetGeometryMode();
		struct FVector2D GetDrawSize();
		bool GetDrawAtDesiredSize();
		float GetCylinderArcAngle();
		struct FVector2D GetCurrentDrawSize();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetInteractionComponent
	 * Size -> 0x02D0 (FullSize[0x0570] - InheritedSize[0x02A0])
	 */
	class UWidgetInteractionComponent : public USceneComponent
	{
	public:
		class FScriptMulticastDelegate                             OnHoveredWidgetChanged;                                  // 0x02A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M58Y[0x10];                                  // 0x02B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    VirtualUserIndex;                                        // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PointerIndex;                                            // 0x02C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECollisionChannel                                          TraceChannel;                                            // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_COW5[0x3];                                   // 0x02C9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InteractionDistance;                                     // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWidgetInteractionSource                                   InteractionSource;                                       // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableHitTesting;                                       // 0x02D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowDebug;                                              // 0x02D2(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PJ9D[0x1];                                   // 0x02D3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugSphereLineThickness;                                // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugLineThickness;                                      // 0x02D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        DebugColor;                                              // 0x02DC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GHSY[0x7C];                                  // 0x02EC(0x007C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FHitResult                                          CustomHitResult;                                         // 0x0368(0x00E8) Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FVector2D                                           LocalHitLocation;                                        // 0x0450(0x0010) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVector2D                                           LastLocalHitLocation;                                    // 0x0460(0x0010) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UWidgetComponent*                                    HoveredWidgetComponent;                                  // 0x0470(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FHitResult                                          LastHitResult;                                           // 0x0478(0x00E8) Transient, IsPlainOldData, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		bool                                                       bIsHoveredWidgetInteractable;                            // 0x0560(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsHoveredWidgetFocusable;                               // 0x0561(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsHoveredWidgetHitTestVisible;                          // 0x0562(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_I9OW[0xD];                                   // 0x0563(0x000D) MISSED OFFSET (PADDING)

	public:
		void SetFocus(class UWidget* FocusWidget);
		void SetCustomHitResult(const struct FHitResult& HitResult);
		bool SendKeyChar(const class FString& Characters, bool bRepeat);
		void ScrollWheel(float ScrollDelta);
		void ReleasePointerKey(const struct FKey& Key);
		bool ReleaseKey(const struct FKey& Key);
		void PressPointerKey(const struct FKey& Key);
		bool PressKey(const struct FKey& Key, bool bRepeat);
		bool PressAndReleaseKey(const struct FKey& Key);
		bool IsOverInteractableWidget();
		bool IsOverHitTestVisibleWidget();
		bool IsOverFocusableWidget();
		struct FHitResult GetLastHitResult();
		class UWidgetComponent* GetHoveredWidgetComponent();
		struct FVector2D Get2DHitLocation();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetSwitcher
	 * Size -> 0x0018 (FullSize[0x0180] - InheritedSize[0x0168])
	 */
	class UWidgetSwitcher : public UPanelWidget
	{
	public:
		int32_t                                                    ActiveWidgetIndex;                                       // 0x0168(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CWT2[0x14];                                  // 0x016C(0x0014) MISSED OFFSET (PADDING)

	public:
		void SetActiveWidgetIndex(int32_t Index);
		void SetActiveWidget(class UWidget* Widget);
		class UWidget* GetWidgetAtIndex(int32_t Index);
		int32_t GetNumWidgets();
		int32_t GetActiveWidgetIndex();
		class UWidget* GetActiveWidget();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetSwitcherSlot
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UWidgetSwitcherSlot : public UPanelSlot
	{
	public:
		unsigned char                                              UnknownData_VVBL[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             padding;                                                 // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MZRI[0x6];                                   // 0x0052(0x0006) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WindowTitleBarArea
	 * Size -> 0x0020 (FullSize[0x0188] - InheritedSize[0x0168])
	 */
	class UWindowTitleBarArea : public UContentWidget
	{
	public:
		bool                                                       bWindowButtonsEnabled;                                   // 0x0168(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDoubleClickTogglesFullscreen;                           // 0x0169(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TB9P[0x1E];                                  // 0x016A(0x001E) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WindowTitleBarAreaSlot
	 * Size -> 0x0028 (FullSize[0x0060] - InheritedSize[0x0038])
	 */
	class UWindowTitleBarAreaSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0049(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_4TE3[0x16];                                  // 0x004A(0x0016) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WrapBox
	 * Size -> 0x0028 (FullSize[0x0190] - InheritedSize[0x0168])
	 */
	class UWrapBox : public UPanelWidget
	{
	public:
		struct FVector2D                                           InnerSlotPadding;                                        // 0x0168(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WrapSize;                                                // 0x0178(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bExplicitWrapSize;                                       // 0x017C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x017D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOrientation                                               Orientation;                                             // 0x017E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JQAA[0x11];                                  // 0x017F(0x0011) MISSED OFFSET (PADDING)

	public:
		void SetInnerSlotPadding(const struct FVector2D& InPadding);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		class UWrapBoxSlot* AddChildToWrapBox(class UWidget* Content);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WrapBoxSlot
	 * Size -> 0x0020 (FullSize[0x0058] - InheritedSize[0x0038])
	 */
	class UWrapBoxSlot : public UPanelSlot
	{
	public:
		struct FMargin                                             padding;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		float                                                      FillSpanWhenLessThan;                                    // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x004C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x004D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bFillEmptySpace;                                         // 0x004E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceNewLine;                                           // 0x004F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YZRA[0x8];                                   // 0x0050(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetVerticalAlignment(EVerticalAlignment InVerticalAlignment);
		void SetPadding(const struct FMargin& InPadding);
		void SetNewLine(bool InForceNewLine);
		void SetHorizontalAlignment(EHorizontalAlignment InHorizontalAlignment);
		void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan);
		void SetFillEmptySpace(bool InbFillEmptySpace);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.DragDropOperation
	 * Size -> 0x0068 (FullSize[0x0090] - InheritedSize[0x0028])
	 */
	class UDragDropOperation : public UObject
	{
	public:
		class FString                                              Tag;                                                     // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UObject*                                             Payload;                                                 // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWidget*                                             DefaultDragVisual;                                       // 0x0040(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDragPivot                                                 Pivot;                                                   // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S5XQ[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           Offset;                                                  // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDrop;                                                  // 0x0060(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDragCancelled;                                         // 0x0070(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnDragged;                                               // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void Drop(const struct FPointerEvent& PointerEvent);
		void Dragged(const struct FPointerEvent& PointerEvent);
		void DragCancelled(const struct FPointerEvent& PointerEvent);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SlateBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USlateBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FVector2D STATIC_TransformVectorLocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalVector);
		struct FVector2D STATIC_TransformVectorAbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteVector);
		float STATIC_TransformScalarLocalToAbsolute(const struct FGeometry& Geometry, float LocalScalar);
		float STATIC_TransformScalarAbsoluteToLocal(const struct FGeometry& Geometry, float AbsoluteScalar);
		void STATIC_ScreenToWidgetLocal(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& ScreenPosition, struct FVector2D* LocalCoordinate, bool bIncludeWindowPosition);
		void STATIC_ScreenToWidgetAbsolute(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* AbsoluteCoordinate, bool bIncludeWindowPosition);
		void STATIC_ScreenToViewport(class UObject* WorldContextObject, const struct FVector2D& ScreenPosition, struct FVector2D* ViewportPosition);
		void STATIC_LocalToViewport(class UObject* WorldContextObject, const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
		struct FVector2D STATIC_LocalToAbsolute(const struct FGeometry& Geometry, const struct FVector2D& LocalCoordinate);
		bool STATIC_IsUnderLocation(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
		struct FVector2D STATIC_GetLocalTopLeft(const struct FGeometry& Geometry);
		struct FVector2D STATIC_GetLocalSize(const struct FGeometry& Geometry);
		struct FVector2D STATIC_GetAbsoluteSize(const struct FGeometry& Geometry);
		bool STATIC_EqualEqual_SlateBrush(const struct FSlateBrush& A, const struct FSlateBrush& B);
		void STATIC_AbsoluteToViewport(class UObject* WorldContextObject, const struct FVector2D& AbsoluteDesktopCoordinate, struct FVector2D* PixelPosition, struct FVector2D* ViewportPosition);
		struct FVector2D STATIC_AbsoluteToLocal(const struct FGeometry& Geometry, const struct FVector2D& AbsoluteCoordinate);
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.SlateVectorArtData
	 * Size -> 0x0048 (FullSize[0x0070] - InheritedSize[0x0028])
	 */
	class USlateVectorArtData : public UObject
	{
	public:
		TArray<struct FSlateMeshVertex>                            VertexData;                                              // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<uint32_t>                                           IndexData;                                               // 0x0038(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		class UMaterialInterface*                                  Material;                                                // 0x0048(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector2D                                           ExtentMin;                                               // 0x0050(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector2D                                           ExtentMax;                                               // 0x0060(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetBlueprintGeneratedClass
	 * Size -> 0x0080 (FullSize[0x03F0] - InheritedSize[0x0370])
	 */
	class UWidgetBlueprintGeneratedClass : public UBlueprintGeneratedClass
	{
	public:
		class UWidgetTree*                                         WidgetTree;                                              // 0x0370(0x0008) ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UWidgetBlueprintGeneratedClassExtension*>     Extensions;                                              // 0x0378(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate
		TArray<struct FFieldNotificationId>                        FieldNotifyNames;                                        // 0x0388(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_45JS[0x4];                                   // 0x0398(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bClassRequiresNativeTick : 1;                            // 0x039C(0x0001) BIT_FIELD NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EIY2[0x3];                                   // 0x039D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FDelegateRuntimeBinding>                     Bindings;                                                // 0x03A0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UWidgetAnimation*>                            Animations;                                              // 0x03B0(0x0010) ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class FName>                                        NamedSlots;                                              // 0x03C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        AvailableNamedSlots;                                     // 0x03D0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        InstanceNamedSlots;                                      // 0x03E0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWidgetBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		struct FEventReply STATIC_UnlockMouse(struct FEventReply* Reply);
		struct FEventReply STATIC_Unhandled();
		void STATIC_SetWindowTitleBarState(class UWidget* TitleBarContent, EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible);
		void STATIC_SetWindowTitleBarOnCloseClickedDelegate(const class FScriptDelegate& Delegate);
		void STATIC_SetWindowTitleBarCloseButtonActive(bool bActive);
		struct FEventReply STATIC_SetUserFocus(struct FEventReply* Reply, class UWidget* FocusWidget, bool bInAllUsers);
		struct FEventReply STATIC_SetMousePosition(struct FEventReply* Reply, const struct FVector2D& NewMousePosition);
		void STATIC_SetInputMode_UIOnlyEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bFlushInput);
		void STATIC_SetInputMode_GameOnly(class APlayerController* PlayerController, bool bFlushInput);
		void STATIC_SetInputMode_GameAndUIEx(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture, bool bFlushInput);
		bool STATIC_SetHardwareCursor(class UObject* WorldContextObject, EMouseCursor CursorShape, const class FName& CursorName, const struct FVector2D& HotSpot);
		void STATIC_SetFocusToGameViewport();
		void STATIC_SetColorVisionDeficiencyType(EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency);
		void STATIC_SetBrushResourceToTexture(struct FSlateBrush* Brush, class UTexture2D* Texture);
		void STATIC_SetBrushResourceToMaterial(struct FSlateBrush* Brush, class UMaterialInterface* Material);
		void STATIC_RestorePreviousWindowTitleBarState();
		struct FEventReply STATIC_ReleaseMouseCapture(struct FEventReply* Reply);
		struct FEventReply STATIC_ReleaseJoystickCapture(struct FEventReply* Reply, bool bInAllJoysticks);
		void OnGameWindowCloseButtonClickedDelegate__DelegateSignature();
		struct FSlateBrush STATIC_NoResourceBrush();
		struct FSlateBrush STATIC_MakeBrushFromTexture(class UTexture2D* Texture, int32_t Width, int32_t Height);
		struct FSlateBrush STATIC_MakeBrushFromMaterial(class UMaterialInterface* Material, int32_t Width, int32_t Height);
		struct FSlateBrush STATIC_MakeBrushFromAsset(class USlateBrushAsset* BrushAsset);
		struct FEventReply STATIC_LockMouse(struct FEventReply* Reply, class UWidget* CapturingWidget);
		bool STATIC_IsDragDropping();
		struct FEventReply STATIC_Handled();
		void STATIC_GetSafeZonePadding(class UObject* WorldContextObject, struct FVector4* SafePadding, struct FVector2D* SafePaddingScale, struct FVector4* SpillOverPadding);
		struct FKeyEvent STATIC_GetKeyEventFromAnalogInputEvent(const struct FAnalogInputEvent& Event);
		struct FInputEvent STATIC_GetInputEventFromPointerEvent(const struct FPointerEvent& Event);
		struct FInputEvent STATIC_GetInputEventFromNavigationEvent(const struct FNavigationEvent& Event);
		struct FInputEvent STATIC_GetInputEventFromKeyEvent(const struct FKeyEvent& Event);
		struct FInputEvent STATIC_GetInputEventFromCharacterEvent(const struct FCharacterEvent& Event);
		class UMaterialInstanceDynamic* STATIC_GetDynamicMaterial(struct FSlateBrush* Brush);
		class UDragDropOperation* STATIC_GetDragDroppingContent();
		class UTexture2D* STATIC_GetBrushResourceAsTexture2D(const struct FSlateBrush& Brush);
		class UMaterialInterface* STATIC_GetBrushResourceAsMaterial(const struct FSlateBrush& Brush);
		class UObject* STATIC_GetBrushResource(const struct FSlateBrush& Brush);
		void STATIC_GetAllWidgetsWithInterface(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* Interface, bool TopLevelOnly);
		void STATIC_GetAllWidgetsOfClass(class UObject* WorldContextObject, TArray<class UUserWidget*>* FoundWidgets, class UClass* WidgetClass, bool TopLevelOnly);
		struct FEventReply STATIC_EndDragDrop(struct FEventReply* Reply);
		void STATIC_DrawTextFormatted(struct FPaintContext* Context, const class FText& Text, const struct FVector2D& Position, class UFont* Font, int32_t FontSize, const class FName& FontTypeFace, const struct FLinearColor& Tint);
		void STATIC_DrawText(struct FPaintContext* Context, const class FString& InString, const struct FVector2D& Position, const struct FLinearColor& Tint);
		void STATIC_DrawSpline(struct FPaintContext* Context, const struct FVector2D& Start, const struct FVector2D& StartDir, const struct FVector2D& End, const struct FVector2D& EndDir, const struct FLinearColor& Tint, float Thickness);
		void STATIC_DrawLines(struct FPaintContext* Context, TArray<struct FVector2D> Points, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness);
		void STATIC_DrawLine(struct FPaintContext* Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness);
		void STATIC_DrawBox(struct FPaintContext* Context, const struct FVector2D& Position, const struct FVector2D& Size, class USlateBrushAsset* Brush, const struct FLinearColor& Tint);
		void STATIC_DismissAllMenus();
		struct FEventReply STATIC_DetectDragIfPressed(const struct FPointerEvent& PointerEvent, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
		struct FEventReply STATIC_DetectDrag(struct FEventReply* Reply, class UWidget* WidgetDetectingDrag, const struct FKey& DragKey);
		class UDragDropOperation* STATIC_CreateDragDropOperation(class UClass* OperationClass);
		class UUserWidget* STATIC_Create(class UObject* WorldContextObject, class UClass* WidgetType, class APlayerController* OwningPlayer);
		struct FEventReply STATIC_ClearUserFocus(struct FEventReply* Reply, bool bInAllUsers);
		struct FEventReply STATIC_CaptureMouse(struct FEventReply* Reply, class UWidget* CapturingWidget);
		struct FEventReply STATIC_CaptureJoystick(struct FEventReply* Reply, class UWidget* CapturingWidget, bool bInAllJoysticks);
		void STATIC_CancelDragDrop();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetLayoutLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UWidgetLayoutLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UWrapBoxSlot* STATIC_SlotAsWrapBoxSlot(class UWidget* Widget);
		class UWidgetSwitcherSlot* STATIC_SlotAsWidgetSwitcherSlot(class UWidget* Widget);
		class UVerticalBoxSlot* STATIC_SlotAsVerticalBoxSlot(class UWidget* Widget);
		class UUniformGridSlot* STATIC_SlotAsUniformGridSlot(class UWidget* Widget);
		class USizeBoxSlot* STATIC_SlotAsSizeBoxSlot(class UWidget* Widget);
		class UScrollBoxSlot* STATIC_SlotAsScrollBoxSlot(class UWidget* Widget);
		class UScaleBoxSlot* STATIC_SlotAsScaleBoxSlot(class UWidget* Widget);
		class USafeZoneSlot* STATIC_SlotAsSafeBoxSlot(class UWidget* Widget);
		class UOverlaySlot* STATIC_SlotAsOverlaySlot(class UWidget* Widget);
		class UHorizontalBoxSlot* STATIC_SlotAsHorizontalBoxSlot(class UWidget* Widget);
		class UGridSlot* STATIC_SlotAsGridSlot(class UWidget* Widget);
		class UCanvasPanelSlot* STATIC_SlotAsCanvasSlot(class UWidget* Widget);
		class UBorderSlot* STATIC_SlotAsBorderSlot(class UWidget* Widget);
		void STATIC_RemoveAllWidgets(class UObject* WorldContextObject);
		bool STATIC_ProjectWorldLocationToWidgetPosition(class APlayerController* PlayerController, const struct FVector& WorldLocation, struct FVector2D* ScreenPosition, bool bPlayerViewportRelative);
		struct FGeometry STATIC_GetViewportWidgetGeometry(class UObject* WorldContextObject);
		struct FVector2D STATIC_GetViewportSize(class UObject* WorldContextObject);
		float STATIC_GetViewportScale(class UObject* WorldContextObject);
		struct FGeometry STATIC_GetPlayerScreenWidgetGeometry(class APlayerController* PlayerController);
		bool STATIC_GetMousePositionScaledByDPI(class APlayerController* Player, float* LocationX, float* LocationY);
		struct FVector2D STATIC_GetMousePositionOnViewport(class UObject* WorldContextObject);
		struct FVector2D STATIC_GetMousePositionOnPlatform();
		static UClass* StaticClass();
	};

	/**
	 * Class UMG.WidgetTree
	 * Size -> 0x0060 (FullSize[0x0088] - InheritedSize[0x0028])
	 */
	class UWidgetTree : public UObject
	{
	public:
		unsigned char                                              UnknownData_5O96[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidget*                                             RootWidget;                                              // 0x0030(0x0008) ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FName, class UWidget*>                          NamedSlotBindings;                                       // 0x0038(0x0050) ExportObject, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
