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
	 * WidgetBlueprintGeneratedClass BPW_Option_ResetReverb.BPW_Option_ResetReverb_C
	 * Size -> 0x0008 (FullSize[0x0388] - InheritedSize[0x0380])
	 */
	class UBPW_Option_ResetReverb_C : public UBPW_OptionButton_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0380(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void OnOptionClicked();
		void ExecuteUbergraph_BPW_Option_ResetReverb(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
