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
	 * WidgetBlueprintGeneratedClass BPW_Option_Language.BPW_Option_Language_C
	 * Size -> 0x005C (FullSize[0x0420] - InheritedSize[0x03C4])
	 */
	class UBPW_Option_Language_C : public UBPW_Options_DropdownBox_C
	{
	public:
		unsigned char                                              UnknownData_0QA5[0x4];                                   // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TMap<class FString, class FText>                           languageData;                                            // 0x03D0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		bool IsPendingApply();
		bool IsPendingRestart();
		void SetLanguage(const class FString& SelectedLanguage);
		void SetupLanguageDropdown();
		void PreConstruct(bool IsDesignTime);
		void OnOptionApplied();
		void ExecuteUbergraph_BPW_Option_Language(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
