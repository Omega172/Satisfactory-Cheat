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
	 * 		Name   -> Function Widget_Subtitle.Widget_Subtitle_C.PlaySubtitleSpawnAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UWidget_Subtitle_C::PlaySubtitleSpawnAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Subtitle.Widget_Subtitle_C.PlaySubtitleSpawnAnimation");
		
		UWidget_Subtitle_C_PlaySubtitleSpawnAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Subtitle.Widget_Subtitle_C.SetSubtitleMessageText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        MessageText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UWidget_Subtitle_C::SetSubtitleMessageText(const class FText& MessageText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Subtitle.Widget_Subtitle_C.SetSubtitleMessageText");
		
		UWidget_Subtitle_C_SetSubtitleMessageText_Params params {};
		params.MessageText = MessageText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Subtitle.Widget_Subtitle_C.SetSubtitleSenderInfo
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        SenderName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        SenderEmail                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UTexture2D*                                  SenderImage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               AllCaps                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_Subtitle_C::SetSubtitleSenderInfo(const class FText& SenderName, const class FText& SenderEmail, class UTexture2D* SenderImage, bool AllCaps)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Subtitle.Widget_Subtitle_C.SetSubtitleSenderInfo");
		
		UWidget_Subtitle_C_SetSubtitleSenderInfo_Params params {};
		params.SenderName = SenderName;
		params.SenderEmail = SenderEmail;
		params.SenderImage = SenderImage;
		params.AllCaps = AllCaps;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Subtitle.Widget_Subtitle_C.GetLightGrayText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UWidget_Subtitle_C::GetLightGrayText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Subtitle.Widget_Subtitle_C.GetLightGrayText");
		
		UWidget_Subtitle_C_GetLightGrayText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Widget_Subtitle.Widget_Subtitle_C.GetOrangeText
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 */
	struct FSlateColor UWidget_Subtitle_C::GetOrangeText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_Subtitle.Widget_Subtitle_C.GetOrangeText");
		
		UWidget_Subtitle_C_GetOrangeText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_Subtitle_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_Subtitle_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_Subtitle.Widget_Subtitle_C");
		return ptr;
	}

}


