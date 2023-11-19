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
	 * WidgetBlueprintGeneratedClass BPW_HUD_ESlot_Content.BPW_HUD_ESlot_Content_C
	 * Size -> 0x0043 (FullSize[0x02C3] - InheritedSize[0x0280])
	 */
	class UBPW_HUD_ESlot_Content_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UClass*                                              mEquipmentDescriptor;                                    // 0x0288(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class AFGEquipment*                                        mEquipmentObject;                                        // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FTimerHandle                                        mUpdateTimer;                                            // 0x0298(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnShowContent;                                           // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSetWarningVisibility;                                  // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mUseSmallSlot;                                           // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EEquipmentSlot                                             mEquipmentSlot;                                          // 0x02C1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       mIsInitialized;                                          // 0x02C2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetEquipmentObject(class AFGEquipment* mEquipmentObject);
		bool GetUseSmallSlotFromOptions();
		void UpdateESlotData();
		void Construct();
		void Destruct();
		void UpdateSlotSize(const class FString& updatedCvar);
		void OnSlotSizeChanged(bool IsSmall);
		void SetOnShowContentBuffer();
		void SetOnSetWarningVisibilityBuffer(bool mIsVisible);
		void ExecuteUbergraph_BPW_HUD_ESlot_Content(int32_t EntryPoint);
		void OnSetWarningVisibility__DelegateSignature(bool mIsVisible);
		void OnShowContent__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
