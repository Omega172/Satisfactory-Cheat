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
	 * WidgetBlueprintGeneratedClass BPW_Dropdown_Upscaling.BPW_Dropdown_Upscaling_C
	 * Size -> 0x0000 (FullSize[0x03E0] - InheritedSize[0x03E0])
	 */
	class UBPW_Dropdown_Upscaling_C : public UBPW_Options_DropdownBox_Dynamic_C
	{
	public:
		void OnDropdownSelectionChanged(ESelectInfo SelectionType);
		void SetupDropdownOptions();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
