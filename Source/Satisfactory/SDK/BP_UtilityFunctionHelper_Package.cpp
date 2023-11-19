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
	 * 		Name   -> Function BP_UtilityFunctionHelper.BP_UtilityFunctionHelper_C.SortCategoryRecipeStruct
	 * 		Flags  -> (Static, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FItemCategoryRecipeStruct>           ArrayToSort                                                (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UObject*                                     __WorldContext                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FItemCategoryRecipeStruct>           SortedArray                                                (Parm, OutParm)
	 */
	void UBP_UtilityFunctionHelper_C::STATIC_SortCategoryRecipeStruct(TArray<struct FItemCategoryRecipeStruct>* ArrayToSort, class UObject* __WorldContext, TArray<struct FItemCategoryRecipeStruct>* SortedArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UtilityFunctionHelper.BP_UtilityFunctionHelper_C.SortCategoryRecipeStruct");
		
		UBP_UtilityFunctionHelper_C_SortCategoryRecipeStruct_Params params {};
		params.__WorldContext = __WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ArrayToSort != nullptr)
			*ArrayToSort = params.ArrayToSort;
		if (SortedArray != nullptr)
			*SortedArray = params.SortedArray;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_UtilityFunctionHelper_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_UtilityFunctionHelper_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_UtilityFunctionHelper.BP_UtilityFunctionHelper_C");
		return ptr;
	}

}


