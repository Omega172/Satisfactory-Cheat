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
	 * 		Name   -> Function BPW_ShopItem_Feedback.BPW_ShopItem_Feedback_C.SetIcon
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShopItem_Feedback_C::SetIcon(class UObject* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShopItem_Feedback.BPW_ShopItem_Feedback_C.SetIcon");
		
		UBPW_ShopItem_Feedback_C_SetIcon_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShopItem_Feedback.BPW_ShopItem_Feedback_C.SetText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_ShopItem_Feedback_C::SetText(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShopItem_Feedback.BPW_ShopItem_Feedback_C.SetText");
		
		UBPW_ShopItem_Feedback_C_SetText_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShopItem_Feedback.BPW_ShopItem_Feedback_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShopItem_Feedback_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShopItem_Feedback.BPW_ShopItem_Feedback_C.PreConstruct");
		
		UBPW_ShopItem_Feedback_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShopItem_Feedback.BPW_ShopItem_Feedback_C.Play Feedback Animation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ShopItem_Feedback_C::PlayFeedbackAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShopItem_Feedback.BPW_ShopItem_Feedback_C.Play Feedback Animation");
		
		UBPW_ShopItem_Feedback_C_PlayFeedbackAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShopItem_Feedback.BPW_ShopItem_Feedback_C.Collapse Feedback Widget
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ShopItem_Feedback_C::CollapseFeedbackWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShopItem_Feedback.BPW_ShopItem_Feedback_C.Collapse Feedback Widget");
		
		UBPW_ShopItem_Feedback_C_CollapseFeedbackWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ShopItem_Feedback.BPW_ShopItem_Feedback_C.ExecuteUbergraph_BPW_ShopItem_Feedback
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ShopItem_Feedback_C::ExecuteUbergraph_BPW_ShopItem_Feedback(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ShopItem_Feedback.BPW_ShopItem_Feedback_C.ExecuteUbergraph_BPW_ShopItem_Feedback");
		
		UBPW_ShopItem_Feedback_C_ExecuteUbergraph_BPW_ShopItem_Feedback_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_ShopItem_Feedback_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ShopItem_Feedback_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ShopItem_Feedback.BPW_ShopItem_Feedback_C");
		return ptr;
	}

}


