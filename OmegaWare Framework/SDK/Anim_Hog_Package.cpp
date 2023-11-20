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
	 * 		Name   -> Function Anim_Hog.Anim_Hog_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAnim_Hog_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Hog.Anim_Hog_C.AnimGraph");
		
		UAnim_Hog_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Hog.Anim_Hog_C.StopIdleSFX
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_Hog_C::StopIdleSFX()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Hog.Anim_Hog_C.StopIdleSFX");
		
		UAnim_Hog_C_StopIdleSFX_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Hog.Anim_Hog_C.CalculateAnimGraphVariables
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_Hog_C::CalculateAnimGraphVariables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Hog.Anim_Hog_C.CalculateAnimGraphVariables");
		
		UAnim_Hog_C_CalculateAnimGraphVariables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Hog.Anim_Hog_C.OnPointDamageTaken
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     shootDirection                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_Hog_C::OnPointDamageTaken(const struct FVector& shootDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Hog.Anim_Hog_C.OnPointDamageTaken");
		
		UAnim_Hog_C_OnPointDamageTaken_Params params {};
		params.shootDirection = shootDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Hog.Anim_Hog_C.OnAnyDamageTaken
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_Hog_C::OnAnyDamageTaken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Hog.Anim_Hog_C.OnAnyDamageTaken");
		
		UAnim_Hog_C_OnAnyDamageTaken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Hog.Anim_Hog_C.OnRadialDamageTaken
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_Hog_C::OnRadialDamageTaken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Hog.Anim_Hog_C.OnRadialDamageTaken");
		
		UAnim_Hog_C_OnRadialDamageTaken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Hog.Anim_Hog_C.AnimNotify_Notify_Hog_LeftIdle
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_Hog_C::AnimNotify_Notify_Hog_LeftIdle()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Hog.Anim_Hog_C.AnimNotify_Notify_Hog_LeftIdle");
		
		UAnim_Hog_C_AnimNotify_Notify_Hog_LeftIdle_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Hog.Anim_Hog_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_Hog_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Hog.Anim_Hog_C.BlueprintUpdateAnimation");
		
		UAnim_Hog_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Hog.Anim_Hog_C.AnimNotify_Alpha_Hog_Roar
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_Hog_C::AnimNotify_Alpha_Hog_Roar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Hog.Anim_Hog_C.AnimNotify_Alpha_Hog_Roar");
		
		UAnim_Hog_C_AnimNotify_Alpha_Hog_Roar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_Hog.Anim_Hog_C.ExecuteUbergraph_Anim_Hog
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_Hog_C::ExecuteUbergraph_Anim_Hog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_Hog.Anim_Hog_C.ExecuteUbergraph_Anim_Hog");
		
		UAnim_Hog_C_ExecuteUbergraph_Anim_Hog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnim_Hog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnim_Hog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_Hog.Anim_Hog_C");
		return ptr;
	}

}


