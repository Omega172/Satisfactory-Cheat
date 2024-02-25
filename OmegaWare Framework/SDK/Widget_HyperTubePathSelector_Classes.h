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
	 * WidgetBlueprintGeneratedClass Widget_HyperTubePathSelector.Widget_HyperTubePathSelector_C
	 * Size -> 0x0040 (FullSize[0x02C0] - InheritedSize[0x0280])
	 */
	class UWidget_HyperTubePathSelector_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        ConnectionList;                                          // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          JunctionInfoText;                                        // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FFGPendingHyperJunctionInfo                         CurrentJunctionInfo;                                     // 0x0298(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void CREATEDELEGATE_PROXYFUNCTION_1(const struct FFGPendingHyperJunctionInfo& newJunctionInfo);
		void OnShortcutPressed(int32_t shortcutIndex, bool* Result);
		void PopulateConnectionList();
		void UpdateJunctionInfoText();
		void InitPendingJunctionInfo(const struct FFGPendingHyperJunctionInfo& NewInfo);
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ExecuteUbergraph_Widget_HyperTubePathSelector(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
