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
	 * Function Widget_MapContainer.Widget_MapContainer_C.SetOpenedMarker
	 */
	struct UWidget_MapContainer_C_SetOpenedMarker_Params
	{
	public:
		class UWidget_MapObject_C*                                 mOpenedMarker;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.OnMapPainterSwatchSelected
	 */
	struct UWidget_MapContainer_C_OnMapPainterSwatchSelected_Params
	{
	public:
		int32_t                                                    ColorIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_33VM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.OnColorSelected
	 */
	struct UWidget_MapContainer_C_OnColorSelected_Params
	{
	public:
		TArray<struct FLinearColor>                                Color;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.OnImageSelected
	 */
	struct UWidget_MapContainer_C_OnImageSelected_Params
	{
	public:
		class UObject*                                             Object;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ImageID;                                                 // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.OpenColorPicker
	 */
	struct UWidget_MapContainer_C_OpenColorPicker_Params
	{
	public:
		struct FLinearColor                                        CurrentColor;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget_MapObject_C*                                 MapObject;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.OpenImageBrowser
	 */
	struct UWidget_MapContainer_C_OpenImageBrowser_Params
	{
	public:
		int32_t                                                    CurrentIconID;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SRAM[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_MapObject_C*                                 MapObject;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.ClosePopup
	 */
	struct UWidget_MapContainer_C_ClosePopup_Params
	{	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.AddPopupWidget
	 */
	struct UWidget_MapContainer_C_AddPopupWidget_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.OnNewMarkerMode
	 */
	struct UWidget_MapContainer_C_OnNewMarkerMode_Params
	{	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.OnPlaceMarker
	 */
	struct UWidget_MapContainer_C_OnPlaceMarker_Params
	{
	public:
		struct FVector2D                                           Location;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.ExitMarkerMode
	 */
	struct UWidget_MapContainer_C_ExitMarkerMode_Params
	{	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.OnStampSelected
	 */
	struct UWidget_MapContainer_C_OnStampSelected_Params
	{
	public:
		int32_t                                                    IconID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_149X[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.OnAttentionPingPressed
	 */
	struct UWidget_MapContainer_C_OnAttentionPingPressed_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.SetFiltersCollapsed
	 */
	struct UWidget_MapContainer_C_SetFiltersCollapsed_Params
	{
	public:
		bool                                                       isCollapsed;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.UglyFixForActorName
	 */
	struct UWidget_MapContainer_C_UglyFixForActorName_Params
	{
	public:
		ERepresentationType                                        actorRepresentation;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0M8E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                ReturnValue;                                             // 0x0008(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.UpdateMapObjectVisibility
	 */
	struct UWidget_MapContainer_C_UpdateMapObjectVisibility_Params
	{
	public:
		ERepresentationType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.GetCompassRepresentation
	 */
	struct UWidget_MapContainer_C_GetCompassRepresentation_Params
	{
	public:
		ERepresentationType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AJPN[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.GetMapRepresentation
	 */
	struct UWidget_MapContainer_C_GetMapRepresentation_Params
	{
	public:
		ERepresentationType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NQ1H[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.SetCompassRepresentation
	 */
	struct UWidget_MapContainer_C_SetCompassRepresentation_Params
	{
	public:
		ERepresentationType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Visible;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_S164[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.SetMapRepresentation
	 */
	struct UWidget_MapContainer_C_SetMapRepresentation_Params
	{
	public:
		ERepresentationType                                        Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Visible;                                                 // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NG3A[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.GetIndexInParent
	 */
	struct UWidget_MapContainer_C_GetIndexInParent_Params
	{
	public:
		class UWidget*                                             Widget;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0TTB[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.NormalizedValueToZoomValue
	 */
	struct UWidget_MapContainer_C_NormalizedValueToZoomValue_Params
	{
	public:
		double                                                     NormalizedValue;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           ZoomValue;                                               // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.UpdateZoomSlider
	 */
	struct UWidget_MapContainer_C_UpdateZoomSlider_Params
	{	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.SetOpenMap
	 */
	struct UWidget_MapContainer_C_SetOpenMap_Params
	{
	public:
		bool                                                       OpenMap;                                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.CloseMap
	 */
	struct UWidget_MapContainer_C_CloseMap_Params
	{	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.OnEscapePressed
	 */
	struct UWidget_MapContainer_C_OnEscapePressed_Params
	{	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.Destruct
	 */
	struct UWidget_MapContainer_C_Destruct_Params
	{	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__mZoomSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UWidget_MapContainer_C_BndEvt__mZoomSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_Map_K2Node_ComponentBoundEvent_1_OnObjectAddedToMapDispatch__DelegateSignature
	 */
	struct UWidget_MapContainer_C_BndEvt__Widget_Map_K2Node_ComponentBoundEvent_1_OnObjectAddedToMapDispatch__DelegateSignature_Params
	{
	public:
		class UFGActorRepresentation*                              actorRepresentation;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UWidget_MapObject_C*                                 WidgetMapObject;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_Map_K2Node_ComponentBoundEvent_2_OnObjectUpdatedOnMapDispatch__DelegateSignature
	 */
	struct UWidget_MapContainer_C_BndEvt__Widget_Map_K2Node_ComponentBoundEvent_2_OnObjectUpdatedOnMapDispatch__DelegateSignature_Params
	{
	public:
		class UFGActorRepresentation*                              actorRepresentation;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_Map_K2Node_ComponentBoundEvent_3_OnObjectRemovedFromMapDispatch__DelegateSignature
	 */
	struct UWidget_MapContainer_C_BndEvt__Widget_Map_K2Node_ComponentBoundEvent_3_OnObjectRemovedFromMapDispatch__DelegateSignature_Params
	{
	public:
		class UFGActorRepresentation*                              ActorRespresentation;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.ToggleShowFilters
	 */
	struct UWidget_MapContainer_C_ToggleShowFilters_Params
	{	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_4_OnStampSelected__DelegateSignature
	 */
	struct UWidget_MapContainer_C_BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_4_OnStampSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    IconID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_7_OnClearSelection__DelegateSignature
	 */
	struct UWidget_MapContainer_C_BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_7_OnClearSelection__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_8_OnNewMarkerSelected__DelegateSignature
	 */
	struct UWidget_MapContainer_C_BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_8_OnNewMarkerSelected__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_9_OnOpenColorPicker__DelegateSignature
	 */
	struct UWidget_MapContainer_C_BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_9_OnOpenColorPicker__DelegateSignature_Params
	{
	public:
		struct FLinearColor                                        CurrentColor;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget_MapObject_C*                                 MapObject;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_10_OnOpenImageBrowser__DelegateSignature
	 */
	struct UWidget_MapContainer_C_BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_10_OnOpenImageBrowser__DelegateSignature_Params
	{
	public:
		int32_t                                                    CurrentIconID;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VXM6[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_MapObject_C*                                 MapObject;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_11_OnObjectClicked__DelegateSignature
	 */
	struct UWidget_MapContainer_C_BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_11_OnObjectClicked__DelegateSignature_Params
	{
	public:
		class UWidget_MapObject_C*                                 MapObject;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_12_OnSwatchSelected__DelegateSignature
	 */
	struct UWidget_MapContainer_C_BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_12_OnSwatchSelected__DelegateSignature_Params
	{
	public:
		int32_t                                                    ColorIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_13_OnPainterBrushSizeChanged__DelegateSignature
	 */
	struct UWidget_MapContainer_C_BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_13_OnPainterBrushSizeChanged__DelegateSignature_Params
	{
	public:
		double                                                     Size;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_14_OnMarkerMarkedAsOpen__DelegateSignature
	 */
	struct UWidget_MapContainer_C_BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_14_OnMarkerMarkedAsOpen__DelegateSignature_Params
	{
	public:
		class UWidget_MapObject_C*                                 Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_15_OnPlaceMarker__DelegateSignature
	 */
	struct UWidget_MapContainer_C_BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_15_OnPlaceMarker__DelegateSignature_Params
	{
	public:
		struct FVector2D                                           Location;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_5_OnStampHovered__DelegateSignature
	 */
	struct UWidget_MapContainer_C_BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_5_OnStampHovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    IconID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_6_OnStampUnhovered__DelegateSignature
	 */
	struct UWidget_MapContainer_C_BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_6_OnStampUnhovered__DelegateSignature_Params
	{
	public:
		int32_t                                                    IconID;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.Construct
	 */
	struct UWidget_MapContainer_C_Construct_Params
	{	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_16_OnClearMarker__DelegateSignature
	 */
	struct UWidget_MapContainer_C_BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_16_OnClearMarker__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_17_OnCloseMarkerEditor__DelegateSignature
	 */
	struct UWidget_MapContainer_C_BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_17_OnCloseMarkerEditor__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_MapContainer.Widget_MapContainer_C.ExecuteUbergraph_Widget_MapContainer
	 */
	struct UWidget_MapContainer_C_ExecuteUbergraph_Widget_MapContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
