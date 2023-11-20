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
	 * WidgetBlueprintGeneratedClass Widget_MapObject.Widget_MapObject_C
	 * Size -> 0x0111 (FullSize[0x03B1] - InheritedSize[0x02A0])
	 */
	class UWidget_MapObject_C : public UFGMapObjectWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02A0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UWidgetAnimation*                                    ani_ThisIndicator;                                       // 0x02A8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ani_ViewDistancePulse;                                   // 0x02B0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UWidgetAnimation*                                    ani_Highlight;                                           // 0x02B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash
		class UOverlay*                                            mActorDetailsContainer;                                  // 0x02C0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mContainer;                                              // 0x02C8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            mMapHighlightOverlay;                                    // 0x02D0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UMenuAnchor*                                         mMarkerEditorAnchor;                                     // 0x02D8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mThisIndicator;                                          // 0x02E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mViewDistanceIndicator;                                  // 0x02E8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              mViewDistancePulse;                                      // 0x02F0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VerticalBox_1;                                           // 0x02F8(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidget_MapCompass_Icon_C*                           Widget_MapCompass_Icon;                                  // 0x0300(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnHovered;                                               // 0x0308(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnUnhovered;                                             // 0x0318(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    mZOrder;                                                 // 0x0328(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_M547[0x4];                                   // 0x032C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           mPositionOnCanvas;                                       // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       mShowThisIndicator;                                      // 0x0340(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_FK8Y[0x7];                                   // 0x0341(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x0348(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UClass*                                              MarkerEditorClass;                                       // 0x0358(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UTexture2D*                                          mOverwriteIcon;                                          // 0x0360(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnOpenImageBrowser;                                      // 0x0368(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnOpenColorPicker;                                       // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UBPW_MarkerEditor_C*                                 mMarkerEditor;                                           // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnMarkMarkerAsOpen;                                      // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             OnScrollToOnMap;                                         // 0x03A0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       mLockHighlight;                                          // 0x03B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void GetActorRepresentation(class UFGActorRepresentation** ActorRepresntation);
		void GetMapMarker(struct FMapMarker* MapMarker, bool* Success);
		void ViewRadarTowerDistance();
		void OpenMarkerEditor();
		void UpdateHighlight();
		void SetMarkerEditorAnchorVisibility(bool mIsVisible);
		void OnNewColorSelected(const struct FLinearColor& Color);
		void OnNewIconSelected(int32_t IconID);
		void CloseMarkerEditor();
		void SetMarkerEditorClass();
		class UUserWidget* GetMarkerEditorContent();
		void UpdateRenderScale();
		void SetShowThisIndicator(bool mShowThisIndicator);
		void HideViewDistanceIndicator();
		void ShowViewDistanceIndicator(ECompassViewDistance viewDistance);
		void UnhighlightOnMap(bool UnlockHighlight);
		void HighlightOnMap(bool LockHighlight);
		void mShowActorDetails();
		void Construct();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void OnObjectFiltered(bool Visible);
		void OnObjectMoved(const struct FVector2D& normalizedLocation);
		void OnActorRepresentationUpdated();
		void DestructionTimer(double Time);
		void BndEvt__Widget_MapCompass_Icon_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature();
		void BndEvt__Widget_MapCompass_Icon_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature();
		void ShowActorDetailsEvent();
		void BndEvt__Widget_MapObject_Widget_MapCompass_Icon_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
		void SetOverwriteIcon(class UTexture2D* Texture);
		void OpenImageBrowser(int32_t CurrentIconID);
		void OpenColorPicker(const struct FLinearColor& CurrentColor);
		void OnHighlightedUpdated(bool highlighted, bool IsHighlightedByLocalPlayer, const struct FLinearColor& Color);
		void WhenAddedConstruct(bool markerCreatedByOwningPlayer);
		void FocusOnMap();
		void UnfocusOnMap();
		void ScrollToOnMap();
		void ExecuteUbergraph_Widget_MapObject(int32_t EntryPoint);
		void OnScrollToOnMap__DelegateSignature(const struct FVector2D& Location);
		void OnMarkMarkerAsOpen__DelegateSignature(class UWidget_MapObject_C* Instigator);
		void OnOpenColorPicker__DelegateSignature(const struct FLinearColor& CurrentColor, class UWidget_MapObject_C* MapObject);
		void OnOpenImageBrowser__DelegateSignature(int32_t CurrentIconID, class UWidget_MapObject_C* MapObject);
		void OnClicked__DelegateSignature(class UWidget_MapObject_C* MapObject);
		void OnUnhovered__DelegateSignature(class UWidget_MapObject_C* MapObject);
		void OnHovered__DelegateSignature(class UWidget_MapObject_C* MapObject);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
