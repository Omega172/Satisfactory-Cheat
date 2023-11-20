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
	 * WidgetBlueprintGeneratedClass BPW_Option_ScreenResolution.BPW_Option_ScreenResolution_C
	 * Size -> 0x0014 (FullSize[0x03D8] - InheritedSize[0x03C4])
	 */
	class UBPW_Option_ScreenResolution_C : public UBPW_Options_DropdownBox_C
	{
	public:
		unsigned char                                              UnknownData_207Z[0x4];                                   // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FIntPoint                                           mCachedScreenResolution;                                 // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpdateResolutionValue();
		bool IsPendingApply();
		bool IsPendingRestart();
		void CacheCurrentScreenResolution();
		void SetResolution(const class FString& SelectedResolution);
		void SetupResolutionDropdown();
		void PreConstruct(bool IsDesignTime);
		void OnOptionApplied();
		void OnOptionReverted();
		void Construct();
		void OnOptionValueUpdated();
		void ExecuteUbergraph_BPW_Option_ScreenResolution(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
