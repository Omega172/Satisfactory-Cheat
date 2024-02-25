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
	 * WidgetBlueprintGeneratedClass Widget_ServerManager.Widget_ServerManager_C
	 * Size -> 0x009E (FullSize[0x0369] - InheritedSize[0x02CB])
	 */
	class UWidget_ServerManager_C : public UBP_MenuBase_C
	{
	public:
		unsigned char                                              UnknownData_F25B[0x5];                                   // 0x02CB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ShowServerControls;                                      // 0x02D8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ShowRemoveServerButton;                                  // 0x02E0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UBPW_Server_Console_C*                               BPW_Server_Console;                                      // 0x02E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Server_ManageSaves_C*                           BPW_Server_ManageSaves;                                  // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     CurrentPageSwitcher;                                     // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UListView*                                           List_Servers;                                            // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mAddButton;                                              // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mRemoveButton;                                           // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_Server_NewGame_C*                               mServerCreateGameWidget;                                 // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_ServerInfo_C*                                   mServerInformation;                                      // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SubMenuBackground_C*                         mServerListBackground;                                   // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_ServerSettings_C*                               mServerSettings;                                         // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_StandardButton_Switch_C*                        mTabConsole;                                             // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_StandardButton_Switch_C*                        mTabCreateGame;                                          // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_StandardButton_Switch_C*                        mTabManageSaves;                                         // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_StandardButton_Switch_C*                        mTabServerSettings;                                      // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_StandardButton_Switch_C*                        mTabServerState;                                         // 0x0358(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_SubMenuBackground_C*                         Widget_SubMenuBackground;                                // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       mIsRemoveButtonVisible;                                  // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void SetRemoveServerButtonVisibility(bool IsVisible);
		void ServerFoundOrAdded(class UFGServerObject* Server);
		void BndEvt__mTabServerState_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
		void BndEvt__mTabConsole_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature();
		void BndEvt__mTabCreateGame_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
		void BndEvt__mTabManageSaves_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
		void BndEvt__mTabServerSettings_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
		void BndEvt__Widget_StandardButton_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
		void AddServer(const class FString& Address, int32_t Port);
		void BndEvt__mRemoveButton_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature();
		void Construct();
		void ServerAddedToServerManager(class UFGServerObject* Server);
		void ServerRemovedFromServerManager(class UFGServerObject* Server);
		void OnServerListSelectionChanged(class UObject* Item, bool bIsSelected);
		void OnMenuEnter(class UWidget* prevMenu);
		void ExecuteUbergraph_Widget_ServerManager(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
