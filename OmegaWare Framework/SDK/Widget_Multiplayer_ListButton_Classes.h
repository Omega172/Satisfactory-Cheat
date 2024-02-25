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
	 * WidgetBlueprintGeneratedClass Widget_Multiplayer_ListButton.Widget_Multiplayer_ListButton_C
	 * Size -> 0x0268 (FullSize[0x0508] - InheritedSize[0x02A0])
	 */
	class UWidget_Multiplayer_ListButton_C : public UFGWidgetMultiplayer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOnlineFriend*                                       OnlineFriend;                                            // 0x02A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DisableEditOnInstance, DuplicateTransient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    OnHover;                                                 // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UImage*                                              Image_Avatar;                                            // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_Background;                                        // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMenuAnchor*                                         mActionButtonsAnchor;                                    // 0x02C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             mButton;                                                 // 0x02D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_SubTitle;                                           // 0x02D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          Text_Title;                                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_NatInformation_C*                            Widget_NatInformation;                                   // 0x02E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FText                                                mAdditionalInfo;                                         // 0x02F0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class UPanelWidget*                                        mParentWidget;                                           // 0x0308(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnActionButtonClicked;                                   // 0x0310(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FText                                                mActionButtonText;                                       // 0x0320(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mHideActionButton;                                       // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mDisableActionButton;                                    // 0x0339(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6I8Q[0x6];                                   // 0x033A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                mActionButtonTooltip;                                    // 0x0340(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       mInSession;                                              // 0x0358(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsSelected;                                             // 0x0359(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PYXZ[0x2];                                   // 0x035A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCommonSession                                      mSession;                                                // 0x035C(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor
		unsigned char                                              UnknownData_3DLO[0x4];                                   // 0x0364(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnSessionSelected;                                       // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnButtonClicked;                                         // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnSessionDeselected;                                     // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       IsNonInteractable;                                       // 0x0398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECachedNATType                                             mNatType;                                                // 0x0399(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsHost;                                                 // 0x039A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mCareAboutNAT;                                           // 0x039B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_NUUH[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFGOnlineFriend                                     mOnlineFriend;                                           // 0x03A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		bool                                                       mIsQueryingSession;                                      // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_OJQP[0x7];                                   // 0x03B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPendingInvite                                      mInvite;                                                 // 0x03B8(0x0140) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		class AFGPlayerState*                                      ManagedPlayerState;                                      // 0x04F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        mIsPlayerKickedTimer;                                    // 0x0500(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		class UWidget* OpenMenuAnchor();
		void DeselectButton();
		class FText GetManagedPlayerPresenceString();
		class FString GetManagedPlayerName();
		void GetManagedPlayerPing(int32_t* Ping);
		bool IsManagedPlayerServerAdmin();
		void UpdateSessionStatus();
		void UpdateFriendStatus();
		void QuerySession();
		void OnSessionQueried(const struct FCommonSession& SessionResult);
		void UpdateNATWarningForClient();
		void GetHostingNATIsse(ECachedNATType HostNat, ECachedNATType ClientNat, class FText* ToolTip);
		void UpdateNATWarningForHost();
		void SetupForManagePlayers(class AFGPlayerState* PlayerState);
		void SetupForJoinInvite(struct FPendingInvite* invite);
		void SetupForSendInvite(struct FFGOnlineFriend* Friend);
		void SetupForJoinGame(struct FFGOnlineFriend* Friend);
		void SetButtonColor(const struct FLinearColor& Color);
		void ClearListSelection();
		void UpdateButton();
		void PreConstruct(bool IsDesignTime);
		void BndEvt__mButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void Construct();
		void EventShowPlayerKickedFeedback();
		void Destruct();
		void OnSessionQueryFinished();
		void OnSessionQueryStarted();
		void OnMouseEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void OnPlayerKicked();
		void ExecuteUbergraph_Widget_Multiplayer_ListButton(int32_t EntryPoint);
		void OnSessionDeselected__DelegateSignature();
		void OnButtonClicked__DelegateSignature();
		void OnSessionSelected__DelegateSignature(const struct FCommonSession& Session);
		void OnActionButtonClicked__DelegateSignature(class UWidget_Multiplayer_ListButton_C* ClickedButton);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
