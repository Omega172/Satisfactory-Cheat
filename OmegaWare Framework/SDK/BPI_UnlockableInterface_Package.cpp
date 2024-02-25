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
	 * 		Name   -> Function BPI_UnlockableInterface.BPI_UnlockableInterface_C.GetCost
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            UnlockStructIndex                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FItemAmount>                         cost                                                       (Parm, OutParm)
	 */
	void UBPI_UnlockableInterface_C::GetCost(int32_t UnlockStructIndex, TArray<struct FItemAmount>* cost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_UnlockableInterface.BPI_UnlockableInterface_C.GetCost");
		
		UBPI_UnlockableInterface_C_GetCost_Params params {};
		params.UnlockStructIndex = UnlockStructIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (cost != nullptr)
			*cost = params.cost;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_UnlockableInterface.BPI_UnlockableInterface_C.GetUnlockDataStruct
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<struct FFUnlockDataStruct>                  UnlockDataStruct                                           (Parm, OutParm, ContainsInstancedReference)
	 */
	void UBPI_UnlockableInterface_C::GetUnlockDataStruct(TArray<struct FFUnlockDataStruct>* UnlockDataStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_UnlockableInterface.BPI_UnlockableInterface_C.GetUnlockDataStruct");
		
		UBPI_UnlockableInterface_C_GetUnlockDataStruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UnlockDataStruct != nullptr)
			*UnlockDataStruct = params.UnlockDataStruct;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_UnlockableInterface.BPI_UnlockableInterface_C.GetUnlockRewardWidgets
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class APlayerController*                           OwningPlayer                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      SchematicClass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UUserWidget*                                 TradingPostWidget                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UUserWidget*>                         Widgets                                                    (Parm, OutParm, ContainsInstancedReference)
	 */
	void UBPI_UnlockableInterface_C::GetUnlockRewardWidgets(class APlayerController* OwningPlayer, class UClass* SchematicClass, class UUserWidget* TradingPostWidget, TArray<class UUserWidget*>* Widgets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_UnlockableInterface.BPI_UnlockableInterface_C.GetUnlockRewardWidgets");
		
		UBPI_UnlockableInterface_C_GetUnlockRewardWidgets_Params params {};
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
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPI_UnlockableInterface.BPI_UnlockableInterface_C.GetStingerWidgetRewardData
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	void UBPI_UnlockableInterface_C::GetStingerWidgetRewardData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPI_UnlockableInterface.BPI_UnlockableInterface_C.GetStingerWidgetRewardData");
		
		UBPI_UnlockableInterface_C_GetStingerWidgetRewardData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPI_UnlockableInterface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPI_UnlockableInterface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPI_UnlockableInterface.BPI_UnlockableInterface_C");
		return ptr;
	}

}


