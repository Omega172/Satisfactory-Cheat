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
	 * WidgetBlueprintGeneratedClass Widget_NetworkErrorPopup.Widget_NetworkErrorPopup_C
	 * Size -> 0x0038 (FullSize[0x02B8] - InheritedSize[0x0280])
	 */
	class UWidget_NetworkErrorPopup_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UOverlay*                                            mContent;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFGGameInstance*                                     FGGameInstance;                                          // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       mHasPopupOpen;                                           // 0x0298(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_WKC6[0x7];                                   // 0x0299(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFGGameNetworkErrorMsg                              LatestMessage;                                           // 0x02A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void CreatePopup(const struct FFGGameNetworkErrorMsg& FGGameNetworkErrorMsg);
		void Construct();
		void mOnNetworkErrorRecieved_Event_1(ENetworkFailure ErrorType, const class FString& ErrorMsg);
		void CheckErrors();
		void OnPopupClosed(bool NewParam);
		void ExecuteUbergraph_Widget_NetworkErrorPopup(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
