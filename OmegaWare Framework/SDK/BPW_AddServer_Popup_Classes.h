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
	 * WidgetBlueprintGeneratedClass BPW_AddServer_Popup.BPW_AddServer_Popup_C
	 * Size -> 0x0040 (FullSize[0x02D0] - InheritedSize[0x0290])
	 */
	class UBPW_AddServer_Popup_C : public UFGPopupWidgetContent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0290(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidget_StandardButton_Togglable_C*                  Button_ShowAddress;                                      // 0x0298(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableText*                                       mIpAddress;                                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableText*                                       mPort;                                                   // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnServerAdded;                                           // 0x02B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnPopupCanceled;                                         // 0x02C0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		bool GetShouldOkayBeEnabled();
		void Construct();
		void NotifyPopupConfirmed();
		void NotifyPopupCanceled();
		void BndEvt__Button_ShowAddress_K2Node_ComponentBoundEvent_2_OnStateChanged__DelegateSignature(bool IsTrue);
		void ExecuteUbergraph_BPW_AddServer_Popup(int32_t EntryPoint);
		void OnPopupCanceled__DelegateSignature();
		void OnServerAdded__DelegateSignature(const class FString& IP, int32_t Port);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
