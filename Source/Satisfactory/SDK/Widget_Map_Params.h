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
	 * Function Widget_Map.Widget_Map_C.RemoveMappingContext
	 */
	struct UWidget_Map_C_RemoveMappingContext_Params
	{	};

	/**
	 * Function Widget_Map.Widget_Map_C.AddMappingContext
	 */
	struct UWidget_Map_C_AddMappingContext_Params
	{	};

	/**
	 * Function Widget_Map.Widget_Map_C.SetMapMode
	 */
	struct UWidget_Map_C_SetMapMode_Params
	{
	public:
		EMapModes                                                  mMapMode;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.ScrollToWorldPosition
	 */
	struct UWidget_Map_C_ScrollToWorldPosition_Params
	{
	public:
		struct FVector                                             WorldLocation;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnMouseMove
	 */
	struct UWidget_Map_C_OnMouseMove_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.LerpScroll
	 */
	struct UWidget_Map_C_LerpScroll_Params
	{	};

	/**
	 * Function Widget_Map.Widget_Map_C.StartLerpScroll
	 */
	struct UWidget_Map_C_StartLerpScroll_Params
	{
	public:
		struct FVector2D                                           NormalizedDestination;                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.ScrollToMapObjectLocation
	 */
	struct UWidget_Map_C_ScrollToMapObjectLocation_Params
	{
	public:
		struct FVector2D                                           Location;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.MarkMarkerAsOpen
	 */
	struct UWidget_Map_C_MarkMarkerAsOpen_Params
	{
	public:
		class UWidget_MapObject_C*                                 Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.SetMapAreaPainterBrushSize
	 */
	struct UWidget_Map_C_SetMapAreaPainterBrushSize_Params
	{
	public:
		double                                                     Size;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.SetMapAreaPainterColor
	 */
	struct UWidget_Map_C_SetMapAreaPainterColor_Params
	{
	public:
		int32_t                                                    ColorIndex;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnIconClicked
	 */
	struct UWidget_Map_C_OnIconClicked_Params
	{
	public:
		class UWidget_MapObject_C*                                 MapObject;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnImageBrowserOpen
	 */
	struct UWidget_Map_C_OnImageBrowserOpen_Params
	{
	public:
		int32_t                                                    CurrentIconID;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_7BQ1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_MapObject_C*                                 MapObject;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnColorPickerOpen
	 */
	struct UWidget_Map_C_OnColorPickerOpen_Params
	{
	public:
		struct FLinearColor                                        CurrentColor;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget_MapObject_C*                                 MapObject;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.GetNormalizedMousePositionOnMap
	 */
	struct UWidget_Map_C_GetNormalizedMousePositionOnMap_Params
	{
	public:
		struct FVector2D                                           Location;                                                // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.StopMapPaint
	 */
	struct UWidget_Map_C_StopMapPaint_Params
	{	};

	/**
	 * Function Widget_Map.Widget_Map_C.StartMapPaint
	 */
	struct UWidget_Map_C_StartMapPaint_Params
	{	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnAttentionPingPressed
	 */
	struct UWidget_Map_C_OnAttentionPingPressed_Params
	{	};

	/**
	 * Function Widget_Map.Widget_Map_C.GetZOrderForType
	 */
	struct UWidget_Map_C_GetZOrderForType_Params
	{
	public:
		ERepresentationType                                        representationType;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3FDF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.SetShowThisIndicatorViaActor
	 */
	struct UWidget_Map_C_SetShowThisIndicatorViaActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShowThisIndicator;                                       // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_99QU[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Map.Widget_Map_C.FilterOnActors
	 */
	struct UWidget_Map_C_FilterOnActors_Params
	{
	public:
		TArray<class AActor*>                                      Actors;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.SetHighilightViaActor
	 */
	struct UWidget_Map_C_SetHighilightViaActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       HighLight;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_JW79[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Map.Widget_Map_C.SetHighilightViaRepresentation
	 */
	struct UWidget_Map_C_SetHighilightViaRepresentation_Params
	{
	public:
		class UFGActorRepresentation*                              actorRepresentation;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       HighLight;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CTPC[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Map.Widget_Map_C.StartScrollMap
	 */
	struct UWidget_Map_C_StartScrollMap_Params
	{	};

	/**
	 * Function Widget_Map.Widget_Map_C.DiscardInput
	 */
	struct UWidget_Map_C_DiscardInput_Params
	{	};

	/**
	 * Function Widget_Map.Widget_Map_C.UpdateObjectOnMap
	 */
	struct UWidget_Map_C_UpdateObjectOnMap_Params
	{
	public:
		class UFGActorRepresentation*                              actorRepresentation;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.CenterMapOnNormalizedLocation
	 */
	struct UWidget_Map_C_CenterMapOnNormalizedLocation_Params
	{
	public:
		struct FVector2D                                           normalizedWorldLocation;                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnIconUnhover
	 */
	struct UWidget_Map_C_OnIconUnhover_Params
	{
	public:
		class UWidget_MapObject_C*                                 MapObject;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnIconHover
	 */
	struct UWidget_Map_C_OnIconHover_Params
	{
	public:
		class UWidget_MapObject_C*                                 MapObject;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.AddObjectToMap
	 */
	struct UWidget_Map_C_AddObjectToMap_Params
	{
	public:
		class UFGActorRepresentation*                              actorRepresentation;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       mAddedAfterMapOpened;                                    // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DXST[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_MapObject_C*                                 WidgetMapObject;                                         // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.RemoveObjectFromMap
	 */
	struct UWidget_Map_C_RemoveObjectFromMap_Params
	{
	public:
		class UFGActorRepresentation*                              ActorRepresentationToRemove;                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.ClearScrollMap
	 */
	struct UWidget_Map_C_ClearScrollMap_Params
	{	};

	/**
	 * Function Widget_Map.Widget_Map_C.ScrollMap
	 */
	struct UWidget_Map_C_ScrollMap_Params
	{
	public:
		struct FVector2D                                           MouseOrigin;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector2D                                           MapOrigin;                                               // 0x0010(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.ZoomMap
	 */
	struct UWidget_Map_C_ZoomMap_Params
	{
	public:
		struct FVector2D                                           ZoomValue;                                               // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnMouseWheel
	 */
	struct UWidget_Map_C_OnMouseWheel_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00B0(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.InpActEvt_IA_MapPrimary_K2Node_EnhancedInputActionEvent_6
	 */
	struct UWidget_Map_C_InpActEvt_IA_MapPrimary_K2Node_EnhancedInputActionEvent_6_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.InpActEvt_IA_MapPrimary_K2Node_EnhancedInputActionEvent_5
	 */
	struct UWidget_Map_C_InpActEvt_IA_MapPrimary_K2Node_EnhancedInputActionEvent_5_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.InpActEvt_IA_MapPrimary_K2Node_EnhancedInputActionEvent_4
	 */
	struct UWidget_Map_C_InpActEvt_IA_MapPrimary_K2Node_EnhancedInputActionEvent_4_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.InpActEvt_IA_MapSecondary_K2Node_EnhancedInputActionEvent_3
	 */
	struct UWidget_Map_C_InpActEvt_IA_MapSecondary_K2Node_EnhancedInputActionEvent_3_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.InpActEvt_IA_MapSecondary_K2Node_EnhancedInputActionEvent_2
	 */
	struct UWidget_Map_C_InpActEvt_IA_MapSecondary_K2Node_EnhancedInputActionEvent_2_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.InpActEvt_IA_MapSecondary_K2Node_EnhancedInputActionEvent_1
	 */
	struct UWidget_Map_C_InpActEvt_IA_MapSecondary_K2Node_EnhancedInputActionEvent_1_Params
	{
	public:
		struct FInputActionValue                                   ActionValue;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		float                                                      ElapsedTime;                                             // 0x0020(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      TriggeredTime;                                           // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UInputAction*                                        SourceAction;                                            // 0x0028(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnMouseLeave
	 */
	struct UWidget_Map_C_OnMouseLeave_Params
	{
	public:
		struct FPointerEvent                                       MouseEvent;                                              // 0x0000(0x0078)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.Construct
	 */
	struct UWidget_Map_C_Construct_Params
	{	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnFocusLost
	 */
	struct UWidget_Map_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.Tick
	 */
	struct UWidget_Map_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnObjectAddedToMap
	 */
	struct UWidget_Map_C_OnObjectAddedToMap_Params
	{
	public:
		class UFGActorRepresentation*                              actorRepresentation;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		bool                                                       addedAfterMapOpened;                                     // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnObjectRemovedFromMap
	 */
	struct UWidget_Map_C_OnObjectRemovedFromMap_Params
	{
	public:
		class UFGActorRepresentation*                              actorRepresentation;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.Destruct
	 */
	struct UWidget_Map_C_Destruct_Params
	{	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnObjectUpdatedOnMap
	 */
	struct UWidget_Map_C_OnObjectUpdatedOnMap_Params
	{
	public:
		class UFGActorRepresentation*                              actorRepresentation;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnMapCentered
	 */
	struct UWidget_Map_C_OnMapCentered_Params
	{
	public:
		struct FVector2D                                           normalizedWorldLocation;                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.BndEvt__Widget_Map_mMapCoordinates_K2Node_ComponentBoundEvent_0_OnGoToWorldPosition__DelegateSignature
	 */
	struct UWidget_Map_C_BndEvt__Widget_Map_mMapCoordinates_K2Node_ComponentBoundEvent_0_OnGoToWorldPosition__DelegateSignature_Params
	{
	public:
		struct FVector                                             WorldPosition;                                           // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.ExecuteUbergraph_Widget_Map
	 */
	struct UWidget_Map_C_ExecuteUbergraph_Widget_Map_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_79AZ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnCloseMarkerEditor__DelegateSignature
	 */
	struct UWidget_Map_C_OnCloseMarkerEditor__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnClearMarker__DelegateSignature
	 */
	struct UWidget_Map_C_OnClearMarker__DelegateSignature_Params
	{	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnMarkerMarkedAsOpen__DelegateSignature
	 */
	struct UWidget_Map_C_OnMarkerMarkedAsOpen__DelegateSignature_Params
	{
	public:
		class UWidget_MapObject_C*                                 Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnObjectClicked__DelegateSignature
	 */
	struct UWidget_Map_C_OnObjectClicked__DelegateSignature_Params
	{
	public:
		class UWidget_MapObject_C*                                 MapObject;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnOpenImageBrowser__DelegateSignature
	 */
	struct UWidget_Map_C_OnOpenImageBrowser__DelegateSignature_Params
	{
	public:
		int32_t                                                    CurrentIconID;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TL0G[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UWidget_MapObject_C*                                 MapObject;                                               // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnOpenColorPicker__DelegateSignature
	 */
	struct UWidget_Map_C_OnOpenColorPicker__DelegateSignature_Params
	{
	public:
		struct FLinearColor                                        CurrentColor;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget_MapObject_C*                                 MapObject;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnPlaceMarker__DelegateSignature
	 */
	struct UWidget_Map_C_OnPlaceMarker__DelegateSignature_Params
	{
	public:
		struct FVector2D                                           Location;                                                // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnObjectRemovedFromMapDispatch__DelegateSignature
	 */
	struct UWidget_Map_C_OnObjectRemovedFromMapDispatch__DelegateSignature_Params
	{
	public:
		class UFGActorRepresentation*                              ActorRespresentation;                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnObjectUpdatedOnMapDispatch__DelegateSignature
	 */
	struct UWidget_Map_C_OnObjectUpdatedOnMapDispatch__DelegateSignature_Params
	{
	public:
		class UFGActorRepresentation*                              actorRepresentation;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.OnObjectAddedToMapDispatch__DelegateSignature
	 */
	struct UWidget_Map_C_OnObjectAddedToMapDispatch__DelegateSignature_Params
	{
	public:
		class UFGActorRepresentation*                              actorRepresentation;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		class UWidget_MapObject_C*                                 WidgetMapObject;                                         // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Widget_Map.Widget_Map_C.ZoomChanged__DelegateSignature
	 */
	struct UWidget_Map_C_ZoomChanged__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
