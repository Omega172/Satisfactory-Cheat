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
	 * 		Name   -> Function Widget_PlayerInteraction.Widget_PlayerInteraction_C.SetText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UWidget_PlayerInteraction_C::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInteraction.Widget_PlayerInteraction_C.SetText");
		
		UWidget_PlayerInteraction_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayerInteraction.Widget_PlayerInteraction_C.SetOverwriteInteractionText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               ShouldOverwriteText                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayerInteraction_C::SetOverwriteInteractionText(const class FText& Text, bool ShouldOverwriteText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInteraction.Widget_PlayerInteraction_C.SetOverwriteInteractionText");
		
		UWidget_PlayerInteraction_C_SetOverwriteInteractionText_Params params {};
		params.Text = Text;
		params.ShouldOverwriteText = ShouldOverwriteText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayerInteraction.Widget_PlayerInteraction_C.SetTextAndVisibility
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class URichTextBlock*                              TextObject                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayerInteraction_C::SetTextAndVisibility(class URichTextBlock* TextObject, const class FString& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInteraction.Widget_PlayerInteraction_C.SetTextAndVisibility");
		
		UWidget_PlayerInteraction_C_SetTextAndVisibility_Params params {};
		params.TextObject = TextObject;
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayerInteraction.Widget_PlayerInteraction_C.ParseText
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class FString                                      Left                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Key                                                        (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Right                                                      (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayerInteraction_C::ParseText(const class FText& InText, class FString* Left, class FString* Key, class FString* Right)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInteraction.Widget_PlayerInteraction_C.ParseText");
		
		UWidget_PlayerInteraction_C_ParseText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Left != nullptr)
			*Left = params.Left;
		if (Key != nullptr)
			*Key = params.Key;
		if (Right != nullptr)
			*Right = params.Right;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayerInteraction.Widget_PlayerInteraction_C.SetInteractionTextFromUsabeActor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PlayerInteraction_C::SetInteractionTextFromUsabeActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInteraction.Widget_PlayerInteraction_C.SetInteractionTextFromUsabeActor");
		
		UWidget_PlayerInteraction_C_SetInteractionTextFromUsabeActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayerInteraction.Widget_PlayerInteraction_C.OnUpdateText
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_PlayerInteraction_C::OnUpdateText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInteraction.Widget_PlayerInteraction_C.OnUpdateText");
		
		UWidget_PlayerInteraction_C_OnUpdateText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_PlayerInteraction.Widget_PlayerInteraction_C.ExecuteUbergraph_Widget_PlayerInteraction
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_PlayerInteraction_C::ExecuteUbergraph_Widget_PlayerInteraction(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_PlayerInteraction.Widget_PlayerInteraction_C.ExecuteUbergraph_Widget_PlayerInteraction");
		
		UWidget_PlayerInteraction_C_ExecuteUbergraph_Widget_PlayerInteraction_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_PlayerInteraction_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_PlayerInteraction_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_PlayerInteraction.Widget_PlayerInteraction_C");
		return ptr;
	}

}


