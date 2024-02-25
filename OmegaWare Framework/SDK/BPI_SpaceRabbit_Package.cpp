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
	 * 		Name   -> Function BPI_SpaceRabbit.BPI_SpaceRabbit_C.UpdateDisplayName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        NewName                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPI_SpaceRabbit_C::UpdateDisplayName(const class FText& NewName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SpaceRabbit.BPI_SpaceRabbit_C.UpdateDisplayName");
		
		UBPI_SpaceRabbit_C_UpdateDisplayName_Params params {};
		params.NewName = NewName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_SpaceRabbit.BPI_SpaceRabbit_C.GetDisplayName
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        DisplayName                                                (Parm, OutParm)
	 */
	void UBPI_SpaceRabbit_C::GetDisplayName(class FText* DisplayName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_SpaceRabbit.BPI_SpaceRabbit_C.GetDisplayName");
		
		UBPI_SpaceRabbit_C_GetDisplayName_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DisplayName != nullptr)
			*DisplayName = params.DisplayName;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_SpaceRabbit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_SpaceRabbit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_SpaceRabbit.BPI_SpaceRabbit_C");
		return ptr;
	}

}


