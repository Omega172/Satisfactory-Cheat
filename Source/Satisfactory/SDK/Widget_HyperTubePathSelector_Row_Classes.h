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
	 * WidgetBlueprintGeneratedClass Widget_HyperTubePathSelector_Row.Widget_HyperTubePathSelector_Row_C
	 * Size -> 0x0068 (FullSize[0x02E8] - InheritedSize[0x0280])
	 */
	class UWidget_HyperTubePathSelector_Row_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0280(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UImage*                                              ConnectionIcon;                                          // 0x0288(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ConnectionIndexText;                                     // 0x0290(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ConnectionLabelText;                                     // 0x0298(0x0008) ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              SelectedDestinationPointer;                              // 0x02A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FFGPipeHyperJunctionConnectionInfo                  ConnectionInfo;                                          // 0x02A8(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    ConnectionIndex;                                         // 0x02D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_Y5ZO[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFGPipeHyperConnectionHistoryEntry                  SelectedOutputConnection;                                // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, ContainsInstancedReference

	public:
		void UpdatePointerVisibility();
		struct FSlateBrush GetConnectionInfoTexture();
		class FText GetConnectionIndexText();
		void UpdateConnectionInfo(const struct FFGPipeHyperJunctionConnectionInfo& NewInfo, int32_t NewIndex);
		void Construct();
		void OnPendingJunctionOutputChanged(const struct FFGPipeHyperConnectionHistoryEntry& newOutputConnection);
		void ExecuteUbergraph_Widget_HyperTubePathSelector_Row(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
