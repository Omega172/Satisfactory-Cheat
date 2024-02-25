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
	 * WidgetBlueprintGeneratedClass Widget_BuildMenu_RightClickMenu.Widget_BuildMenu_RightClickMenu_C
	 * Size -> 0x0068 (FullSize[0x02E8] - InheritedSize[0x0280])
	 */
	class UWidget_BuildMenu_RightClickMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPW_OpenInCodex_Button_C*                           BPW_OpenInCodex_Button;                                  // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mAddToTodolistButton;                                    // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mRemoveFromTodoList;                                     // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UClass*                                              mRecipe;                                                 // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       isHoldingShift;                                          // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9JK9[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             UpdateWindowWidgetOffset;                                // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       hasRemoveToDoListBeenShown;                              // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mShowOpenInCodexButton;                                  // 0x02C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_3I1H[0x6];                                   // 0x02C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerState*                                        mPlayerState;                                            // 0x02C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UFGShoppingListComponent*                            mShoppingListComponent;                                  // 0x02D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UFGShoppingListObject*                               mShoppingListObject;                                     // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UObject*                                             mObject;                                                 // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void TryGetExisitingShoppingListObject();
		void TryCreateMissingShoppingListObject();
		int32_t GetAmountToAddOrRemove();
		void UpdateRemoveFromTodoListVisibility();
		struct FEventReply OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		ESlateVisibility GetRemoveItemButtonVisibility();
		void GetAmount(int32_t* NumberRecipes);
		class FText GetNumberRecipesInShoppingList();
		void Construct();
		void BndEvt__mAddToTodolistButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__mRemoveFromTodoList_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void PreConstruct(bool IsDesignTime);
		void OnShoppingListObjectRemoved(class UFGShoppingListObject* shoppingListObject);
		void ExecuteUbergraph_Widget_BuildMenu_RightClickMenu(int32_t EntryPoint);
		void UpdateWindowWidgetOffset__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
