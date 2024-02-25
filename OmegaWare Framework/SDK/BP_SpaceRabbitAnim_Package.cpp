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
	 * 		Name   -> Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UBP_SpaceRabbitAnim_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.AnimGraph");
		
		UBP_SpaceRabbitAnim_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.SetWalkingBackward
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpaceRabbitAnim_C::SetWalkingBackward()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.SetWalkingBackward");
		
		UBP_SpaceRabbitAnim_C_SetWalkingBackward_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.SetFriend
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsFriend                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SpaceRabbitAnim_C::SetFriend(bool* IsFriend)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.SetFriend");
		
		UBP_SpaceRabbitAnim_C_SetFriend_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsFriend != nullptr)
			*IsFriend = params.IsFriend;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.CalculateAnimGraphValues
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpaceRabbitAnim_C::CalculateAnimGraphValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.CalculateAnimGraphValues");
		
		UBP_SpaceRabbitAnim_C_CalculateAnimGraphValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SpaceRabbitAnim_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.BlueprintUpdateAnimation");
		
		UBP_SpaceRabbitAnim_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.OnRadialDamageTaken
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_SpaceRabbitAnim_C::OnRadialDamageTaken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.OnRadialDamageTaken");
		
		UBP_SpaceRabbitAnim_C_OnRadialDamageTaken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.OnPointDamageTaken
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     shootDirection                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SpaceRabbitAnim_C::OnPointDamageTaken(const struct FVector& shootDirection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.OnPointDamageTaken");
		
		UBP_SpaceRabbitAnim_C_OnPointDamageTaken_Params params {};
		params.shootDirection = shootDirection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.BlueprintBeginPlay
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UBP_SpaceRabbitAnim_C::BlueprintBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.BlueprintBeginPlay");
		
		UBP_SpaceRabbitAnim_C_BlueprintBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.ExecuteUbergraph_BP_SpaceRabbitAnim
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_SpaceRabbitAnim_C::ExecuteUbergraph_BP_SpaceRabbitAnim(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C.ExecuteUbergraph_BP_SpaceRabbitAnim");
		
		UBP_SpaceRabbitAnim_C_ExecuteUbergraph_BP_SpaceRabbitAnim_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_SpaceRabbitAnim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_SpaceRabbitAnim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass BP_SpaceRabbitAnim.BP_SpaceRabbitAnim_C");
		return ptr;
	}

}


