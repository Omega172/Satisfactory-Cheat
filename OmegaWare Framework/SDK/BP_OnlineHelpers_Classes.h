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
	 * BlueprintGeneratedClass BP_OnlineHelpers.BP_OnlineHelpers_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_OnlineHelpers_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_IsFriendInSession(const struct FFGOnlineFriend& Friend, class UObject* WorldContext, class UObject* __WorldContext, bool* Result);
		void STATIC_IsFriendInPublicSession(const struct FFGOnlineFriend& Friend, class UObject* WorldContext, class UObject* __WorldContext, bool* Result);
		void STATIC_IsPresenceInPublicSession(const struct FOnlinePresence& Presence, class UObject* __WorldContext, bool* Result);
		void STATIC_GetConnectingNatIssue(ECachedNATType HostNat, ECachedNATType ClientNat, class UObject* __WorldContext, class FText* ToolTip);
		void STATIC_IsNATIssue(unsigned char HostNat, unsigned char ClientNat, class UObject* __WorldContext, bool* isIssue);
		void STATIC_IsInSession(const struct FOnlinePresence& Presence, class UObject* __WorldContext, bool* Result);
		void STATIC_InsertionAddButton(class UPanelWidget* NewParam, class UObject* __WorldContext);
		void STATIC_IsHost(class APlayerState* PlayerState, class APlayerController* OwningPlayer, class UObject* __WorldContext, bool* isOurself);
		void STATIC_CanJoinInviteToSession(class UObject* WorldContext, const struct FFGOnlineFriend& Friend, const struct FCommonSession& Session, const struct FPendingInvite& invite, bool IsFriendOnline, class UObject* __WorldContext, ECanJoinInviteResult* Result);
		void STATIC_IsInThisGame(struct FFGOnlineFriend* OnlineFriend, class ULocalPlayer* LocalPlayer, class UObject* __WorldContext, bool* inThisGame);
		void STATIC_CanSendInvite(class ULocalPlayer* LocalPlayer, const struct FFGOnlineFriend& Friend, class UObject* __WorldContext, ECantInviteResult* canSend);
		void STATIC_GetCompactPresence(const struct FOnlinePresence& Presence, class UObject* __WorldContext, struct FFCompactPresence* compactPresence);
		void STATIC_GetInvitePresence(class UObject* WorldContext, const struct FPendingInvite& invite, class UObject* __WorldContext, struct FOnlinePresence* Presence);
		struct FOnlinePresence STATIC_GetFriendPresence(const struct FFGOnlineFriend& OnlineFriend, class UObject* WorldContext, class UObject* __WorldContext);
		void STATIC_SessionVisibilityStringToEnum(const class FString& String, class UObject* __WorldContext, ESessionVisibility* Enum);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
