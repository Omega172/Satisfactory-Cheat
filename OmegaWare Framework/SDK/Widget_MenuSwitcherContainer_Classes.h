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
	 * WidgetBlueprintGeneratedClass Widget_MenuSwitcherContainer.Widget_MenuSwitcherContainer_C
	 * Size -> 0x0040 (FullSize[0x02C0] - InheritedSize[0x0280])
	 */
	class UWidget_MenuSwitcherContainer_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    HideSwitcher;                                            // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UNamedSlot*                                          mSwitcherWidgetSlot;                                     // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     mSwitcherWidget;                                         // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UWidget*                                             mPreviousWidget;                                         // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       PlayBackgroundAnim;                                      // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L52P[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnWidgetSet;                                             // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void GetFirstChildOfSwitcher(class UPanelWidget* SwitcherWidget, class UWidget** Child);
		void SetSwitcherWidget(class UWidgetSwitcher** WidgetSwitcher);
		void SetNoneActive();
		void SetActiveWidget(class UWidget* Widget);
		void WidgetAnimationEvt_HideSwitcher_K2Node_WidgetAnimationEvent_1();
		void ExecuteUbergraph_Widget_MenuSwitcherContainer(int32_t EntryPoint);
		void OnWidgetSet__DelegateSignature(bool mHasChangedActiveWidget);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
