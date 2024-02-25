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
	 * WidgetBlueprintGeneratedClass BP_MenuBase.BP_MenuBase_C
	 * Size -> 0x0043 (FullSize[0x02CB] - InheritedSize[0x0288])
	 */
	class UBP_MenuBase_C : public UFGMenuBase
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0288(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UUserWidget*                                         mFocusWidget;                                            // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       mHandleEscape;                                           // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_DTES[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UBP_MenuBase_C*                                      mOwningMenu;                                             // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		bool                                                       UsesSubmenuBackground;                                   // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_S3B9[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidgetAnimation*                                    mOnEnterAnimation;                                       // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class UWidget_SubMenuBackground_C*>                 mSubmenusToAnimate;                                      // 0x02B8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       mNeedCustomEnterDone;                                    // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mUsesSubmenuBackgroundGradient;                          // 0x02C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		bool                                                       mUsesTopPadding;                                         // 0x02CA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void OnMenuClose(bool* CancelParentFunction);
		void GatherBackgrounds();
		void PlayBackgroundEnterAnimation();
		void PlayEnterAnimation(class UWidget* prevMenu);
		void ShouldAnimateBackground(class UWidget* prevMenu, bool* Animate);
		void RestoreFocusOnPopupClosed(bool confirm);
		struct FEventReply OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent);
		void OnEscape();
		void Destruct();
		void Construct();
		void SpawnAnim(bool PlayBackgroundAnim);
		void OnMenuEnter(class UWidget* prevMenu);
		void OnAnimationFinished(class UWidgetAnimation* Animation);
		void OnMenuExit(class UWidget* prevMenu, bool noAnimation);
		void ExecuteUbergraph_BP_MenuBase(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
