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
	 * WidgetBlueprintGeneratedClass Widget_RecipeButton.Widget_RecipeButton_C
	 * Size -> 0x0079 (FullSize[0x0301] - InheritedSize[0x0288])
	 */
	class UWidget_RecipeButton_C : public UFGButtonWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOverlay*                                            mContent;                                                // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMenuAnchor*                                         mRightClickMenu;                                         // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ListButton_C*                                Widget_ListButton;                                       // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClass*                                              mRecipeClass;                                            // 0x02A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UWidget_ManualManufacturing_C*                       Workbench;                                               // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UFGInventoryComponent*                               mCachedInventory;                                        // 0x02B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UFGInventoryComponent*                               NewVar_1;                                                // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       isAffordable;                                            // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_X3YG[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemAmount                                         mItemAmount;                                             // 0x02D0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		class FScriptMulticastDelegate                             UpdateWindowWidgetOffset;                                // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnRecipeButtonClicked;                                   // 0x02F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mHideIfUnaffordable;                                     // 0x0300(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ClearButtonSelection();
		class UWidget* GetCustomTooltip();
		ESlateVisibility GetRightClickMenuVisibility();
		class UWidget* CreateRightClickMenu();
		struct FLinearColor GetButtonHoverColor();
		struct FSlateColor GetTextHoverColor();
		bool IsButtonEnabled();
		void GetNumCanProduce(int32_t* Result);
		ESlateVisibility GetNumCanProduceVisibility();
		class FText GetNumCanProduceText();
		void CheckIngredients();
		struct FSlateBrush GetRecipeIcon();
		struct FLinearColor GetIconColor();
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		class FText GetRecipeDisplayName();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void OnClicked();
		void OnHovered();
		void OnPressed();
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void UpdateWindowWidgetOffset_Event();
		void BndEvt__Widget_ListButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(int32_t Index, class UWidget_ListButton_C* ListButton);
		void ExecuteUbergraph_Widget_RecipeButton(int32_t EntryPoint);
		void OnRecipeButtonClicked__DelegateSignature(class UWidget_RecipeButton_C* ClickedButton);
		void UpdateWindowWidgetOffset__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
