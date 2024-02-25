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
	 * WidgetBlueprintGeneratedClass Widget_Manufacturing_Warning.Widget_Manufacturing_Warning_C
	 * Size -> 0x0041 (FullSize[0x02C1] - InheritedSize[0x0280])
	 */
	class UWidget_Manufacturing_Warning_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    IdleAnim;                                                // 0x0288(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class USizeBox*                                            mSizeBox;                                                // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          WarningText;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AFGBuildableFactory*                                 mBuildableFactory;                                       // 0x02A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FText                                                mText;                                                   // 0x02A8(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		bool                                                       mOverrideSize;                                           // 0x02C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void UpdateState(class AFGBuildableFactory* FGBuildableFactory);
		void OverrideText(const class FText& InText);
		void Construct();
		void PreConstruct(bool IsDesignTime);
		void StartAndShowAnim();
		void StopAndCollapseAnim();
		void ExecuteUbergraph_Widget_Manufacturing_Warning(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
