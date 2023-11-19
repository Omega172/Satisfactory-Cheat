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
	 * WidgetBlueprintGeneratedClass BPW_ResourceSinkShop_CartList.BPW_ResourceSinkShop_CartList_C
	 * Size -> 0x0058 (FullSize[0x02D8] - InheritedSize[0x0280])
	 */
	class UBPW_ResourceSinkShop_CartList_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        mCartItemVerticalBox;                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UScrollBox*                                          mContentScrollBox;                                       // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FResourceSinkShop_CartItem_Struct>           mCartItemStruct;                                         // 0x0298(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnItemRemovedFromCart;                                   // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnItemAmountChanged;                                     // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnFavouriteChangedInCart;                                // 0x02C8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnFavouriteChanged(class UClass* mSchematic);
		void ChangeItemAmount(class UClass* schematic, int32_t NewAmount);
		void RemoveItemFromCart(class UClass* mSchematic);
		void GenerateCartList(TArray<struct FResourceSinkShop_CartItem_Struct>* mCartItemStruct);
		void Construct();
		void Destruct();
		void ExecuteUbergraph_BPW_ResourceSinkShop_CartList(int32_t EntryPoint);
		void OnFavouriteChangedInCart__DelegateSignature(class UClass* mSchematic);
		void OnItemAmountChanged__DelegateSignature(class UClass* schematic, int32_t NewAmount);
		void OnItemRemovedFromCart__DelegateSignature(class UClass* mSchematic);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
