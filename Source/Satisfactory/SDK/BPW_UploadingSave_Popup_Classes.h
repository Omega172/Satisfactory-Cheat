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
	 * WidgetBlueprintGeneratedClass BPW_UploadingSave_Popup.BPW_UploadingSave_Popup_C
	 * Size -> 0x00F8 (FullSize[0x0388] - InheritedSize[0x0290])
	 */
	class UBPW_UploadingSave_Popup_C : public UFGPopupWidgetContent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          mUploadText;                                             // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ProgressBar_C*                               Widget_ProgressBar;                                      // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnServerAdded;                                           // 0x02A8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPopupCanceled;                                         // 0x02B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mUploadComplete;                                         // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_XHMX[0x7];                                   // 0x02C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSaveHeader                                         mSaveGame;                                               // 0x02D0(0x00A8) Edit, BlueprintVisible, ExposeOnSpawn
		unsigned char                                              mSaveManager[0x10];                                      // 0x0378(0x0010) UNKNOWN PROPERTY: InterfaceProperty

	public:
		void OnCompleted(bool Success, const class FText& ErrorMessage);
		void UpdateProgress(int32_t mCurrent, int32_t mMax);
		void SetSaveHeader(const struct FSaveHeader& mSaveGame);
		bool GetShouldOkayBeEnabled();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void ExecuteUbergraph_BPW_UploadingSave_Popup(int32_t EntryPoint);
		void OnPopupCanceled__DelegateSignature();
		void OnServerAdded__DelegateSignature(const class FString& IP, int32_t Port);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
