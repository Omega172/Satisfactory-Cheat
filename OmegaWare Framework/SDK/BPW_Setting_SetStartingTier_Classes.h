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
	 * WidgetBlueprintGeneratedClass BPW_Setting_SetStartingTier.BPW_Setting_SetStartingTier_C
	 * Size -> 0x000C (FullSize[0x03D0] - InheritedSize[0x03C4])
	 */
	class UBPW_Setting_SetStartingTier_C : public UBPW_Options_DropdownBox_C
	{
	public:
		unsigned char                                              UnknownData_VO3E[0x4];                                   // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03C8(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void SetupDropdownOptions();
		void BndEvt__BPW_Setting_SetGamePhase_mDropdownBox_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void OnOptionValueUpdated();
		void ExecuteUbergraph_BPW_Setting_SetStartingTier(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
