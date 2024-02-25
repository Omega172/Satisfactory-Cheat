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
	 * WidgetBlueprintGeneratedClass BPW_OptionsHologramColor_Parent.BPW_OptionsHologramColor_Parent_C
	 * Size -> 0x0020 (FullSize[0x03B4] - InheritedSize[0x0394])
	 */
	class UBPW_OptionsHologramColor_Parent_C : public UBPW_OptionsColor_C
	{
	public:
		unsigned char                                              UnknownData_L6QN[0x4];                                   // 0x0394(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0398(0x0008) ZeroConstructor, Transient, DuplicateTransient
		TArray<class FName>                                        mParameterName;                                          // 0x03A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    OptionIndex;                                             // 0x03B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void Construct();
		void OnColorChanged(const struct FLinearColor& NewColor);
		void ExecuteUbergraph_BPW_OptionsHologramColor_Parent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
