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
	 * WidgetBlueprintGeneratedClass BPW_GameModeOptionButton.BPW_GameModeOptionButton_C
	 * Size -> 0x0020 (FullSize[0x03A0] - InheritedSize[0x0380])
	 */
	class UBPW_GameModeOptionButton_C : public UBPW_OptionButton_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0380(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FText                                                mPopUpText;                                              // 0x0388(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void EventClosePopup(bool ConfirmClicked);
		void OnOptionClicked();
		void ExecuteUbergraph_BPW_GameModeOptionButton(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
