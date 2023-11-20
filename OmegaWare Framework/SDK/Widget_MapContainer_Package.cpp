/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.SetOpenedMarker
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_MapObject_C*                         mOpenedMarker                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::SetOpenedMarker(class UWidget_MapObject_C* mOpenedMarker)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.SetOpenedMarker");
		
		UWidget_MapContainer_C_SetOpenedMarker_Params params {};
		params.mOpenedMarker = mOpenedMarker;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.OnMapPainterSwatchSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ColorIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::OnMapPainterSwatchSelected(int32_t ColorIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.OnMapPainterSwatchSelected");
		
		UWidget_MapContainer_C_OnMapPainterSwatchSelected_Params params {};
		params.ColorIndex = ColorIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.OnColorSelected
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FLinearColor>                        Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_MapContainer_C::OnColorSelected(TArray<struct FLinearColor>* Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.OnColorSelected");
		
		UWidget_MapContainer_C_OnColorSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Color != nullptr)
			*Color = params.Color;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.OnImageSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ImageID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::OnImageSelected(class UObject* Object, int32_t ImageID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.OnImageSelected");
		
		UWidget_MapContainer_C_OnImageSelected_Params params {};
		params.Object = Object;
		params.ImageID = ImageID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.OpenColorPicker
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                CurrentColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget_MapObject_C*                         MapObject                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::OpenColorPicker(const struct FLinearColor& CurrentColor, class UWidget_MapObject_C* MapObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.OpenColorPicker");
		
		UWidget_MapContainer_C_OpenColorPicker_Params params {};
		params.CurrentColor = CurrentColor;
		params.MapObject = MapObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.OpenImageBrowser
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentIconID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget_MapObject_C*                         MapObject                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::OpenImageBrowser(int32_t CurrentIconID, class UWidget_MapObject_C* MapObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.OpenImageBrowser");
		
		UWidget_MapContainer_C_OpenImageBrowser_Params params {};
		params.CurrentIconID = CurrentIconID;
		params.MapObject = MapObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.ClosePopup
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MapContainer_C::ClosePopup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.ClosePopup");
		
		UWidget_MapContainer_C_ClosePopup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.AddPopupWidget
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::AddPopupWidget(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.AddPopupWidget");
		
		UWidget_MapContainer_C_AddPopupWidget_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.OnNewMarkerMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MapContainer_C::OnNewMarkerMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.OnNewMarkerMode");
		
		UWidget_MapContainer_C_OnNewMarkerMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.OnPlaceMarker
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::OnPlaceMarker(const struct FVector2D& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.OnPlaceMarker");
		
		UWidget_MapContainer_C_OnPlaceMarker_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.ExitMarkerMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MapContainer_C::ExitMarkerMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.ExitMarkerMode");
		
		UWidget_MapContainer_C_ExitMarkerMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.OnStampSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            IconID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::OnStampSelected(int32_t IconID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.OnStampSelected");
		
		UWidget_MapContainer_C_OnStampSelected_Params params {};
		params.IconID = IconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.OnAttentionPingPressed
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool UWidget_MapContainer_C::OnAttentionPingPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.OnAttentionPingPressed");
		
		UWidget_MapContainer_C_OnAttentionPingPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.SetFiltersCollapsed
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isCollapsed                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::SetFiltersCollapsed(bool isCollapsed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.SetFiltersCollapsed");
		
		UWidget_MapContainer_C_SetFiltersCollapsed_Params params {};
		params.isCollapsed = isCollapsed;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.UglyFixForActorName
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ERepresentationType                                actorRepresentation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	class FText UWidget_MapContainer_C::UglyFixForActorName(ERepresentationType actorRepresentation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.UglyFixForActorName");
		
		UWidget_MapContainer_C_UglyFixForActorName_Params params {};
		params.actorRepresentation = actorRepresentation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.UpdateMapObjectVisibility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ERepresentationType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::UpdateMapObjectVisibility(ERepresentationType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.UpdateMapObjectVisibility");
		
		UWidget_MapContainer_C_UpdateMapObjectVisibility_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.GetCompassRepresentation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ERepresentationType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWidget_MapContainer_C::GetCompassRepresentation(ERepresentationType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.GetCompassRepresentation");
		
		UWidget_MapContainer_C_GetCompassRepresentation_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.GetMapRepresentation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ERepresentationType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	bool UWidget_MapContainer_C::GetMapRepresentation(ERepresentationType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.GetMapRepresentation");
		
		UWidget_MapContainer_C_GetMapRepresentation_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.SetCompassRepresentation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ERepresentationType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::SetCompassRepresentation(ERepresentationType Type, bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.SetCompassRepresentation");
		
		UWidget_MapContainer_C_SetCompassRepresentation_Params params {};
		params.Type = Type;
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.SetMapRepresentation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		ERepresentationType                                Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Visible                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::SetMapRepresentation(ERepresentationType Type, bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.SetMapRepresentation");
		
		UWidget_MapContainer_C_SetMapRepresentation_Params params {};
		params.Type = Type;
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.GetIndexInParent
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	int32_t UWidget_MapContainer_C::GetIndexInParent(class UWidget* Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.GetIndexInParent");
		
		UWidget_MapContainer_C_GetIndexInParent_Params params {};
		params.Widget = Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.NormalizedValueToZoomValue
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		double                                             NormalizedValue                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector2D                                   ZoomValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::NormalizedValueToZoomValue(double NormalizedValue, struct FVector2D* ZoomValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.NormalizedValueToZoomValue");
		
		UWidget_MapContainer_C_NormalizedValueToZoomValue_Params params {};
		params.NormalizedValue = NormalizedValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ZoomValue != nullptr)
			*ZoomValue = params.ZoomValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.UpdateZoomSlider
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MapContainer_C::UpdateZoomSlider()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.UpdateZoomSlider");
		
		UWidget_MapContainer_C_UpdateZoomSlider_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.SetOpenMap
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               OpenMap                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::SetOpenMap(bool OpenMap)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.SetOpenMap");
		
		UWidget_MapContainer_C_SetOpenMap_Params params {};
		params.OpenMap = OpenMap;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.CloseMap
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MapContainer_C::CloseMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.CloseMap");
		
		UWidget_MapContainer_C_CloseMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.OnEscapePressed
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MapContainer_C::OnEscapePressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.OnEscapePressed");
		
		UWidget_MapContainer_C_OnEscapePressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_MapContainer_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.Destruct");
		
		UWidget_MapContainer_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__mZoomSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::BndEvt__mZoomSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__mZoomSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature");
		
		UWidget_MapContainer_C_BndEvt__mZoomSlider_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_Map_K2Node_ComponentBoundEvent_1_OnObjectAddedToMapDispatch__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UFGActorRepresentation*                      actorRepresentation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget_MapObject_C*                         WidgetMapObject                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::BndEvt__Widget_Map_K2Node_ComponentBoundEvent_1_OnObjectAddedToMapDispatch__DelegateSignature(class UFGActorRepresentation* actorRepresentation, class UWidget_MapObject_C* WidgetMapObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_Map_K2Node_ComponentBoundEvent_1_OnObjectAddedToMapDispatch__DelegateSignature");
		
		UWidget_MapContainer_C_BndEvt__Widget_Map_K2Node_ComponentBoundEvent_1_OnObjectAddedToMapDispatch__DelegateSignature_Params params {};
		params.actorRepresentation = actorRepresentation;
		params.WidgetMapObject = WidgetMapObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_Map_K2Node_ComponentBoundEvent_2_OnObjectUpdatedOnMapDispatch__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UFGActorRepresentation*                      actorRepresentation                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::BndEvt__Widget_Map_K2Node_ComponentBoundEvent_2_OnObjectUpdatedOnMapDispatch__DelegateSignature(class UFGActorRepresentation* actorRepresentation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_Map_K2Node_ComponentBoundEvent_2_OnObjectUpdatedOnMapDispatch__DelegateSignature");
		
		UWidget_MapContainer_C_BndEvt__Widget_Map_K2Node_ComponentBoundEvent_2_OnObjectUpdatedOnMapDispatch__DelegateSignature_Params params {};
		params.actorRepresentation = actorRepresentation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_Map_K2Node_ComponentBoundEvent_3_OnObjectRemovedFromMapDispatch__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UFGActorRepresentation*                      ActorRespresentation                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::BndEvt__Widget_Map_K2Node_ComponentBoundEvent_3_OnObjectRemovedFromMapDispatch__DelegateSignature(class UFGActorRepresentation* ActorRespresentation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_Map_K2Node_ComponentBoundEvent_3_OnObjectRemovedFromMapDispatch__DelegateSignature");
		
		UWidget_MapContainer_C_BndEvt__Widget_Map_K2Node_ComponentBoundEvent_3_OnObjectRemovedFromMapDispatch__DelegateSignature_Params params {};
		params.ActorRespresentation = ActorRespresentation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.ToggleShowFilters
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_MapContainer_C::ToggleShowFilters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.ToggleShowFilters");
		
		UWidget_MapContainer_C_ToggleShowFilters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_4_OnStampSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            IconID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_4_OnStampSelected__DelegateSignature(int32_t IconID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_4_OnStampSelected__DelegateSignature");
		
		UWidget_MapContainer_C_BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_4_OnStampSelected__DelegateSignature_Params params {};
		params.IconID = IconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_7_OnClearSelection__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_MapContainer_C::BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_7_OnClearSelection__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_7_OnClearSelection__DelegateSignature");
		
		UWidget_MapContainer_C_BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_7_OnClearSelection__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_8_OnNewMarkerSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_MapContainer_C::BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_8_OnNewMarkerSelected__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_8_OnNewMarkerSelected__DelegateSignature");
		
		UWidget_MapContainer_C_BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_8_OnNewMarkerSelected__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_9_OnOpenColorPicker__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                CurrentColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget_MapObject_C*                         MapObject                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_9_OnOpenColorPicker__DelegateSignature(const struct FLinearColor& CurrentColor, class UWidget_MapObject_C* MapObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_9_OnOpenColorPicker__DelegateSignature");
		
		UWidget_MapContainer_C_BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_9_OnOpenColorPicker__DelegateSignature_Params params {};
		params.CurrentColor = CurrentColor;
		params.MapObject = MapObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_10_OnOpenImageBrowser__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentIconID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget_MapObject_C*                         MapObject                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_10_OnOpenImageBrowser__DelegateSignature(int32_t CurrentIconID, class UWidget_MapObject_C* MapObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_10_OnOpenImageBrowser__DelegateSignature");
		
		UWidget_MapContainer_C_BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_10_OnOpenImageBrowser__DelegateSignature_Params params {};
		params.CurrentIconID = CurrentIconID;
		params.MapObject = MapObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_11_OnObjectClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_MapObject_C*                         MapObject                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_11_OnObjectClicked__DelegateSignature(class UWidget_MapObject_C* MapObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_11_OnObjectClicked__DelegateSignature");
		
		UWidget_MapContainer_C_BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_11_OnObjectClicked__DelegateSignature_Params params {};
		params.MapObject = MapObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_12_OnSwatchSelected__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            ColorIndex                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_12_OnSwatchSelected__DelegateSignature(int32_t ColorIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_12_OnSwatchSelected__DelegateSignature");
		
		UWidget_MapContainer_C_BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_12_OnSwatchSelected__DelegateSignature_Params params {};
		params.ColorIndex = ColorIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_13_OnPainterBrushSizeChanged__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		double                                             Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_13_OnPainterBrushSizeChanged__DelegateSignature(double Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_13_OnPainterBrushSizeChanged__DelegateSignature");
		
		UWidget_MapContainer_C_BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_13_OnPainterBrushSizeChanged__DelegateSignature_Params params {};
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_14_OnMarkerMarkedAsOpen__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_MapObject_C*                         Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_14_OnMarkerMarkedAsOpen__DelegateSignature(class UWidget_MapObject_C* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_14_OnMarkerMarkedAsOpen__DelegateSignature");
		
		UWidget_MapContainer_C_BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_14_OnMarkerMarkedAsOpen__DelegateSignature_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_15_OnPlaceMarker__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FVector2D                                   Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_15_OnPlaceMarker__DelegateSignature(const struct FVector2D& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_15_OnPlaceMarker__DelegateSignature");
		
		UWidget_MapContainer_C_BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_15_OnPlaceMarker__DelegateSignature_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_5_OnStampHovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            IconID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_5_OnStampHovered__DelegateSignature(int32_t IconID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_5_OnStampHovered__DelegateSignature");
		
		UWidget_MapContainer_C_BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_5_OnStampHovered__DelegateSignature_Params params {};
		params.IconID = IconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_6_OnStampUnhovered__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            IconID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_6_OnStampUnhovered__DelegateSignature(int32_t IconID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_6_OnStampUnhovered__DelegateSignature");
		
		UWidget_MapContainer_C_BndEvt__Widget_MapContainer_BPW_MarkerPicker_Map_K2Node_ComponentBoundEvent_6_OnStampUnhovered__DelegateSignature_Params params {};
		params.IconID = IconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UWidget_MapContainer_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.Construct");
		
		UWidget_MapContainer_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_16_OnClearMarker__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_MapContainer_C::BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_16_OnClearMarker__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_16_OnClearMarker__DelegateSignature");
		
		UWidget_MapContainer_C_BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_16_OnClearMarker__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_17_OnCloseMarkerEditor__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UWidget_MapContainer_C::BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_17_OnCloseMarkerEditor__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_17_OnCloseMarkerEditor__DelegateSignature");
		
		UWidget_MapContainer_C_BndEvt__Widget_MapContainer_Widget_Map_K2Node_ComponentBoundEvent_17_OnCloseMarkerEditor__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_MapContainer.Widget_MapContainer_C.ExecuteUbergraph_Widget_MapContainer
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_MapContainer_C::ExecuteUbergraph_Widget_MapContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_MapContainer.Widget_MapContainer_C.ExecuteUbergraph_Widget_MapContainer");
		
		UWidget_MapContainer_C_ExecuteUbergraph_Widget_MapContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_MapContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_MapContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_MapContainer.Widget_MapContainer_C");
		return ptr;
	}

}


