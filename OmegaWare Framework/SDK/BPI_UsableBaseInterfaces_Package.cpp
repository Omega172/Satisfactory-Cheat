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
	 * 		Name   -> Function BPI_UsableBaseInterfaces.BPI_UsableBaseInterfaces_C.GetInteractObject
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     interactObject                                             (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_UsableBaseInterfaces_C::GetInteractObject(class UObject** interactObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_UsableBaseInterfaces.BPI_UsableBaseInterfaces_C.GetInteractObject");
		
		UBPI_UsableBaseInterfaces_C_GetInteractObject_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (interactObject != nullptr)
			*interactObject = params.interactObject;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_UsableBaseInterfaces_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_UsableBaseInterfaces_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_UsableBaseInterfaces.BPI_UsableBaseInterfaces_C");
		return ptr;
	}

}


