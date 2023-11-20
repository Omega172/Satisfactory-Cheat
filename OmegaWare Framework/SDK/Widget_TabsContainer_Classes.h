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
	 * WidgetBlueprintGeneratedClass Widget_TabsContainer.Widget_TabsContainer_C
	 * Size -> 0x04A0 (FullSize[0x0720] - InheritedSize[0x0280])
	 */
	class UWidget_TabsContainer_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UCanvasPanel*                                        mContainer;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SlidingTabs_Button_C*                        Widget_SlidingTabs_Button;                               // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SlidingTabs_C*                               mSlidingTabsWidget;                                      // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		TArray<struct FImageAndText>                               mButtons;                                                // 0x02A0(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		struct FVector2D                                           mButtonSize;                                             // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnButtonHovered;                                         // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnButtonUnhovered;                                       // 0x02D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnButtonClicked;                                         // 0x02E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mOverrideButtonFunctions;                                // 0x02F0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_O7CI[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnNoTabsGenerated;                                       // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnTabsGenerated;                                         // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		TArray<int32_t>                                            mHiddenTabIndexes;                                       // 0x0318(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              UnknownData_ENIA[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        ButtonStyle;                                             // 0x0330(0x03F0) Edit, BlueprintVisible

	public:
		void SetTabVisibility(int32_t TabIndex, bool IsVisible);
		void SetActiveButton(class UWidget_SlidingTabs_Button_C* ActiveButton);
		void IfButtonClicked(class UWidget_SlidingTabs_Button_C* Instigator);
		void IfButtonUnhovered(class UWidget_SlidingTabs_Button_C* Insitagor);
		void IfButtonHovered(class UWidget_SlidingTabs_Button_C* Instigator);
		void GenerateButtons();
		void PreConstruct(bool IsDesignTime);
		void Init();
		void Destruct();
		void ExecuteUbergraph_Widget_TabsContainer(int32_t EntryPoint);
		void OnTabsGenerated__DelegateSignature();
		void OnNoTabsGenerated__DelegateSignature();
		void OnButtonClicked__DelegateSignature(int32_t ButtonIndex);
		void OnButtonUnhovered__DelegateSignature(bool IsActiveButton);
		void OnButtonHovered__DelegateSignature(bool IsActiveButton);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
