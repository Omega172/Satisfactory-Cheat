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
	 * WidgetBlueprintGeneratedClass BPW_Option_GraphicsAPI.BPW_Option_GraphicsAPI_C
	 * Size -> 0x0014 (FullSize[0x03D8] - InheritedSize[0x03C4])
	 */
	class UBPW_Option_GraphicsAPI_C : public UBPW_Options_DropdownBox_C
	{
	public:
		unsigned char                                              UnknownData_YZ5R[0x4];                                   // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FTimerHandle                                        CheckOpenedTimerHandle;                                  // 0x03D0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void GetOverwriteTooltip(class FText* ToolTip);
		void UpdateEnabledState();
		void UpdateGraphicAPIValue();
		bool IsPendingApply();
		bool IsPendingRestart();
		void SetupGraphicsAPIDropdown();
		void PreConstruct(bool IsDesignTime);
		void OnOptionApplied();
		void OnOptionReverted();
		void OnOptionValueUpdated();
		void Construct();
		void Destruct();
		void OnOpeningDropDown();
		void CheckOpened();
		void ExecuteUbergraph_BPW_Option_GraphicsAPI(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
