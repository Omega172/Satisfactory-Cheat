/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.ScrollToOnMap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_MapMarkerHelpers_C::ScrollToOnMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.ScrollToOnMap");
		
		UBPI_MapMarkerHelpers_C_ScrollToOnMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.UnfocusOnMap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_MapMarkerHelpers_C::UnfocusOnMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.UnfocusOnMap");
		
		UBPI_MapMarkerHelpers_C_UnfocusOnMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.FocusOnMap
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_MapMarkerHelpers_C::FocusOnMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.FocusOnMap");
		
		UBPI_MapMarkerHelpers_C_FocusOnMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.OpenImageBrowser
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            CurrentIconID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_MapMarkerHelpers_C::OpenImageBrowser(int32_t CurrentIconID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.OpenImageBrowser");
		
		UBPI_MapMarkerHelpers_C_OpenImageBrowser_Params params {};
		params.CurrentIconID = CurrentIconID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.OpenColorPicker
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                CurrentColor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_MapMarkerHelpers_C::OpenColorPicker(const struct FLinearColor& CurrentColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.OpenColorPicker");
		
		UBPI_MapMarkerHelpers_C_OpenColorPicker_Params params {};
		params.CurrentColor = CurrentColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.SetOverwriteIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_MapMarkerHelpers_C::SetOverwriteIcon(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.SetOverwriteIcon");
		
		UBPI_MapMarkerHelpers_C_SetOverwriteIcon_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.GetMapMarker
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FMapMarker                                  MapMarker                                                  (Parm, OutParm)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_MapMarkerHelpers_C::GetMapMarker(struct FMapMarker* MapMarker, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.GetMapMarker");
		
		UBPI_MapMarkerHelpers_C_GetMapMarker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MapMarker != nullptr)
			*MapMarker = params.MapMarker;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.GetActorRepresentation
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGActorRepresentation*                      ActorRepresntation                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_MapMarkerHelpers_C::GetActorRepresentation(class UFGActorRepresentation** ActorRepresntation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C.GetActorRepresentation");
		
		UBPI_MapMarkerHelpers_C_GetActorRepresentation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ActorRepresntation != nullptr)
			*ActorRepresntation = params.ActorRepresntation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_MapMarkerHelpers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_MapMarkerHelpers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_MapMarkerHelpers.BPI_MapMarkerHelpers_C");
		return ptr;
	}

}


