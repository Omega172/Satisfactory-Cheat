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
	 * WidgetBlueprintGeneratedClass BPW_Setting_GiveAllTiers.BPW_Setting_GiveAllTiers_C
	 * Size -> 0x0000 (FullSize[0x08A8] - InheritedSize[0x08A8])
	 */
	class UBPW_Setting_GiveAllTiers_C : public UBPW_OptionsCheckbox_C
	{
	public:
		void HandleChecked(bool IsChecked);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
