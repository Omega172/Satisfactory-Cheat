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
	 * WidgetBlueprintGeneratedClass BPW_HandEquipmentSwap.BPW_HandEquipmentSwap_C
	 * Size -> 0x0088 (FullSize[0x0308] - InheritedSize[0x0280])
	 */
	class UBPW_HandEquipmentSwap_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    FadeAnim;                                                // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UHorizontalBox*                                      mEquipmentSwapHBox;                                      // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AFGCharacterPlayer*                                  mCharPlayer;                                             // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UFGInventoryComponent*                               mCachedInventoryComponent;                               // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		TArray<struct FInventoryStack>                             mCachedStacks;                                           // 0x02A8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<int32_t, class UBPW_EquipmentSwap_Icon_C*>            mSwapIcons;                                              // 0x02B8(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void CacheStacks(bool* CachChanged);
		void GetEquipmentOnScroll();
		void Construct();
		void StartFadeOutTimer();
		void OnActiveAquipmentChanged(EEquipmentSlot Slot);
		void ExecuteUbergraph_BPW_HandEquipmentSwap(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
