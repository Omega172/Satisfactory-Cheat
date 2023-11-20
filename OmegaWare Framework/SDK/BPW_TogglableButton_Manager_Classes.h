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
	 * WidgetBlueprintGeneratedClass BPW_TogglableButton_Manager.BPW_TogglableButton_Manager_C
	 * Size -> 0x002C (FullSize[0x02AC] - InheritedSize[0x0280])
	 */
	class UBPW_TogglableButton_Manager_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class UBPW_TogglableButton_C*>                      mTogglableButtons;                                       // 0x0288(0x0010) Edit, BlueprintVisible, ContainsInstancedReference, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnTogglableButtonClicked;                                // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    mSelectedIndex;                                          // 0x02A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetSelectedIndex(int32_t Index, bool mPlayAudio);
		void ResetNonSelectedButtons();
		void AddButton(class UBPW_TogglableButton_C* TogglableButton);
		void CleanupButtonBindings();
		void OnButtonClicked(int32_t Index);
		void InitTogglableButtons();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_BPW_TogglableButton_Manager(int32_t EntryPoint);
		void OnTogglableButtonClicked__DelegateSignature(int32_t Index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
