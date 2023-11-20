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
	 * 		Name   -> Function Anim_3p.Anim_3p_C.AnimGraph
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UAnim_3p_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.AnimGraph");
		
		UAnim_3p_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.CalculateAnimGraphValues
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_3p_C::CalculateAnimGraphValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.CalculateAnimGraphValues");
		
		UAnim_3p_C_CalculateAnimGraphValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.IsEquipmentEquipped
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      EquipmentClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsEquiped                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_3p_C::IsEquipmentEquipped(class UClass* EquipmentClass, bool* IsEquiped)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.IsEquipmentEquipped");
		
		UAnim_3p_C_IsEquipmentEquipped_Params params {};
		params.EquipmentClass = EquipmentClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsEquiped != nullptr)
			*IsEquiped = params.IsEquiped;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.PlayScannerPPeffect
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_3p_C::PlayScannerPPeffect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.PlayScannerPPeffect");
		
		UAnim_3p_C_PlayScannerPPeffect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_38D119FE46D31282FE13C1A7CB081919
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_3p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_38D119FE46D31282FE13C1A7CB081919()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_38D119FE46D31282FE13C1A7CB081919");
		
		UAnim_3p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_38D119FE46D31282FE13C1A7CB081919_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_00AE2FB94C9703006AA8F498A49B0A22
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_3p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_00AE2FB94C9703006AA8F498A49B0A22()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_00AE2FB94C9703006AA8F498A49B0A22");
		
		UAnim_3p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_00AE2FB94C9703006AA8F498A49B0A22_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_86EE79CD4B6D2C1AE5543F99FE48EE3D
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_3p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_86EE79CD4B6D2C1AE5543F99FE48EE3D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_86EE79CD4B6D2C1AE5543F99FE48EE3D");
		
		UAnim_3p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_86EE79CD4B6D2C1AE5543F99FE48EE3D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_CBFB509E4A67C3C0C3E04AB06EE86052
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_3p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_CBFB509E4A67C3C0C3E04AB06EE86052()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_CBFB509E4A67C3C0C3E04AB06EE86052");
		
		UAnim_3p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_CBFB509E4A67C3C0C3E04AB06EE86052_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_7CDFAD574377195A1FF9CF93448DFF61
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_3p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_7CDFAD574377195A1FF9CF93448DFF61()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_7CDFAD574377195A1FF9CF93448DFF61");
		
		UAnim_3p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_7CDFAD574377195A1FF9CF93448DFF61_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_C2A872BE4A0DC91485D8A1A039CDDBA8
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_3p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_C2A872BE4A0DC91485D8A1A039CDDBA8()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_C2A872BE4A0DC91485D8A1A039CDDBA8");
		
		UAnim_3p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_C2A872BE4A0DC91485D8A1A039CDDBA8_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_5B87AE0E44C737FA1110EAA82B5B2B33
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_3p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_5B87AE0E44C737FA1110EAA82B5B2B33()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_5B87AE0E44C737FA1110EAA82B5B2B33");
		
		UAnim_3p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_5B87AE0E44C737FA1110EAA82B5B2B33_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_008706BF4BC93E885FD78D9139F03274
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_3p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_008706BF4BC93E885FD78D9139F03274()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_008706BF4BC93E885FD78D9139F03274");
		
		UAnim_3p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_008706BF4BC93E885FD78D9139F03274_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_1462BB8F4CE2FD9A6CAF4588B00B8488
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_3p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_1462BB8F4CE2FD9A6CAF4588B00B8488()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_1462BB8F4CE2FD9A6CAF4588B00B8488");
		
		UAnim_3p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_1462BB8F4CE2FD9A6CAF4588B00B8488_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_42761F764C532E08846EF2825FEBE92D
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_3p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_42761F764C532E08846EF2825FEBE92D()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_42761F764C532E08846EF2825FEBE92D");
		
		UAnim_3p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_42761F764C532E08846EF2825FEBE92D_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_ABD69A684A299AF8C81ECBBC6DC03C98
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_3p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_ABD69A684A299AF8C81ECBBC6DC03C98()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_ABD69A684A299AF8C81ECBBC6DC03C98");
		
		UAnim_3p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_ABD69A684A299AF8C81ECBBC6DC03C98_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_1B141C0A4A7401B8116C4EA0241B4F13
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_3p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_1B141C0A4A7401B8116C4EA0241B4F13()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_1B141C0A4A7401B8116C4EA0241B4F13");
		
		UAnim_3p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_1B141C0A4A7401B8116C4EA0241B4F13_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_C6C4DC804770CC2778EA00A87BF45BCC
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_3p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_C6C4DC804770CC2778EA00A87BF45BCC()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_C6C4DC804770CC2778EA00A87BF45BCC");
		
		UAnim_3p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_C6C4DC804770CC2778EA00A87BF45BCC_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_1BF762774BAF20AEC802E29F50D36257
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_3p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_1BF762774BAF20AEC802E29F50D36257()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_1BF762774BAF20AEC802E29F50D36257");
		
		UAnim_3p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_1BF762774BAF20AEC802E29F50D36257_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_2306D9CF4243F79DC30AA2AD301CB605
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UAnim_3p_C::EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_2306D9CF4243F79DC30AA2AD301CB605()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_2306D9CF4243F79DC30AA2AD301CB605");
		
		UAnim_3p_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Anim_3p_AnimGraphNode_TransitionResult_2306D9CF4243F79DC30AA2AD301CB605_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.BlueprintUpdateAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_3p_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.BlueprintUpdateAnimation");
		
		UAnim_3p_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.AnimNotify_EnteredIdleState
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_3p_C::AnimNotify_EnteredIdleState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.AnimNotify_EnteredIdleState");
		
		UAnim_3p_C_AnimNotify_EnteredIdleState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.AnimNotify_LeaveChangeDirection
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_3p_C::AnimNotify_LeaveChangeDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.AnimNotify_LeaveChangeDirection");
		
		UAnim_3p_C_AnimNotify_LeaveChangeDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.AnimNotify_EnterChangeDirection
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_3p_C::AnimNotify_EnterChangeDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.AnimNotify_EnterChangeDirection");
		
		UAnim_3p_C_AnimNotify_EnterChangeDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.AnimNotify_PickSound3P
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_3p_C::AnimNotify_PickSound3P()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.AnimNotify_PickSound3P");
		
		UAnim_3p_C_AnimNotify_PickSound3P_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.AnimNotify_PickSound_Sit_3P
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_3p_C::AnimNotify_PickSound_Sit_3P()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.AnimNotify_PickSound_Sit_3P");
		
		UAnim_3p_C_AnimNotify_PickSound_Sit_3P_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.AnimNotify_PickSound_Stand_3P
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_3p_C::AnimNotify_PickSound_Stand_3P()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.AnimNotify_PickSound_Stand_3P");
		
		UAnim_3p_C_AnimNotify_PickSound_Stand_3P_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.AnimNotify_NinjaNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_3p_C::AnimNotify_NinjaNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.AnimNotify_NinjaNotify");
		
		UAnim_3p_C_AnimNotify_NinjaNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.AnimNotify_SpawnCupNotify
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_3p_C::AnimNotify_SpawnCupNotify()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.AnimNotify_SpawnCupNotify");
		
		UAnim_3p_C_AnimNotify_SpawnCupNotify_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.BlueprintUninitializeAnimation
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void UAnim_3p_C::BlueprintUninitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.BlueprintUninitializeAnimation");
		
		UAnim_3p_C_BlueprintUninitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.SetScannerIK
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               SetScannerIK                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_3p_C::SetScannerIK(bool SetScannerIK)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.SetScannerIK");
		
		UAnim_3p_C_SetScannerIK_Params params {};
		params.SetScannerIK = SetScannerIK;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.AnimNotify_HideCurrentMagazine
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_3p_C::AnimNotify_HideCurrentMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.AnimNotify_HideCurrentMagazine");
		
		UAnim_3p_C_AnimNotify_HideCurrentMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.AnimNotify_ShowCurrentMagazine
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_3p_C::AnimNotify_ShowCurrentMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.AnimNotify_ShowCurrentMagazine");
		
		UAnim_3p_C_AnimNotify_ShowCurrentMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.AnimNotify_HideEjectMagazine
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_3p_C::AnimNotify_HideEjectMagazine()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.AnimNotify_HideEjectMagazine");
		
		UAnim_3p_C_AnimNotify_HideEjectMagazine_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.AnimNotify_PlayCurrentMagazineStingerAnim
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UAnim_3p_C::AnimNotify_PlayCurrentMagazineStingerAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.AnimNotify_PlayCurrentMagazineStingerAnim");
		
		UAnim_3p_C_AnimNotify_PlayCurrentMagazineStingerAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Anim_3p.Anim_3p_C.ExecuteUbergraph_Anim_3p
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UAnim_3p_C::ExecuteUbergraph_Anim_3p(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Anim_3p.Anim_3p_C.ExecuteUbergraph_Anim_3p");
		
		UAnim_3p_C_ExecuteUbergraph_Anim_3p_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnim_3p_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnim_3p_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass Anim_3p.Anim_3p_C");
		return ptr;
	}

}


