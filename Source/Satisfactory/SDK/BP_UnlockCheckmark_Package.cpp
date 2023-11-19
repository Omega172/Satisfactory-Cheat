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
	 * 		Name   -> Function BP_UnlockCheckmark.BP_UnlockCheckmark_C.GetStingerWidgetRewardData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	void UBP_UnlockCheckmark_C::GetStingerWidgetRewardData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UnlockCheckmark.BP_UnlockCheckmark_C.GetStingerWidgetRewardData");
		
		UBP_UnlockCheckmark_C_GetStingerWidgetRewardData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_UnlockCheckmark.BP_UnlockCheckmark_C.GetUnlockRewardWidgets
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           OwningPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      SchematicClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UUserWidget*                                 TradingPostWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UUserWidget*>                         Widgets                                                    (Parm, OutParm, ContainsInstancedReference)
	 */
	void UBP_UnlockCheckmark_C::GetUnlockRewardWidgets(class APlayerController* OwningPlayer, class UClass* SchematicClass, class UUserWidget* TradingPostWidget, TArray<class UUserWidget*>* Widgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UnlockCheckmark.BP_UnlockCheckmark_C.GetUnlockRewardWidgets");
		
		UBP_UnlockCheckmark_C_GetUnlockRewardWidgets_Params params {};
		params.OwningPlayer = OwningPlayer;
		params.SchematicClass = SchematicClass;
		params.TradingPostWidget = TradingPostWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Widgets != nullptr)
			*Widgets = params.Widgets;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_UnlockCheckmark.BP_UnlockCheckmark_C.GetUnlockDataStruct
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFUnlockDataStruct>                  UnlockDataStruct                                           (Parm, OutParm, ContainsInstancedReference)
	 */
	void UBP_UnlockCheckmark_C::GetUnlockDataStruct(TArray<struct FFUnlockDataStruct>* UnlockDataStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UnlockCheckmark.BP_UnlockCheckmark_C.GetUnlockDataStruct");
		
		UBP_UnlockCheckmark_C_GetUnlockDataStruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UnlockDataStruct != nullptr)
			*UnlockDataStruct = params.UnlockDataStruct;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_UnlockCheckmark.BP_UnlockCheckmark_C.GetCost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            UnlockStructIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FItemAmount>                         cost                                                       (Parm, OutParm)
	 */
	void UBP_UnlockCheckmark_C::GetCost(int32_t UnlockStructIndex, TArray<struct FItemAmount>* cost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_UnlockCheckmark.BP_UnlockCheckmark_C.GetCost");
		
		UBP_UnlockCheckmark_C_GetCost_Params params {};
		params.UnlockStructIndex = UnlockStructIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (cost != nullptr)
			*cost = params.cost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_UnlockCheckmark_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_UnlockCheckmark_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_UnlockCheckmark.BP_UnlockCheckmark_C");
		return ptr;
	}

}


