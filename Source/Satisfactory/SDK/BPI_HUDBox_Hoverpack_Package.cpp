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
	 * 		Name   -> Function BPI_HUDBox_Hoverpack.BPI_HUDBox_Hoverpack_C.GetRangeWarningNrmlzdDistThreshold
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             RangeWarningNormalizedDistanceThreshold                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_HUDBox_Hoverpack_C::GetRangeWarningNrmlzdDistThreshold(double* RangeWarningNormalizedDistanceThreshold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_HUDBox_Hoverpack.BPI_HUDBox_Hoverpack_C.GetRangeWarningNrmlzdDistThreshold");
		
		UBPI_HUDBox_Hoverpack_C_GetRangeWarningNrmlzdDistThreshold_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RangeWarningNormalizedDistanceThreshold != nullptr)
			*RangeWarningNormalizedDistanceThreshold = params.RangeWarningNormalizedDistanceThreshold;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPI_HUDBox_Hoverpack.BPI_HUDBox_Hoverpack_C.IsHoverpackHovering
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsHovering                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_HUDBox_Hoverpack_C::IsHoverpackHovering(bool* IsHovering)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_HUDBox_Hoverpack.BPI_HUDBox_Hoverpack_C.IsHoverpackHovering");
		
		UBPI_HUDBox_Hoverpack_C_IsHoverpackHovering_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsHovering != nullptr)
			*IsHovering = params.IsHovering;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPI_HUDBox_Hoverpack.BPI_HUDBox_Hoverpack_C.GetHoverpackStates
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EHoverPackMode                                     HoverpackState                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_HUDBox_Hoverpack_C::GetHoverpackStates(EHoverPackMode* HoverpackState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_HUDBox_Hoverpack.BPI_HUDBox_Hoverpack_C.GetHoverpackStates");
		
		UBPI_HUDBox_Hoverpack_C_GetHoverpackStates_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (HoverpackState != nullptr)
			*HoverpackState = params.HoverpackState;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPI_HUDBox_Hoverpack.BPI_HUDBox_Hoverpack_C.GetConnectionDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             ConnectionDistance                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_HUDBox_Hoverpack_C::GetConnectionDistance(double* ConnectionDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_HUDBox_Hoverpack.BPI_HUDBox_Hoverpack_C.GetConnectionDistance");
		
		UBPI_HUDBox_Hoverpack_C_GetConnectionDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConnectionDistance != nullptr)
			*ConnectionDistance = params.ConnectionDistance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPI_HUDBox_Hoverpack.BPI_HUDBox_Hoverpack_C.GetCurrentNormalisedConnectionDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             NormalisedConnectionDistance                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_HUDBox_Hoverpack_C::GetCurrentNormalisedConnectionDistance(double* NormalisedConnectionDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_HUDBox_Hoverpack.BPI_HUDBox_Hoverpack_C.GetCurrentNormalisedConnectionDistance");
		
		UBPI_HUDBox_Hoverpack_C_GetCurrentNormalisedConnectionDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NormalisedConnectionDistance != nullptr)
			*NormalisedConnectionDistance = params.NormalisedConnectionDistance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPI_HUDBox_Hoverpack.BPI_HUDBox_Hoverpack_C.GetPowerConnectionBool
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsConnected                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_HUDBox_Hoverpack_C::GetPowerConnectionBool(bool* IsConnected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_HUDBox_Hoverpack.BPI_HUDBox_Hoverpack_C.GetPowerConnectionBool");
		
		UBPI_HUDBox_Hoverpack_C_GetPowerConnectionBool_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsConnected != nullptr)
			*IsConnected = params.IsConnected;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPI_HUDBox_Hoverpack.BPI_HUDBox_Hoverpack_C.GetMaxConnectionDistance
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             ConnectionMaxDistance                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_HUDBox_Hoverpack_C::GetMaxConnectionDistance(double* ConnectionMaxDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_HUDBox_Hoverpack.BPI_HUDBox_Hoverpack_C.GetMaxConnectionDistance");
		
		UBPI_HUDBox_Hoverpack_C_GetMaxConnectionDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConnectionMaxDistance != nullptr)
			*ConnectionMaxDistance = params.ConnectionMaxDistance;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_HUDBox_Hoverpack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_HUDBox_Hoverpack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_HUDBox_Hoverpack.BPI_HUDBox_Hoverpack_C");
		return ptr;
	}

}


