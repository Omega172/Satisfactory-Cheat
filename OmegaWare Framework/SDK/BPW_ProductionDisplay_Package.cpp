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
	 * 		Name   -> Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.SetIsIdle
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsIdle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplay_C::SetIsIdle(bool mIsIdle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.SetIsIdle");
		
		UBPW_ProductionDisplay_C_SetIsIdle_Params params {};
		params.mIsIdle = mIsIdle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.UpdateFluxPower
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             FluxPowerMin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             FluxPowerMax                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplay_C::UpdateFluxPower(double FluxPowerMin, double FluxPowerMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.UpdateFluxPower");
		
		UBPW_ProductionDisplay_C_UpdateFluxPower_Params params {};
		params.FluxPowerMin = FluxPowerMin;
		params.FluxPowerMax = FluxPowerMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.CreateSingleModule
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStruct_ProductionDisplayModule             ProductionModule                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplay_C::CreateSingleModule(const struct FStruct_ProductionDisplayModule& ProductionModule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.CreateSingleModule");
		
		UBPW_ProductionDisplay_C_CreateSingleModule_Params params {};
		params.ProductionModule = ProductionModule;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.AddModule
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStruct_ProductionDisplayModule             ProductionModule                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplay_C::AddModule(const struct FStruct_ProductionDisplayModule& ProductionModule)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.AddModule");
		
		UBPW_ProductionDisplay_C_AddModule_Params params {};
		params.ProductionModule = ProductionModule;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.SetResourceIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplay_C::SetResourceIcon(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.SetResourceIcon");
		
		UBPW_ProductionDisplay_C_SetResourceIcon_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.GetInputSlot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UWidget_InventorySlot_C*                     InventorySlot                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplay_C::GetInputSlot(class UWidget_InventorySlot_C** InventorySlot, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.GetInputSlot");
		
		UBPW_ProductionDisplay_C_GetInputSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InventorySlot != nullptr)
			*InventorySlot = params.InventorySlot;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.GetOutputSlot
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class UWidget_InventorySlot_C*                     InventorySlot                                              (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Success                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplay_C::GetOutputSlot(class UWidget_InventorySlot_C** InventorySlot, bool* Success)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.GetOutputSlot");
		
		UBPW_ProductionDisplay_C_GetOutputSlot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (InventorySlot != nullptr)
			*InventorySlot = params.InventorySlot;
		if (Success != nullptr)
			*Success = params.Success;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.ManuallySetItemAmount
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		E_InputOutput                                      InputOrOutput                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FItemAmount                                 ItemAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UBPW_ProductionDisplay_C::ManuallySetItemAmount(E_InputOutput InputOrOutput, const struct FItemAmount& ItemAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.ManuallySetItemAmount");
		
		UBPW_ProductionDisplay_C_ManuallySetItemAmount_Params params {};
		params.InputOrOutput = InputOrOutput;
		params.ItemAmount = ItemAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.SetupInputOutputInventories
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGInventoryComponent*                       InputInventoryComponent                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 * 		class UFGInventoryComponent*                       OutputInventoryComponent                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplay_C::SetupInputOutputInventories(class UFGInventoryComponent* InputInventoryComponent, class UFGInventoryComponent* OutputInventoryComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.SetupInputOutputInventories");
		
		UBPW_ProductionDisplay_C_SetupInputOutputInventories_Params params {};
		params.InputInventoryComponent = InputInventoryComponent;
		params.OutputInventoryComponent = OutputInventoryComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.UpdateRecipe
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      recipe                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplay_C::UpdateRecipe(class UClass* recipe)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.UpdateRecipe");
		
		UBPW_ProductionDisplay_C_UpdateRecipe_Params params {};
		params.recipe = recipe;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.UpdatePerMinStat
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             CycleTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplay_C::UpdatePerMinStat(double CycleTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.UpdatePerMinStat");
		
		UBPW_ProductionDisplay_C_UpdatePerMinStat_Params params {};
		params.CycleTime = CycleTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.UpdateProgress
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             InPercent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplay_C::UpdateProgress(double InPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.UpdateProgress");
		
		UBPW_ProductionDisplay_C_UpdateProgress_Params params {};
		params.InPercent = InPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.UpdateProductionStats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Power                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             CycleTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             efficiency                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplay_C::UpdateProductionStats(double Power, double CycleTime, double efficiency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.UpdateProductionStats");
		
		UBPW_ProductionDisplay_C_UpdateProductionStats_Params params {};
		params.Power = Power;
		params.CycleTime = CycleTime;
		params.efficiency = efficiency;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.CreateSpacer
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Offset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplay_C::CreateSpacer(double Offset, double Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.CreateSpacer");
		
		UBPW_ProductionDisplay_C_CreateSpacer_Params params {};
		params.Offset = Offset;
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.CreateModulesFromArray
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ProductionDisplay_C::CreateModulesFromArray()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.CreateModulesFromArray");
		
		UBPW_ProductionDisplay_C_CreateModulesFromArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplay_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.PreConstruct");
		
		UBPW_ProductionDisplay_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.OnUpdateDropArea
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ProductionDisplay_C::OnUpdateDropArea()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.OnUpdateDropArea");
		
		UBPW_ProductionDisplay_C_OnUpdateDropArea_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.ExecuteUbergraph_BPW_ProductionDisplay
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplay_C::ExecuteUbergraph_BPW_ProductionDisplay(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplay.BPW_ProductionDisplay_C.ExecuteUbergraph_BPW_ProductionDisplay");
		
		UBPW_ProductionDisplay_C_ExecuteUbergraph_BPW_ProductionDisplay_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_ProductionDisplay_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ProductionDisplay_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ProductionDisplay.BPW_ProductionDisplay_C");
		return ptr;
	}

}


