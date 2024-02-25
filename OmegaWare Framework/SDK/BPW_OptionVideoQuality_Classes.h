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
	 * WidgetBlueprintGeneratedClass BPW_OptionVideoQuality.BPW_OptionVideoQuality_C
	 * Size -> 0x0008 (FullSize[0x03E0] - InheritedSize[0x03D8])
	 */
	class UBPW_OptionVideoQuality_C : public UBPW_OptionSelection_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03D8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void UpdateOptionText();
		void UpdateSelectionValue();
		void HandleSelection(bool incrementSelection, bool* ValueChanged);
		void OnInitValueController();
		void OnOptionValueUpdated();
		void ExecuteUbergraph_BPW_OptionVideoQuality(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
