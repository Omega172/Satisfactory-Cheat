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
	 * WidgetBlueprintGeneratedClass Widget_SwitchingImage.Widget_SwitchingImage_C
	 * Size -> 0x0050 (FullSize[0x02D0] - InheritedSize[0x0280])
	 */
	class UWidget_SwitchingImage_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    mSwitchImageAnim;                                        // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              mImageObject;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTexture*                                            mImage;                                                  // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnSwitchAnimationFinished;                               // 0x02A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FLinearColor                                        mIconColor;                                              // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		struct FVector2D                                           mIconSize;                                               // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void SetIconSize(const struct FVector2D& Scale);
		void SetIconColor(const struct FLinearColor& InColorAndOpacity);
		void PreConstruct(bool IsDesignTime);
		void EventImageSwitch();
		void SwitchImage(class UTexture* newTexture);
		void WidgetAnimationEvt_mSwitchImageAnim_K2Node_WidgetAnimationEvent_1();
		void ExecuteUbergraph_Widget_SwitchingImage(int32_t EntryPoint);
		void OnSwitchAnimationFinished__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
