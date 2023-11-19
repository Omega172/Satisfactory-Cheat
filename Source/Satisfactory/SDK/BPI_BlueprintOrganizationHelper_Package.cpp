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
	 * 		Name   -> Function BPI_BlueprintOrganizationHelper.BPI_BlueprintOrganizationHelper_C.GetDescriptorObject
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_BlueprintOrganizationHelper_C::GetDescriptorObject(class UObject** Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_BlueprintOrganizationHelper.BPI_BlueprintOrganizationHelper_C.GetDescriptorObject");
		
		UBPI_BlueprintOrganizationHelper_C_GetDescriptorObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Object != nullptr)
			*Object = params.Object;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPI_BlueprintOrganizationHelper.BPI_BlueprintOrganizationHelper_C.EditMode
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               EditMode                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_BlueprintOrganizationHelper_C::EditMode(bool EditMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_BlueprintOrganizationHelper.BPI_BlueprintOrganizationHelper_C.EditMode");
		
		UBPI_BlueprintOrganizationHelper_C_EditMode_Params params {};
		params.EditMode = EditMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPI_BlueprintOrganizationHelper.BPI_BlueprintOrganizationHelper_C.ClearDragEvent
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_BlueprintOrganizationHelper_C::ClearDragEvent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_BlueprintOrganizationHelper.BPI_BlueprintOrganizationHelper_C.ClearDragEvent");
		
		UBPI_BlueprintOrganizationHelper_C_ClearDragEvent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPI_BlueprintOrganizationHelper.BPI_BlueprintOrganizationHelper_C.SetIsSelected
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsSelected                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_BlueprintOrganizationHelper_C::SetIsSelected(bool IsSelected)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_BlueprintOrganizationHelper.BPI_BlueprintOrganizationHelper_C.SetIsSelected");
		
		UBPI_BlueprintOrganizationHelper_C_SetIsSelected_Params params {};
		params.IsSelected = IsSelected;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_BlueprintOrganizationHelper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_BlueprintOrganizationHelper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_BlueprintOrganizationHelper.BPI_BlueprintOrganizationHelper_C");
		return ptr;
	}

}


