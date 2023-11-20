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
	 * WidgetBlueprintGeneratedClass Widget_PopupToggleSelect.Widget_PopupToggleSelect_C
	 * Size -> 0x0048 (FullSize[0x02D8] - InheritedSize[0x0290])
	 */
	class UWidget_PopupToggleSelect_C : public UFGPopupWidgetContent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      mSlot;                                                   // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mTitleText;                                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                mBody;                                                   // 0x02A8(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    mSelectedChild;                                          // 0x02C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_F6J1[0x4];                                   // 0x02C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UUserWidget*>                                 mSelectionWidgets;                                       // 0x02C8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void SetOptionalTextElements(const class FText& Title, const class FText& Desc);
		bool GetShouldOkayBeEnabled();
		void SetInstigatorAndInitialize(class UObject* Instigator);
		void OnChildSelected(int32_t ChildIndex);
		void NotifyPopupConfirmed();
		void NotifyPopupCanceled();
		void ExecuteUbergraph_Widget_PopupToggleSelect(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
