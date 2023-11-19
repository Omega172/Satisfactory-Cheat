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
	 * WidgetBlueprintGeneratedClass BPW_MarkerEditor_Marker.BPW_MarkerEditor_Marker_C
	 * Size -> 0x00F0 (FullSize[0x0478] - InheritedSize[0x0388])
	 */
	class UBPW_MarkerEditor_Marker_C : public UBPW_MarkerEditor_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0388(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidget_StandardButton_C*                            mApply;                                                  // 0x0390(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mButtonDiv;                                              // 0x0398(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mCancel;                                                 // 0x03A0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_Togglable_C*                  mHighlightMarker;                                        // 0x03A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mIcon;                                                   // 0x03B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UFGEditableText*                                     mName;                                                   // 0x03B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mRemoveMarker;                                           // 0x03C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            mSelectColorButton;                                      // 0x03C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            MSelectIconButton;                                       // 0x03D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_StandardButton_Switch_C*                        mSizeLargeButton;                                        // 0x03D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_StandardButton_Switch_C*                        mSizeSmallButton;                                        // 0x03E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mThumbnailColor;                                         // 0x03E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mThumbnailIcon;                                          // 0x03F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UHorizontalBox*                                      mViewDistanceContainer;                                  // 0x03F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_StandardButton_Switch_C*                        mViewDistanceFar;                                        // 0x0400(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_StandardButton_Switch_C*                        mViewDistanceInfinite;                                   // 0x0408(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_StandardButton_Switch_C*                        mViewDistanceMedium;                                     // 0x0410(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_StandardButton_Switch_C*                        mViewDistanceNear;                                       // 0x0418(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_StandardButton_Switch_C*                        mViewDistanceOff;                                        // 0x0420(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FMapMarker                                          mMapMarker;                                              // 0x0428(0x0050) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetupCompassDistanceButton();
		void SetCompassViewDistance(ECompassViewDistance compassViewDistance);
		void SetSize(double Size);
		void SetColor(const struct FLinearColor& Color);
		void SetIconID(int32_t IconID);
		void UpdateName();
		void Construct();
		void BndEvt__BPW_MarkerEditor_Marker_mRemoveMarker_1_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature();
		void BndEvt__BPW_MarkerEditor_Marker_mRemoveMarker_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature();
		void OnEscapePressed();
		void BndEvt__BPW_MarkerEditor_Marker_mName_K2Node_ComponentBoundEvent_3_OnEditableTextCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod);
		void BndEvt__BPW_MarkerEditor_Marker_mApply_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
		void BndEvt__BPW_MarkerEditor_Marker_mSelectColorButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
		void BndEvt__BPW_MarkerEditor_Marker_MSelectIconButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
		void BndEvt__BPW_MarkerEditor_Marker_mSizeLargeButton_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void BndEvt__BPW_MarkerEditor_Marker_mSizeSmallButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature();
		void BndEvt__BPW_MarkerEditor_Marker_mHighlightMarker_K2Node_ComponentBoundEvent_8_OnStateChanged__DelegateSignature(bool IsTrue);
		void BndEvt__BPW_MarkerEditor_Marker_mViewDistanceOff_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature();
		void BndEvt__BPW_MarkerEditor_Marker_mViewDistanceNear_K2Node_ComponentBoundEvent_10_OnClicked__DelegateSignature();
		void BndEvt__BPW_MarkerEditor_Marker_mViewDistanceMedium_K2Node_ComponentBoundEvent_11_OnClicked__DelegateSignature();
		void BndEvt__BPW_MarkerEditor_Marker_mViewDistanceInfinite_K2Node_ComponentBoundEvent_12_OnClicked__DelegateSignature();
		void BndEvt__BPW_MarkerEditor_Marker_mViewDistanceFar_K2Node_ComponentBoundEvent_13_OnClicked__DelegateSignature();
		void BndEvt__BPW_MarkerEditor_Marker_mViewDistanceOff_K2Node_ComponentBoundEvent_14_OnHovered__DelegateSignature();
		void BndEvt__BPW_MarkerEditor_Marker_mViewDistanceNear_K2Node_ComponentBoundEvent_15_OnHovered__DelegateSignature();
		void BndEvt__BPW_MarkerEditor_Marker_mViewDistanceMedium_K2Node_ComponentBoundEvent_16_OnHovered__DelegateSignature();
		void BndEvt__BPW_MarkerEditor_Marker_mViewDistanceFar_K2Node_ComponentBoundEvent_17_OnHovered__DelegateSignature();
		void BndEvt__BPW_MarkerEditor_Marker_mViewDistanceInfinite_K2Node_ComponentBoundEvent_18_OnHovered__DelegateSignature();
		void BndEvt__BPW_MarkerEditor_Marker_mViewDistanceOff_K2Node_ComponentBoundEvent_19_OnUnhovered__DelegateSignature();
		void BndEvt__BPW_MarkerEditor_Marker_mViewDistanceNear_K2Node_ComponentBoundEvent_20_OnUnhovered__DelegateSignature();
		void BndEvt__BPW_MarkerEditor_Marker_mViewDistanceMedium_K2Node_ComponentBoundEvent_21_OnUnhovered__DelegateSignature();
		void BndEvt__BPW_MarkerEditor_Marker_mViewDistanceFar_K2Node_ComponentBoundEvent_22_OnUnhovered__DelegateSignature();
		void BndEvt__BPW_MarkerEditor_Marker_mViewDistanceInfinite_K2Node_ComponentBoundEvent_23_OnUnhovered__DelegateSignature();
		void BndEvt__BPW_MarkerEditor_Marker_mName_K2Node_ComponentBoundEvent_24_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void ExecuteUbergraph_BPW_MarkerEditor_Marker(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
