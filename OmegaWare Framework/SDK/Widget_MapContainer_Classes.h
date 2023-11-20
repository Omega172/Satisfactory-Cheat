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
	 * WidgetBlueprintGeneratedClass Widget_MapContainer.Widget_MapContainer_C
	 * Size -> 0x0108 (FullSize[0x03F0] - InheritedSize[0x02E8])
	 */
	class UWidget_MapContainer_C : public UFGInteractWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02E8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPW_MapMenu_C*                                      BPW_MapMenu;                                             // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_MarkerPicker_Map_C*                             BPW_MarkerPicker_Map;                                    // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mPopupContainer;                                         // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mPopupOverlay;                                           // 0x0308(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             mZoomSlider;                                             // 0x0310(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          mZoomText;                                               // 0x0318(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_StandardButton_C*                            ShowHideButton;                                          // 0x0320(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Map_C*                                       Widget_Map;                                              // 0x0328(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_ContentBackground_DarkMode_C*         Widget_Window_ContentBackground_DarkMode;                // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_Window_DarkMode_C*                           Widget_Window_DarkMode_2;                                // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		bool                                                       IsMapOpen;                                               // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_I38H[0x7];                                   // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        mAnimationTimer;                                         // 0x0348(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UWidget_MapObject_C*                                 mHoveredMapObject;                                       // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		int32_t                                                    mBeaconInt;                                              // 0x0358(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YUI9[0x4];                                   // 0x035C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMapFilterStruct                                    mBeaconSearchResult;                                     // 0x0360(0x0028) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash
		bool                                                       IsFilterMenuCollapsed;                                   // 0x0388(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsMarkerModeActive;                                     // 0x0389(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_BKAR[0x6];                                   // 0x038A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMapMarker                                          mNewMarker;                                              // 0x0390(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class UWidget_MapObject_C*                                 mCurrentPopupInstigator;                                 // 0x03E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class UWidget_MapObject_C*                                 mOpenedMarker;                                           // 0x03E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash

	public:
		void SetOpenedMarker(class UWidget_MapObject_C* mOpenedMarker);
		void OnMapPainterSwatchSelected(int32_t ColorIndex);
		void OnColorSelected(TArray<struct FLinearColor>* Color);
		void OnImageSelected(class UObject* Object, int32_t ImageID);
		void OpenColorPicker(const struct FLinearColor& CurrentColor, class UWidget_MapObject_C* MapObject);
		void OpenImageBrowser(int32_t CurrentIconID, class UWidget_MapObject_C* MapObject);
		void ClosePopup();
		void AddPopupWidget(class UWidget* Widget);
		void OnNewMarkerMode();
		void OnPlaceMarker(const struct FVector2D& Location);
		void ExitMarkerMode();
		void OnStampSelected(int32_t IconID);
		bool OnAttentionPingPressed();
		void SetFiltersCollapsed(bool isCollapsed);
		class FText UglyFixForActorName(ERepresentationType actorRepresentation);
		void UpdateMapObjectVisibility(ERepresentationType Type);
		bool GetCompassRepresentation(ERepresentationType Type);
		bool GetMapRepresentation(ERepresentationType Type);
		void SetCompassRepresentation(ERepresentationType Type, bool Visible);
		void SetMapRepresentation(ERepresentationType Type, bool Visible);
		int32_t GetIndexInParent(class UWidget* Widget);
		void NormalizedValueToZoomValue(double NormalizedValue, struct FVector2D* ZoomValue);
		void UpdateZoomSlider();
		void SetOpenMap(bool OpenMap);
		void CloseMap();
		void OnEscapePressed();
		void Destruct();
		void BndEvt__mZoomSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__Widget_Map_K2Node_ComponentBoundEvent_1_OnObjectAddedToMapDispatch__DelegateSignature(class UFGActorRepresentation* actorRepresentation, class UWidget_MapObject_C* WidgetMapObject);
		void BndEvt__Widget_Map_K2Node_ComponentBoundEvent_2_OnObjectUpdatedOnMapDispatch__DelegateSignature(class UFGActorRepresentation* actorRepresentation);
		void BndEvt__Widget_Map_K2Node_ComponentBoundEvent_3_OnObjectRemovedFromMapDispatch__DelegateSignature(class UFGActorRepresentation* ActorRespresentation);
		void ToggleShowFilters();
		void BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_4_OnStampSelected__DelegateSignature(int32_t IconID);
		void BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_7_OnClearSelection__DelegateSignature();
		void BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_8_OnNewMarkerSelected__DelegateSignature();
		void BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_9_OnOpenColorPicker__DelegateSignature(const struct FLinearColor& CurrentColor, class UWidget_MapObject_C* MapObject);
		void BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_10_OnOpenImageBrowser__DelegateSignature(int32_t CurrentIconID, class UWidget_MapObject_C* MapObject);
		void BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_11_OnObjectClicked__DelegateSignature(class UWidget_MapObject_C* MapObject);
		void BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_12_OnSwatchSelected__DelegateSignature(int32_t ColorIndex);
		void BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_13_OnPainterBrushSizeChanged__DelegateSignature(double Size);
		void BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_14_OnMarkerMarkedAsOpen__DelegateSignature(class UWidget_MapObject_C* Instigator);
		void BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_15_OnPlaceMarker__DelegateSignature(const struct FVector2D& Location);
		void BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_5_OnStampHovered__DelegateSignature(int32_t IconID);
		void BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_6_OnStampUnhovered__DelegateSignature(int32_t IconID);
		void Construct();
		void BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_16_OnClearMarker__DelegateSignature();
		void BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_17_OnCloseMarkerEditor__DelegateSignature();
		void ExecuteUbergraph_Widget_MapContainer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
