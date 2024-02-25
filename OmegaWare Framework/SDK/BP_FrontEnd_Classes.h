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
	 * WidgetBlueprintGeneratedClass BP_FrontEnd.BP_FrontEnd_C
	 * Size -> 0x0068 (FullSize[0x0380] - InheritedSize[0x0318])
	 */
	class UBP_FrontEnd_C : public UFGBaseUI
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0318(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBP_MainMenuWidget_C*                                BP_MainMenuWidget;                                       // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          MenuSlot;                                                // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBackgroundBlur*                                     mPopupBlur;                                              // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_FocusGrab_C*                                 mPopupModal;                                             // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          mPopupSlot;                                              // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_AlphaInfoScreen_C*                           Widget_AlphaInfoScreen;                                  // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_CoffeeSplash_C*                              Widget_CoffeeSplash;                                     // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_ErrorMessage_C*                              Widget_ErrorMessage;                                     // 0x0358(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_LoggingIn_C*                                 Widget_LoggingIn;                                        // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFGErrorMessage*                                     mLastErrorMessage;                                       // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       mShouldQuitAfterErrors;                                  // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RHR0[0x7];                                   // 0x0371(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              mPopupClass;                                             // 0x0378(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		class UFGPopupWidget* CreatePopupWidget(const struct FPopupData& PopupData);
		void ShouldShutdown(bool* Shutdown);
		void GetErrorButtonText(class FText* ButtonText);
		void HasMoreErrors(bool* moreErrors);
		void ShouldShutdownAfterThisError(bool* Shutdown);
		void Internal_ShouldShowLogin(bool* shouldShow);
		ESlateVisibility ShouldShowLogin();
		void SetNextErrorMessage(class UFGErrorMessage* newError);
		void GetNextErrorMessage(class UFGErrorMessage** ErrorMessage);
		void Internal_ShowErrorMessage(bool* shouldShow);
		void Internal_ShouldShowMainMenu(bool* shouldShow);
		void Internal_ShouldShowAlphaInfo(bool* shouldShow);
		ESlateVisibility ShouldShowErrorPopup();
		ESlateVisibility ShouldShowMainMenu();
		ESlateVisibility ShouldShowAlphaInfo();
		void SetupMainMenu();
		void BndEvt__Widget_ErrorMessage_K2Node_ComponentBoundEvent_0_mOnClicked__DelegateSignature();
		void GetAndSetNewError();
		void Construct();
		void ConditionallySetNewError();
		void Destruct();
		void ClosePopup();
		void ExecuteUbergraph_BP_FrontEnd(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
