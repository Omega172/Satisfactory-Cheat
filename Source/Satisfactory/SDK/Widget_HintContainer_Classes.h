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
	 * WidgetBlueprintGeneratedClass Widget_HintContainer.Widget_HintContainer_C
	 * Size -> 0x0021 (FullSize[0x02A1] - InheritedSize[0x0280])
	 */
	class UWidget_HintContainer_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      mHintContainer;                                          // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FStruct_KeybindingHint>                      mKeybinds;                                               // 0x0290(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       mShowKeybindingsOnConstruct;                             // 0x02A0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void SetKeybindingHints(TArray<struct FStruct_KeybindingHint>* mKeyBindingHints);
		void PreConstruct(bool IsDesignTime);
		void AnimateHints();
		void Construct();
		void OnHiddenHUDModeChanged(bool HideHUD);
		void OnHideDynamicKeyShortcutsChanged(const class FString& updatedCvar);
		void ExecuteUbergraph_Widget_HintContainer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
