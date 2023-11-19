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
	 * 		Name   -> Function BPI_AvailabilityDependencyInterface.BPI_AvailabilityDependencyInterface_C.GetDependecyData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFAvailabilityDependencyData>        DependecyData                                              (Parm, OutParm)
	 */
	void UBPI_AvailabilityDependencyInterface_C::GetDependecyData(TArray<struct FFAvailabilityDependencyData>* DependecyData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_AvailabilityDependencyInterface.BPI_AvailabilityDependencyInterface_C.GetDependecyData");
		
		UBPI_AvailabilityDependencyInterface_C_GetDependecyData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DependecyData != nullptr)
			*DependecyData = params.DependecyData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_AvailabilityDependencyInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_AvailabilityDependencyInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_AvailabilityDependencyInterface.BPI_AvailabilityDependencyInterface_C");
		return ptr;
	}

}


