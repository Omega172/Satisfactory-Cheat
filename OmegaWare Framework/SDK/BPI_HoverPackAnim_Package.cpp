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
	 * 		Name   -> Function BPI_HoverPackAnim.BPI_HoverPackAnim_C.ToggleHovering
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               HoveringActive                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPI_HoverPackAnim_C::ToggleHovering(bool HoveringActive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_HoverPackAnim.BPI_HoverPackAnim_C.ToggleHovering");
		
		UBPI_HoverPackAnim_C_ToggleHovering_Params params {};
		params.HoveringActive = HoveringActive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_HoverPackAnim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_HoverPackAnim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_HoverPackAnim.BPI_HoverPackAnim_C");
		return ptr;
	}

}


