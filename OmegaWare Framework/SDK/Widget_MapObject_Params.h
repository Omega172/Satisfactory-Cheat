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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Widget_MapObject.Widget_MapObject_C.GetActorRepresentation
	 */
	struct UWidget_MapObject_C_GetActorRepresentation_Params
	{
	public:
		class UFGActorRepresentation*                              ActorRepresntation;                                      // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.GetMapMarker
	 */
	struct UWidget_MapObject_C_GetMapMarker_Params
	{
	public:
		struct FMapMarker                                          MapMarker;                                               // 0x0000(0x0050)  (Parm, OutParm)
		bool                                                       Success;                                                 // 0x0050(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BFW3[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.ViewRadarTowerDistance
	 */
	struct UWidget_MapObject_C_ViewRadarTowerDistance_Params
	{	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.OpenMarkerEditor
	 */
	struct UWidget_MapObject_C_OpenMarkerEditor_Params
	{	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.UpdateHighlight
	 */
	struct UWidget_MapObject_C_UpdateHighlight_Params
	{	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.SetMarkerEditorAnchorVisibility
	 */
	struct UWidget_MapObject_C_SetMarkerEditorAnchorVisibility_Params
	{
	public:
		bool                                                       mIsVisible;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.OnNewColorSelected
	 */
	struct UWidget_MapObject_C_OnNewColorSelected_Params
	{
	public:
		struct FLinearColor                                        Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.OnNewIconSelected
	 */
	struct UWidget_MapObject_C_OnNewIconSelected_Params
	{
	public:
		int32_t                                                    IconID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2ZCC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.CloseMarkerEditor
	 */
	struct UWidget_MapObject_C_CloseMarkerEditor_Params
	{	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.SetMarkerEditorClass
	 */
	struct UWidget_MapObject_C_SetMarkerEditorClass_Params
	{	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.GetMarkerEditorContent
	 */
	struct UWidget_MapObject_C_GetMarkerEditorContent_Params
	{
	public:
		class UUserWidget*                                         ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.UpdateRenderScale
	 */
	struct UWidget_MapObject_C_UpdateRenderScale_Params
	{	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.SetShowThisIndicator
	 */
	struct UWidget_MapObject_C_SetShowThisIndicator_Params
	{
	public:
		bool                                                       mShowThisIndicator;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E7JN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.HideViewDistanceIndicator
	 */
	struct UWidget_MapObject_C_HideViewDistanceIndicator_Params
	{	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.ShowViewDistanceIndicator
	 */
	struct UWidget_MapObject_C_ShowViewDistanceIndicator_Params
	{
	public:
		ECompassViewDistance                                       viewDistance;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0F9Y[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.UnhighlightOnMap
	 */
	struct UWidget_MapObject_C_UnhighlightOnMap_Params
	{
	public:
		bool                                                       UnlockHighlight;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.HighlightOnMap
	 */
	struct UWidget_MapObject_C_HighlightOnMap_Params
	{
	public:
		bool                                                       LockHighlight;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DUUS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.mShowActorDetails
	 */
	struct UWidget_MapObject_C_mShowActorDetails_Params
	{	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.Construct
	 */
	struct UWidget_MapObject_C_Construct_Params
	{	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.Tick
	 */
	struct UWidget_MapObject_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.OnObjectFiltered
	 */
	struct UWidget_MapObject_C_OnObjectFiltered_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.OnObjectMoved
	 */
	struct UWidget_MapObject_C_OnObjectMoved_Params
	{
	public:
		struct FVector2D                                           normalizedLocation;                                      // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.OnActorRepresentationUpdated
	 */
	struct UWidget_MapObject_C_OnActorRepresentationUpdated_Params
	{	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.DestructionTimer
	 */
	struct UWidget_MapObject_C_DestructionTimer_Params
	{
	public:
		double                                                     Time;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.BndEvt__Widget_MapCompass_Icon_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature
	 */
	struct UWidget_MapObject_C_BndEvt__Widget_MapCompass_Icon_K2Node_ComponentBoundEvent_0_OnUnhovered__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.BndEvt__Widget_MapCompass_Icon_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature
	 */
	struct UWidget_MapObject_C_BndEvt__Widget_MapCompass_Icon_K2Node_ComponentBoundEvent_1_OnHovered__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.ShowActorDetailsEvent
	 */
	struct UWidget_MapObject_C_ShowActorDetailsEvent_Params
	{	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.BndEvt__Widget_MapObject_Widget_MapCompass_Icon_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature
	 */
	struct UWidget_MapObject_C_BndEvt__Widget_MapObject_Widget_MapCompass_Icon_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.SetOverwriteIcon
	 */
	struct UWidget_MapObject_C_SetOverwriteIcon_Params
	{
	public:
		class UTexture2D*                                          Texture;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.OpenImageBrowser
	 */
	struct UWidget_MapObject_C_OpenImageBrowser_Params
	{
	public:
		int32_t                                                    CurrentIconID;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.OpenColorPicker
	 */
	struct UWidget_MapObject_C_OpenColorPicker_Params
	{
	public:
		struct FLinearColor                                        CurrentColor;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.OnHighlightedUpdated
	 */
	struct UWidget_MapObject_C_OnHighlightedUpdated_Params
	{
	public:
		bool                                                       highlighted;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsHighlightedByLocalPlayer;                              // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZPDK[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Color;                                                   // 0x0004(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.WhenAddedConstruct
	 */
	struct UWidget_MapObject_C_WhenAddedConstruct_Params
	{
	public:
		bool                                                       markerCreatedByOwningPlayer;                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.FocusOnMap
	 */
	struct UWidget_MapObject_C_FocusOnMap_Params
	{	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.UnfocusOnMap
	 */
	struct UWidget_MapObject_C_UnfocusOnMap_Params
	{	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.ScrollToOnMap
	 */
	struct UWidget_MapObject_C_ScrollToOnMap_Params
	{	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.ExecuteUbergraph_Widget_MapObject
	 */
	struct UWidget_MapObject_C_ExecuteUbergraph_Widget_MapObject_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.OnScrollToOnMap__DelegateSignature
	 */
	struct UWidget_MapObject_C_OnScrollToOnMap__DelegateSignature_Params
	{
	public:
		struct FVector2D                                           Location;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.OnMarkMarkerAsOpen__DelegateSignature
	 */
	struct UWidget_MapObject_C_OnMarkMarkerAsOpen__DelegateSignature_Params
	{
	public:
		class UWidget_MapObject_C*                                 Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.OnOpenColorPicker__DelegateSignature
	 */
	struct UWidget_MapObject_C_OnOpenColorPicker__DelegateSignature_Params
	{
	public:
		struct FLinearColor                                        CurrentColor;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget_MapObject_C*                                 MapObject;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.OnOpenImageBrowser__DelegateSignature
	 */
	struct UWidget_MapObject_C_OnOpenImageBrowser__DelegateSignature_Params
	{
	public:
		int32_t                                                    CurrentIconID;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VT6L[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_MapObject_C*                                 MapObject;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.OnClicked__DelegateSignature
	 */
	struct UWidget_MapObject_C_OnClicked__DelegateSignature_Params
	{
	public:
		class UWidget_MapObject_C*                                 MapObject;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.OnUnhovered__DelegateSignature
	 */
	struct UWidget_MapObject_C_OnUnhovered__DelegateSignature_Params
	{
	public:
		class UWidget_MapObject_C*                                 MapObject;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapObject.Widget_MapObject_C.OnHovered__DelegateSignature
	 */
	struct UWidget_MapObject_C_OnHovered__DelegateSignature_Params
	{
	public:
		class UWidget_MapObject_C*                                 MapObject;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
