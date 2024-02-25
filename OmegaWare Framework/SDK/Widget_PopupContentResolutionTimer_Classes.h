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
	 * WidgetBlueprintGeneratedClass Widget_PopupContentResolutionTimer.Widget_PopupContentResolutionTimer_C
	 * Size -> 0x0038 (FullSize[0x02C8] - InheritedSize[0x0290])
	 */
	class UWidget_PopupContentResolutionTimer_C : public UFGPopupWidgetContent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          mText;                                                   // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                mBody;                                                   // 0x02A0(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		struct FTimerHandle                                        TimerHandle;                                             // 0x02B8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		double                                                     TimerDuration;                                           // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool GetShouldOkayBeEnabled();
		class FText Get_TimerText();
		void Construct();
		void TriggerCancel();
		void SetOptionalTextElements(const class FText& Title, const class FText& Desc);
		void Destruct();
		void ExecuteUbergraph_Widget_PopupContentResolutionTimer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
