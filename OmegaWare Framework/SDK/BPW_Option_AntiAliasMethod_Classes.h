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
	 * WidgetBlueprintGeneratedClass BPW_Option_AntiAliasMethod.BPW_Option_AntiAliasMethod_C
	 * Size -> 0x0008 (FullSize[0x03E8] - InheritedSize[0x03E0])
	 */
	class UBPW_Option_AntiAliasMethod_C : public UBPW_Options_DropdownBox_Dynamic_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03E0(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnDropdownSelectionChanged(ESelectInfo SelectionType);
		void UpdateCurrentValue();
		void Construct();
		void OnUpscalingMethodChanged(const class FString& updatedCvar);
		void Destruct();
		void ExecuteUbergraph_BPW_Option_AntiAliasMethod(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
