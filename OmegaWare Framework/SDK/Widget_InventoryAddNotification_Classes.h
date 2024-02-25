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
	 * WidgetBlueprintGeneratedClass Widget_InventoryAddNotification.Widget_InventoryAddNotification_C
	 * Size -> 0x0078 (FullSize[0x02F8] - InheritedSize[0x0280])
	 */
	class UWidget_InventoryAddNotification_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        mVerticalBox;                                            // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<class UClass*, class UWidget_ItemNotification_C*>     mItemNotifications;                                      // 0x0290(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class AFGCharacterPlayer*                                  mCachedOwningChar;                                       // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       mDelegateIsBound;                                        // 0x02E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_AIU7[0x7];                                   // 0x02E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidget_ItemNotification_C*                          CurrentItemNotfication;                                  // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void RemoveOverflowOfItems();
		void RemoveNotification(class UClass* mItemClass);
		void BindOnInventoryAddAndCacheChar();
		void UnbindOnInventoryAdd(class AFGCharacterPlayer* FromCharacter);
		void OnItemAdded(class UClass* ItemClass, int32_t numAdded);
		void Destruct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Construct();
		void ExecuteUbergraph_Widget_InventoryAddNotification(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
