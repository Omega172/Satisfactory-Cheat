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
	 * WidgetBlueprintGeneratedClass BPW_ResourceSink_CartList_Container.BPW_ResourceSink_CartList_Container_C
	 * Size -> 0x00A8 (FullSize[0x0328] - InheritedSize[0x0280])
	 */
	class UBPW_ResourceSink_CartList_Container_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    AnimCantAfford;                                          // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Image_83;                                                // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mBuyAllButton;                                           // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_ResourceSinkShop_CartList_C*                    mCartList;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        mShoppingCartButtonBox;                                  // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mTotalCostText;                                          // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mTotalText;                                              // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FResourceSinkShop_CartItem_Struct>           mCartItemStruct;                                         // 0x02C0(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnItemRemovedFromCart;                                   // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnBuyAllButtonClicked;                                   // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                mText;                                                   // 0x02F0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnItemAmountChangedInCart;                               // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnFavouriteChanged;                                      // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void PlayCantAffordAnim();
		void ChangeItemAmount(class UClass* schematic, int32_t NewAmount);
		void SetTotalCostText(const class FText& mTotalCostText);
		void SetBuyButtonVisibility(TArray<struct FResourceSinkShop_CartItem_Struct>* mCartItemStruct);
		void UpdateCartList(TArray<struct FResourceSinkShop_CartItem_Struct>* mCartItemStruct);
		void Construct();
		void BndEvt__mCartList_K2Node_ComponentBoundEvent_0_OnItemRemovedFromCart__DelegateSignature(class UClass* mSchematic);
		void BndEvt__mBuyAllButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void BndEvt__mCartList_K2Node_ComponentBoundEvent_2_OnItemAmountChanged__DelegateSignature(class UClass* schematic, int32_t NewAmount);
		void BndEvt__BPW_ResourceSink_CartList_Container_mCartList_K2Node_ComponentBoundEvent_3_OnFavouriteChangedInCart__DelegateSignature(class UClass* mSchematic);
		void ExecuteUbergraph_BPW_ResourceSink_CartList_Container(int32_t EntryPoint);
		void OnFavouriteChanged__DelegateSignature(class UClass* mSchematic);
		void OnItemAmountChangedInCart__DelegateSignature(class UClass* schematic, int32_t Amount);
		void OnBuyAllButtonClicked__DelegateSignature();
		void OnItemRemovedFromCart__DelegateSignature(class UClass* mSchematic);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
