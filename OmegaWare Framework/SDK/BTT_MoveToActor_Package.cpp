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
	 * 		Name   -> Function BTT_MoveToActor.BTT_MoveToActor_C.OnFail_A86C15A64D326131272CCA93E74F5421
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_MoveToActor_C::OnFail_A86C15A64D326131272CCA93E74F5421(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_MoveToActor.BTT_MoveToActor_C.OnFail_A86C15A64D326131272CCA93E74F5421");
		
		UBTT_MoveToActor_C_OnFail_A86C15A64D326131272CCA93E74F5421_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BTT_MoveToActor.BTT_MoveToActor_C.OnSuccess_A86C15A64D326131272CCA93E74F5421
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_MoveToActor_C::OnSuccess_A86C15A64D326131272CCA93E74F5421(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_MoveToActor.BTT_MoveToActor_C.OnSuccess_A86C15A64D326131272CCA93E74F5421");
		
		UBTT_MoveToActor_C_OnSuccess_A86C15A64D326131272CCA93E74F5421_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BTT_MoveToActor.BTT_MoveToActor_C.OnFail_26979FE84DCE69E498AA0F9809F726F8
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_MoveToActor_C::OnFail_26979FE84DCE69E498AA0F9809F726F8(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_MoveToActor.BTT_MoveToActor_C.OnFail_26979FE84DCE69E498AA0F9809F726F8");
		
		UBTT_MoveToActor_C_OnFail_26979FE84DCE69E498AA0F9809F726F8_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BTT_MoveToActor.BTT_MoveToActor_C.OnSuccess_26979FE84DCE69E498AA0F9809F726F8
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		EPathFollowingResult                               MovementResult                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_MoveToActor_C::OnSuccess_26979FE84DCE69E498AA0F9809F726F8(EPathFollowingResult MovementResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_MoveToActor.BTT_MoveToActor_C.OnSuccess_26979FE84DCE69E498AA0F9809F726F8");
		
		UBTT_MoveToActor_C_OnSuccess_26979FE84DCE69E498AA0F9809F726F8_Params params {};
		params.MovementResult = MovementResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BTT_MoveToActor.BTT_MoveToActor_C.ReceiveExecuteAI
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		class AAIController*                               OwnerController                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class APawn*                                       ControlledPawn                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_MoveToActor_C::ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_MoveToActor.BTT_MoveToActor_C.ReceiveExecuteAI");
		
		UBTT_MoveToActor_C_ReceiveExecuteAI_Params params {};
		params.OwnerController = OwnerController;
		params.ControlledPawn = ControlledPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BTT_MoveToActor.BTT_MoveToActor_C.ExecuteUbergraph_BTT_MoveToActor
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBTT_MoveToActor_C::ExecuteUbergraph_BTT_MoveToActor(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BTT_MoveToActor.BTT_MoveToActor_C.ExecuteUbergraph_BTT_MoveToActor");
		
		UBTT_MoveToActor_C_ExecuteUbergraph_BTT_MoveToActor_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBTT_MoveToActor_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBTT_MoveToActor_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BTT_MoveToActor.BTT_MoveToActor_C");
		return ptr;
	}

}


