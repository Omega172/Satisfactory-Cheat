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
	 * BlueprintGeneratedClass BP_HUD.BP_HUD_C
	 * Size -> 0x0030 (FullSize[0x0630] - InheritedSize[0x0600])
	 */
	class ABP_HUD_C : public AFGHUD
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0600(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x0608(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       mOpenInventorySound;                                     // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAkAudioEvent*                                       mCloseInventorySound;                                    // 0x0618(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class UClass*>                                      CauserActorClass;                                        // 0x0620(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void IsInventoryOpen(bool* IsOpen);
		void SetupFrontEnd();
		void ToggleInventoryUI();
		void OpenInventoryUI();
		void OpenInteractUI(class UClass* WidgetClass, class UObject* interactObject);
		void RemovePawnHUD();
		void AddEquipmentHUD(class UClass* WidgetClass, EEquipmentSlot Slot);
		void RemoveEquipmentHUD(EEquipmentSlot Slot);
		void CloseInteractUIIfOpen();
		void NotifyHitFeedbackNormal(class AFGCharacterBase* hitCharacter, class AActor* DamageCauser);
		void NotifyHitFeedbackWeakSpot(class AFGCharacterBase* hitCharacter, class AActor* DamageCauser);
		void ExecuteUbergraph_BP_HUD(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
