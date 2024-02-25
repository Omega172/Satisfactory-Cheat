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
	 * 		Name   -> Function Widget_LetterSpacedLetter.Widget_LetterSpacedLetter_C.SetTextAndFont
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FSlateFontInfo                              Font                                                       (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UWidget_LetterSpacedLetter_C::SetTextAndFont(const class FText& Text, const struct FSlateFontInfo& Font)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LetterSpacedLetter.Widget_LetterSpacedLetter_C.SetTextAndFont");
		
		UWidget_LetterSpacedLetter_C_SetTextAndFont_Params params {};
		params.Text = Text;
		params.Font = Font;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LetterSpacedLetter.Widget_LetterSpacedLetter_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LetterSpacedLetter_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LetterSpacedLetter.Widget_LetterSpacedLetter_C.PreConstruct");
		
		UWidget_LetterSpacedLetter_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_LetterSpacedLetter.Widget_LetterSpacedLetter_C.ExecuteUbergraph_Widget_LetterSpacedLetter
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_LetterSpacedLetter_C::ExecuteUbergraph_Widget_LetterSpacedLetter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_LetterSpacedLetter.Widget_LetterSpacedLetter_C.ExecuteUbergraph_Widget_LetterSpacedLetter");
		
		UWidget_LetterSpacedLetter_C_ExecuteUbergraph_Widget_LetterSpacedLetter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_LetterSpacedLetter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_LetterSpacedLetter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_LetterSpacedLetter.Widget_LetterSpacedLetter_C");
		return ptr;
	}

}


