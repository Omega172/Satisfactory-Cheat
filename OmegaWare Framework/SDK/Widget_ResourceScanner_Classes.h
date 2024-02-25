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
	 * WidgetBlueprintGeneratedClass Widget_ResourceScanner.Widget_ResourceScanner_C
	 * Size -> 0x0020 (FullSize[0x0308] - InheritedSize[0x02E8])
	 */
	class UWidget_ResourceScanner_C : public UFGInteractWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidget_RadialMenu_C*                                Widget_RadialMenu;                                       // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ABP_ResourceScanner_C*                               mResourceScanner;                                        // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UClass*                                              SelectedResource;                                        // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void AddScannableResourceButtons();
		void GetRandomisedScannableResourceName(class UClass* ResourceDescriptorClass, class FText* OutText);
		void Construct();
		void Destruct();
		void ExecuteUbergraph_Widget_ResourceScanner(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
