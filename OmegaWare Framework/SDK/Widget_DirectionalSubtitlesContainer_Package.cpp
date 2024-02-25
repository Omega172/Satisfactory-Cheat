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
	 * 		Name   -> Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.StopSubtitle
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Instigator                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DirectionalSubtitlesContainer_C::StopSubtitle(class AActor* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.StopSubtitle");
		
		UWidget_DirectionalSubtitlesContainer_C_StopSubtitle_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.GetFurthestActor
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DirectionalSubtitlesContainer_C::GetFurthestActor(class AActor** Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.GetFurthestActor");
		
		UWidget_DirectionalSubtitlesContainer_C_GetFurthestActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Actor != nullptr)
			*Actor = params.Actor;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.OnSubtitleDestruct
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UWidget_DirectionalSubtitles_C*              InstigatingSubtitle                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DirectionalSubtitlesContainer_C::OnSubtitleDestruct(class UWidget_DirectionalSubtitles_C* InstigatingSubtitle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.OnSubtitleDestruct");
		
		UWidget_DirectionalSubtitlesContainer_C_OnSubtitleDestruct_Params params {};
		params.InstigatingSubtitle = InstigatingSubtitle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.CreateSubtitle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Subtitle                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class AActor*                                      Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               UseDuration                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWidget_DirectionalSubtitlesContainer_C::CreateSubtitle(const class FText& Subtitle, class AActor* Instigator, double Duration, bool UseDuration)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C.CreateSubtitle");
		
		UWidget_DirectionalSubtitlesContainer_C_CreateSubtitle_Params params {};
		params.Subtitle = Subtitle;
		params.Instigator = Instigator;
		params.Duration = Duration;
		params.UseDuration = UseDuration;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWidget_DirectionalSubtitlesContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWidget_DirectionalSubtitlesContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass Widget_DirectionalSubtitlesContainer.Widget_DirectionalSubtitlesContainer_C");
		return ptr;
	}

}


