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
	 * 		Name   -> Function BPI_MagazineAnimationInterface.BPI_MagazineAnimationInterface_C.OnMagazineHidden
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_MagazineAnimationInterface_C::OnMagazineHidden()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MagazineAnimationInterface.BPI_MagazineAnimationInterface_C.OnMagazineHidden");
		
		UBPI_MagazineAnimationInterface_C_OnMagazineHidden_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_MagazineAnimationInterface.BPI_MagazineAnimationInterface_C.PlayStingerAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_MagazineAnimationInterface_C::PlayStingerAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_MagazineAnimationInterface.BPI_MagazineAnimationInterface_C.PlayStingerAnimation");
		
		UBPI_MagazineAnimationInterface_C_PlayStingerAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_MagazineAnimationInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_MagazineAnimationInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_MagazineAnimationInterface.BPI_MagazineAnimationInterface_C");
		return ptr;
	}

}


