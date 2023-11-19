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
	 * BlueprintGeneratedClass Build_ConveyorAttachmentSplitterSmart.Build_ConveyorAttachmentSplitterSmart_C
	 * Size -> 0x0030 (FullSize[0x0750] - InheritedSize[0x0720])
	 */
	class ABuild_ConveyorAttachmentSplitterSmart_C : public AFGBuildableSplitterSmart
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0720(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UFGClearanceComponent*                               FGClearance;                                             // 0x0728(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGFactoryConnectionComponent*                       Output2;                                                 // 0x0730(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGFactoryConnectionComponent*                       Output3;                                                 // 0x0738(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGFactoryConnectionComponent*                       Input1;                                                  // 0x0740(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UFGFactoryConnectionComponent*                       Output1;                                                 // 0x0748(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		bool CanUseFactoryClipboard();
		class UFGFactoryClipboardSettings* CopySettings();
		class UClass* GetClipboardMappingClass();
		class UClass* GetClipboardSettingsClass();
		bool PasteSettings(class UFGFactoryClipboardSettings* factoryClipboard);
		void PlayConstructSound();
		void ExecuteUbergraph_Build_ConveyorAttachmentSplitterSmart(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
