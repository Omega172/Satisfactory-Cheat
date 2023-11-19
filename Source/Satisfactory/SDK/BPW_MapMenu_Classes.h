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
	 * WidgetBlueprintGeneratedClass BPW_MapMenu.BPW_MapMenu_C
	 * Size -> 0x01E8 (FullSize[0x0468] - InheritedSize[0x0280])
	 */
	class UBPW_MapMenu_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              Image_196;                                               // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mCategoryContainer;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_InputBox_C*                                  mSearchField;                                            // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             mShowStampsButton;                                       // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_OptionsCheckbox_C*                              mShowStampsCheckBox;                                     // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<ERepresentationType, class UBPW_MapFilterCategories_C*> mAddedCategories;                                        // 0x02B0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<class UFGActorRepresentation*, class UBPW_MapFilterButton_C*> mAddedFilterButtons;                                     // 0x0300(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       mIsSearchActive;                                         // 0x0350(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7NWX[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UFGActorRepresentation*>                      mAddedStamps;                                            // 0x0358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<class UClass*, struct FStruct_ActorRep>               mGenericClasses;                                         // 0x0368(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<class UFGActorRepresentation*, class UFGMapObjectWidget*> mAllAddedObjects;                                        // 0x03B8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TMap<class UClass*, class UBPW_MapFilterButton_C*>         mAddedGenericButtons;                                    // 0x0408(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class FScriptMulticastDelegate                             OnMapMenuInitilized;                                     // 0x0458(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void UnfocusResources(int32_t Index, class UBPW_MapFilterButton_C* FilterButton);
		void FocusResources(int32_t Index, class UBPW_MapFilterButton_C* FilterButton);
		void GetGenericClass(class UFGActorRepresentation* actorRepresentation, class UClass** Class, bool* HasGenericClass);
		void UnfocusGenericType(ERepresentationType Type);
		void FocusGenericType(ERepresentationType Type);
		void AddGenericActor(class UClass* Class, class UFGActorRepresentation* actorRepresentation);
		void UnfocusGenericClass(class UClass* Class);
		void FocusGenericClass(class UClass* Class);
		bool ShouldAddToMenu(class UFGActorRepresentation* actorRepresentation);
		void UnfocusStamps(int32_t IconID);
		void FocusStamps(int32_t IconID);
		void OnSearch(const class FText& mText);
		void SetIsSearchActive(bool mIsSearchActive);
		void ClearData();
		void RemoveActorRepresentation(class UFGActorRepresentation* actorRepresentation);
		void UpdateActorRepresentation(class UFGActorRepresentation* actorRepresentation);
		void ConvertRepresentationType(ERepresentationType InType, ERepresentationType* OutType);
		class UBPW_MapFilterCategories_C* AddCategory(ERepresentationType representationType);
		void AddActorRepresentationToMenu(class UFGActorRepresentation* actorRepresentation, class UFGMapObjectWidget* mMapObject);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__BPW_MapMenu_Widget_InputBox_K2Node_ComponentBoundEvent_1_OnTextChanged__DelegateSignature(const class FText& Text);
		void BndEvt__BPW_MapMenu_Widget_InputBox_K2Node_ComponentBoundEvent_2_OnClearTextClicked__DelegateSignature();
		void BndEvt__BPW_MapMenu_mShowStampsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__BPW_MapMenu_BPW_OptionsCheckbox_K2Node_ComponentBoundEvent_3_OnCheckChanged__DelegateSignature(bool IsChecked);
		void Destruct();
		void ExecuteUbergraph_BPW_MapMenu(int32_t EntryPoint);
		void OnMapMenuInitilized__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
