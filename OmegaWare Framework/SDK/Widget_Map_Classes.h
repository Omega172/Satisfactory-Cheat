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
	 * WidgetBlueprintGeneratedClass Widget_Map.Widget_Map_C
	 * Size -> 0x0188 (FullSize[0x0428] - InheritedSize[0x02A0])
	 */
	class UWidget_Map_C : public UFGMapWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UBPW_MapAreaPainter_C*                               BPW_MapAreaPainter;                                      // 0x02A8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mMap;                                                    // 0x02B0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBPW_MapCoordinates_C*                               mMapCoordinates;                                         // 0x02B8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        mMapObjectPanel;                                         // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mMapScrollContainer;                                     // 0x02C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USizeBox*                                            mMapSizeBox;                                             // 0x02D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mMapZoomContainer;                                       // 0x02D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FTimerHandle                                        mMoveMapHandle;                                          // 0x02E0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           mMapOrigin;                                              // 0x02E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           mMouseOrigin;                                            // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mIsMapMoving;                                            // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8M97[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		double                                                     mMaxZoom;                                                // 0x0310(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mMinZoom;                                                // 0x0318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             ZoomChanged;                                             // 0x0320(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnObjectAddedToMapDispatch;                              // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnObjectUpdatedOnMapDispatch;                            // 0x0340(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnObjectRemovedFromMapDispatch;                          // 0x0350(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mIsPaintable;                                            // 0x0360(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_K068[0x7];                                   // 0x0361(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlaceMarker;                                           // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnOpenColorPicker;                                       // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnOpenImageBrowser;                                      // 0x0388(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnObjectClicked;                                         // 0x0398(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		EMapModes                                                  mMapMode;                                                // 0x03A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PYKX[0x7];                                   // 0x03A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMarkerMarkedAsOpen;                                    // 0x03B0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		double                                                     mScrollLerpT;                                            // 0x03C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mScrollLerpDuration;                                     // 0x03C8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		double                                                     mScrollLerpUpdateTime;                                   // 0x03D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        mScrollLerpTimer;                                        // 0x03D8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           mScrollLerpStart;                                        // 0x03E0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector2D                                           mScrollLerpEnd;                                          // 0x03F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mMapHasMoved;                                            // 0x0400(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_CPRY[0x7];                                   // 0x0401(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClearMarker;                                           // 0x0408(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnCloseMarkerEditor;                                     // 0x0418(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void RemoveMappingContext();
		void AddMappingContext();
		void SetMapMode(EMapModes mMapMode);
		void ScrollToWorldPosition(const struct FVector& WorldLocation);
		struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void LerpScroll();
		void StartLerpScroll(const struct FVector2D& NormalizedDestination);
		void ScrollToMapObjectLocation(const struct FVector2D& Location);
		void MarkMarkerAsOpen(class UWidget_MapObject_C* Instigator);
		void SetMapAreaPainterBrushSize(double Size);
		void SetMapAreaPainterColor(int32_t ColorIndex);
		void OnIconClicked(class UWidget_MapObject_C* MapObject);
		void OnImageBrowserOpen(int32_t CurrentIconID, class UWidget_MapObject_C* MapObject);
		void OnColorPickerOpen(const struct FLinearColor& CurrentColor, class UWidget_MapObject_C* MapObject);
		void GetNormalizedMousePositionOnMap(struct FVector2D* Location);
		void StopMapPaint();
		void StartMapPaint();
		void OnAttentionPingPressed();
		int32_t GetZOrderForType(ERepresentationType representationType);
		void SetShowThisIndicatorViaActor(class AActor* Actor, bool ShowThisIndicator);
		void FilterOnActors(TArray<class AActor*>* Actors);
		void SetHighilightViaActor(class AActor* Actor, bool HighLight);
		void SetHighilightViaRepresentation(class UFGActorRepresentation* actorRepresentation, bool HighLight);
		void StartScrollMap();
		void DiscardInput();
		void UpdateObjectOnMap(class UFGActorRepresentation* actorRepresentation);
		void CenterMapOnNormalizedLocation(const struct FVector2D& normalizedWorldLocation);
		void OnIconUnhover(class UWidget_MapObject_C* MapObject);
		void OnIconHover(class UWidget_MapObject_C* MapObject);
		void AddObjectToMap(class UFGActorRepresentation* actorRepresentation, bool mAddedAfterMapOpened, class UWidget_MapObject_C** WidgetMapObject);
		void RemoveObjectFromMap(class UFGActorRepresentation* ActorRepresentationToRemove);
		void ClearScrollMap();
		void ScrollMap(const struct FVector2D& MouseOrigin, const struct FVector2D& MapOrigin);
		void ZoomMap(const struct FVector2D& ZoomValue);
		struct FEventReply OnMouseWheel(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void InpActEvt_IA_MapPrimary_K2Node_EnhancedInputActionEvent_6(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
		void InpActEvt_IA_MapPrimary_K2Node_EnhancedInputActionEvent_5(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
		void InpActEvt_IA_MapPrimary_K2Node_EnhancedInputActionEvent_4(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
		void InpActEvt_IA_MapSecondary_K2Node_EnhancedInputActionEvent_3(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
		void InpActEvt_IA_MapSecondary_K2Node_EnhancedInputActionEvent_2(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
		void InpActEvt_IA_MapSecondary_K2Node_EnhancedInputActionEvent_1(const struct FInputActionValue& ActionValue, float ElapsedTime, float TriggeredTime, class UInputAction* SourceAction);
		void OnMouseLeave(const struct FPointerEvent& MouseEvent);
		void Construct();
		void OnFocusLost(const struct FFocusEvent& InFocusEvent);
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnObjectAddedToMap(class UFGActorRepresentation* actorRepresentation, bool addedAfterMapOpened);
		void OnObjectRemovedFromMap(class UFGActorRepresentation* actorRepresentation);
		void Destruct();
		void OnObjectUpdatedOnMap(class UFGActorRepresentation* actorRepresentation);
		void OnMapCentered(const struct FVector2D& normalizedWorldLocation);
		void BndEvt__Widget_Map_mMapCoordinates_K2Node_ComponentBoundEvent_0_OnGoToWorldPosition__DelegateSignature(const struct FVector& WorldPosition);
		void ExecuteUbergraph_Widget_Map(int32_t EntryPoint);
		void OnCloseMarkerEditor__DelegateSignature();
		void OnClearMarker__DelegateSignature();
		void OnMarkerMarkedAsOpen__DelegateSignature(class UWidget_MapObject_C* Instigator);
		void OnObjectClicked__DelegateSignature(class UWidget_MapObject_C* MapObject);
		void OnOpenImageBrowser__DelegateSignature(int32_t CurrentIconID, class UWidget_MapObject_C* MapObject);
		void OnOpenColorPicker__DelegateSignature(const struct FLinearColor& CurrentColor, class UWidget_MapObject_C* MapObject);
		void OnPlaceMarker__DelegateSignature(const struct FVector2D& Location);
		void OnObjectRemovedFromMapDispatch__DelegateSignature(class UFGActorRepresentation* ActorRespresentation);
		void OnObjectUpdatedOnMapDispatch__DelegateSignature(class UFGActorRepresentation* actorRepresentation);
		void OnObjectAddedToMapDispatch__DelegateSignature(class UFGActorRepresentation* actorRepresentation, class UWidget_MapObject_C* WidgetMapObject);
		void ZoomChanged__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
