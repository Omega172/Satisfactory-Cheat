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
	 * 		Name   -> Function BTS_MoveSpeedDistanceToTarget.BTS_MoveSpeedDistanceToTarget_C.GetLocationFromBBKey
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBlackboardKeySelector                      Key                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FVector UBTS_MoveSpeedDistanceToTarget_C::GetLocationFromBBKey(const struct FBlackboardKeySelector& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MoveSpeedDistanceToTarget.BTS_MoveSpeedDistanceToTarget_C.GetLocationFromBBKey");
		
		UBTS_MoveSpeedDistanceToTarget_C_GetLocationFromBBKey_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BTS_MoveSpeedDistanceToTarget.BTS_MoveSpeedDistanceToTarget_C.GetMovespeedForDistance
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             DistanceSqr                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMoveSpeed                                         MoveSpeed                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTS_MoveSpeedDistanceToTarget_C::GetMovespeedForDistance(double DistanceSqr, EMoveSpeed* MoveSpeed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MoveSpeedDistanceToTarget.BTS_MoveSpeedDistanceToTarget_C.GetMovespeedForDistance");
		
		UBTS_MoveSpeedDistanceToTarget_C_GetMovespeedForDistance_Params params {};
		params.DistanceSqr = DistanceSqr;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (MoveSpeed != nullptr)
			*MoveSpeed = params.MoveSpeed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BTS_MoveSpeedDistanceToTarget.BTS_MoveSpeedDistanceToTarget_C.UpdateTargetDistance
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBTS_MoveSpeedDistanceToTarget_C::UpdateTargetDistance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MoveSpeedDistanceToTarget.BTS_MoveSpeedDistanceToTarget_C.UpdateTargetDistance");
		
		UBTS_MoveSpeedDistanceToTarget_C_UpdateTargetDistance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BTS_MoveSpeedDistanceToTarget.BTS_MoveSpeedDistanceToTarget_C.ReceiveTick
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTS_MoveSpeedDistanceToTarget_C::ReceiveTick(class AActor* OwnerActor, float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MoveSpeedDistanceToTarget.BTS_MoveSpeedDistanceToTarget_C.ReceiveTick");
		
		UBTS_MoveSpeedDistanceToTarget_C_ReceiveTick_Params params {};
		params.OwnerActor = OwnerActor;
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BTS_MoveSpeedDistanceToTarget.BTS_MoveSpeedDistanceToTarget_C.ReceiveActivation
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      OwnerActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTS_MoveSpeedDistanceToTarget_C::ReceiveActivation(class AActor* OwnerActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MoveSpeedDistanceToTarget.BTS_MoveSpeedDistanceToTarget_C.ReceiveActivation");
		
		UBTS_MoveSpeedDistanceToTarget_C_ReceiveActivation_Params params {};
		params.OwnerActor = OwnerActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BTS_MoveSpeedDistanceToTarget.BTS_MoveSpeedDistanceToTarget_C.ExecuteUbergraph_BTS_MoveSpeedDistanceToTarget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTS_MoveSpeedDistanceToTarget_C::ExecuteUbergraph_BTS_MoveSpeedDistanceToTarget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTS_MoveSpeedDistanceToTarget.BTS_MoveSpeedDistanceToTarget_C.ExecuteUbergraph_BTS_MoveSpeedDistanceToTarget");
		
		UBTS_MoveSpeedDistanceToTarget_C_ExecuteUbergraph_BTS_MoveSpeedDistanceToTarget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTS_MoveSpeedDistanceToTarget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTS_MoveSpeedDistanceToTarget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTS_MoveSpeedDistanceToTarget.BTS_MoveSpeedDistanceToTarget_C");
		return ptr;
	}

}


