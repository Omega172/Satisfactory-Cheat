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
	 * 		Name   -> Function BPW_Blueprint_DragAndDropRep.BPW_Blueprint_DragAndDropRep_C.SetSelectedAmount
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            mSelectedAmount                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Blueprint_DragAndDropRep_C::SetSelectedAmount(int32_t mSelectedAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Blueprint_DragAndDropRep.BPW_Blueprint_DragAndDropRep_C.SetSelectedAmount");
		
		UBPW_Blueprint_DragAndDropRep_C_SetSelectedAmount_Params params {};
		params.mSelectedAmount = mSelectedAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Blueprint_DragAndDropRep.BPW_Blueprint_DragAndDropRep_C.Init
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FBlueprintRecord                            mBlueprintRecord                                           (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Blueprint_DragAndDropRep_C::Init(const struct FBlueprintRecord& mBlueprintRecord)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Blueprint_DragAndDropRep.BPW_Blueprint_DragAndDropRep_C.Init");
		
		UBPW_Blueprint_DragAndDropRep_C_Init_Params params {};
		params.mBlueprintRecord = mBlueprintRecord;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Blueprint_DragAndDropRep.BPW_Blueprint_DragAndDropRep_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Blueprint_DragAndDropRep_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Blueprint_DragAndDropRep.BPW_Blueprint_DragAndDropRep_C.Construct");
		
		UBPW_Blueprint_DragAndDropRep_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Blueprint_DragAndDropRep.BPW_Blueprint_DragAndDropRep_C.ExecuteUbergraph_BPW_Blueprint_DragAndDropRep
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Blueprint_DragAndDropRep_C::ExecuteUbergraph_BPW_Blueprint_DragAndDropRep(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Blueprint_DragAndDropRep.BPW_Blueprint_DragAndDropRep_C.ExecuteUbergraph_BPW_Blueprint_DragAndDropRep");
		
		UBPW_Blueprint_DragAndDropRep_C_ExecuteUbergraph_BPW_Blueprint_DragAndDropRep_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Blueprint_DragAndDropRep_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Blueprint_DragAndDropRep_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Blueprint_DragAndDropRep.BPW_Blueprint_DragAndDropRep_C");
		return ptr;
	}

}


