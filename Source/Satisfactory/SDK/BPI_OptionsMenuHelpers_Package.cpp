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
	 * 		Name   -> Function BPI_OptionsMenuHelpers.BPI_OptionsMenuHelpers_C.GetOverwriteTooltip
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        ToolTip                                                    (Parm, OutParm)
	 */
	void UBPI_OptionsMenuHelpers_C::GetOverwriteTooltip(class FText* ToolTip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_OptionsMenuHelpers.BPI_OptionsMenuHelpers_C.GetOverwriteTooltip");
		
		UBPI_OptionsMenuHelpers_C_GetOverwriteTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ToolTip != nullptr)
			*ToolTip = params.ToolTip;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_OptionsMenuHelpers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_OptionsMenuHelpers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_OptionsMenuHelpers.BPI_OptionsMenuHelpers_C");
		return ptr;
	}

}


