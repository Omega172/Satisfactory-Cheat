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
	 * 		Name   -> Function Widget_FicsitLogoSplash.Widget_FicsitLogoSplash_C.ShowLogo
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_FicsitLogoSplash_C::ShowLogo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FicsitLogoSplash.Widget_FicsitLogoSplash_C.ShowLogo");
		
		UWidget_FicsitLogoSplash_C_ShowLogo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_FicsitLogoSplash.Widget_FicsitLogoSplash_C.ExecuteUbergraph_Widget_FicsitLogoSplash
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_FicsitLogoSplash_C::ExecuteUbergraph_Widget_FicsitLogoSplash(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_FicsitLogoSplash.Widget_FicsitLogoSplash_C.ExecuteUbergraph_Widget_FicsitLogoSplash");
		
		UWidget_FicsitLogoSplash_C_ExecuteUbergraph_Widget_FicsitLogoSplash_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_FicsitLogoSplash_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_FicsitLogoSplash_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_FicsitLogoSplash.Widget_FicsitLogoSplash_C");
		return ptr;
	}

}


