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
	 * 		Name   -> Function BPW_NumericEntry_Vector.BPW_NumericEntry_Vector_C.SetValuesFromVector
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FVector                                     newValues                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_NumericEntry_Vector_C::SetValuesFromVector(const struct FVector& newValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_NumericEntry_Vector.BPW_NumericEntry_Vector_C.SetValuesFromVector");
		
		UBPW_NumericEntry_Vector_C_SetValuesFromVector_Params params {};
		params.newValues = newValues;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_NumericEntry_Vector.BPW_NumericEntry_Vector_C.SetValuesFromRotator
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FRotator                                    newValues                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPW_NumericEntry_Vector_C::SetValuesFromRotator(const struct FRotator& newValues)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_NumericEntry_Vector.BPW_NumericEntry_Vector_C.SetValuesFromRotator");
		
		UBPW_NumericEntry_Vector_C_SetValuesFromRotator_Params params {};
		params.newValues = newValues;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_NumericEntry_Vector.BPW_NumericEntry_Vector_C.UpdateTextAndValues
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_NumericEntry_Vector_C::UpdateTextAndValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_NumericEntry_Vector.BPW_NumericEntry_Vector_C.UpdateTextAndValues");
		
		UBPW_NumericEntry_Vector_C_UpdateTextAndValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_NumericEntry_Vector.BPW_NumericEntry_Vector_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_NumericEntry_Vector_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_NumericEntry_Vector.BPW_NumericEntry_Vector_C.Construct");
		
		UBPW_NumericEntry_Vector_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_NumericEntry_Vector.BPW_NumericEntry_Vector_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_NumericEntry_Vector_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_NumericEntry_Vector.BPW_NumericEntry_Vector_C.PreConstruct");
		
		UBPW_NumericEntry_Vector_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_NumericEntry_Vector.BPW_NumericEntry_Vector_C.ExecuteUbergraph_BPW_NumericEntry_Vector
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_NumericEntry_Vector_C::ExecuteUbergraph_BPW_NumericEntry_Vector(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_NumericEntry_Vector.BPW_NumericEntry_Vector_C.ExecuteUbergraph_BPW_NumericEntry_Vector");
		
		UBPW_NumericEntry_Vector_C_ExecuteUbergraph_BPW_NumericEntry_Vector_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_NumericEntry_Vector_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_NumericEntry_Vector_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_NumericEntry_Vector.BPW_NumericEntry_Vector_C");
		return ptr;
	}

}


