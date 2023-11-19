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
	 * 		Name   -> Function BPW_PhotoAnalyser_Indicator.BPW_PhotoAnalyser_Indicator_C.SetActor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      mActor                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoAnalyser_Indicator_C::SetActor(class AActor* mActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser_Indicator.BPW_PhotoAnalyser_Indicator_C.SetActor");
		
		UBPW_PhotoAnalyser_Indicator_C_SetActor_Params params {};
		params.mActor = mActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser_Indicator.BPW_PhotoAnalyser_Indicator_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_PhotoAnalyser_Indicator_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser_Indicator.BPW_PhotoAnalyser_Indicator_C.Construct");
		
		UBPW_PhotoAnalyser_Indicator_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser_Indicator.BPW_PhotoAnalyser_Indicator_C.OnAnimationFin
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_PhotoAnalyser_Indicator_C::OnAnimationFin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser_Indicator.BPW_PhotoAnalyser_Indicator_C.OnAnimationFin");
		
		UBPW_PhotoAnalyser_Indicator_C_OnAnimationFin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser_Indicator.BPW_PhotoAnalyser_Indicator_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_PhotoAnalyser_Indicator_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser_Indicator.BPW_PhotoAnalyser_Indicator_C.Destruct");
		
		UBPW_PhotoAnalyser_Indicator_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser_Indicator.BPW_PhotoAnalyser_Indicator_C.Tick
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoAnalyser_Indicator_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser_Indicator.BPW_PhotoAnalyser_Indicator_C.Tick");
		
		UBPW_PhotoAnalyser_Indicator_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_PhotoAnalyser_Indicator.BPW_PhotoAnalyser_Indicator_C.ExecuteUbergraph_BPW_PhotoAnalyser_Indicator
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_PhotoAnalyser_Indicator_C::ExecuteUbergraph_BPW_PhotoAnalyser_Indicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_PhotoAnalyser_Indicator.BPW_PhotoAnalyser_Indicator_C.ExecuteUbergraph_BPW_PhotoAnalyser_Indicator");
		
		UBPW_PhotoAnalyser_Indicator_C_ExecuteUbergraph_BPW_PhotoAnalyser_Indicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_PhotoAnalyser_Indicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_PhotoAnalyser_Indicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_PhotoAnalyser_Indicator.BPW_PhotoAnalyser_Indicator_C");
		return ptr;
	}

}


