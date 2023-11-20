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
	 * WidgetBlueprintGeneratedClass BPW_RadarTower.BPW_RadarTower_C
	 * Size -> 0x0065 (FullSize[0x03B8] - InheritedSize[0x0353])
	 */
	class UBPW_RadarTower_C : public UWidget_UseableBase_C
	{
	public:
		unsigned char                                              UnknownData_6O82[0x5];                                   // 0x0353(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0358(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPW_RadarTowerInfo_C*                               BPW_RadarTowerInfo;                                      // 0x0360(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableText*                                       mNameTextObject;                                         // 0x0368(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             mZoomSlider;                                             // 0x0370(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mZoomText;                                               // 0x0378(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Manufacturing_Warning_C*                     Widget_Manufacturing_Warning;                            // 0x0380(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Map_C*                                       Widget_Map;                                              // 0x0388(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_DarkMode_C*                           Widget_Window_DarkMode;                                  // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class AFGBuildableRadarTower*                              mRadarTower;                                             // 0x0398(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FText                                                mRadarTowerNamePrefix;                                   // 0x03A0(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void UpdateZoomSlider();
		void NormalizedValueToZoomValue(double NormalizedValue, double* ZoomX, double* ZoomY);
		void UpdatePowerState(bool State);
		void UpdateName(const class FText& Name);
		void Construct();
		void BndEvt__BPW_RadarTower_Widget_Window_DarkMode_K2Node_ComponentBoundEvent_1_OnClose__DelegateSignature();
		void BndEvt__BPW_RadarTower_mNameTextObject_K2Node_ComponentBoundEvent_2_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__BPW_RadarTower_Widget_Map_K2Node_ComponentBoundEvent_0_ZoomChanged__DelegateSignature();
		void BndEvt__BPW_RadarTower_mZoomSlider_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__BPW_RadarTower_mNameTextObject_K2Node_ComponentBoundEvent_4_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void ExecuteUbergraph_BPW_RadarTower(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
