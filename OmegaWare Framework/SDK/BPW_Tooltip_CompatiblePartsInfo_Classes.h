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
	 * WidgetBlueprintGeneratedClass BPW_Tooltip_CompatiblePartsInfo.BPW_Tooltip_CompatiblePartsInfo_C
	 * Size -> 0x0030 (FullSize[0x02B0] - InheritedSize[0x0280])
	 */
	class UBPW_Tooltip_CompatiblePartsInfo_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWrapBox*                                            mDescriptorContainer;                                    // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class URichTextBlock*                                      mTitle;                                                  // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FCompatibleItemDescriptors                          mCompatibleItemDescriptors;                              // 0x0298(0x0018) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void SetCompatibleItemDescriptors(const struct FCompatibleItemDescriptors& CompatibleItemDescriptors);
		void PreConstruct(bool IsDesignTime);
		void ExecuteUbergraph_BPW_Tooltip_CompatiblePartsInfo(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
