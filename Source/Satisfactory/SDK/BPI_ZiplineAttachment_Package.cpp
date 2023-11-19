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
	 * 		Name   -> Function BPI_ZiplineAttachment.BPI_ZiplineAttachment_C.OnZiplineSprintStatusChanged
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               sprint                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_ZiplineAttachment_C::OnZiplineSprintStatusChanged(bool sprint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ZiplineAttachment.BPI_ZiplineAttachment_C.OnZiplineSprintStatusChanged");
		
		UBPI_ZiplineAttachment_C_OnZiplineSprintStatusChanged_Params params {};
		params.sprint = sprint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPI_ZiplineAttachment.BPI_ZiplineAttachment_C.TryStartZiplineDeAttaching
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_ZiplineAttachment_C::TryStartZiplineDeAttaching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ZiplineAttachment.BPI_ZiplineAttachment_C.TryStartZiplineDeAttaching");
		
		UBPI_ZiplineAttachment_C_TryStartZiplineDeAttaching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPI_ZiplineAttachment.BPI_ZiplineAttachment_C.TryStartZiplineAttaching
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_ZiplineAttachment_C::TryStartZiplineAttaching()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_ZiplineAttachment.BPI_ZiplineAttachment_C.TryStartZiplineAttaching");
		
		UBPI_ZiplineAttachment_C_TryStartZiplineAttaching_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_ZiplineAttachment_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_ZiplineAttachment_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_ZiplineAttachment.BPI_ZiplineAttachment_C");
		return ptr;
	}

}


