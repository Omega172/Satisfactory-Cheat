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
	 * 		Name   -> Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetBackgroundVisivbility
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mShowBackground                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplayModule_Production_C::SetBackgroundVisivbility(bool mShowBackground)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetBackgroundVisivbility");
		
		UBPW_ProductionDisplayModule_Production_C_SetBackgroundVisivbility_Params params {};
		params.mShowBackground = mShowBackground;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetIsIdle
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mIsIdle                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplayModule_Production_C::SetIsIdle(bool mIsIdle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetIsIdle");
		
		UBPW_ProductionDisplayModule_Production_C_SetIsIdle_Params params {};
		params.mIsIdle = mIsIdle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.UpdateFluxPower
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             FluxPowerMin                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             FluxPowerMax                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplayModule_Production_C::UpdateFluxPower(double FluxPowerMin, double FluxPowerMax)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.UpdateFluxPower");
		
		UBPW_ProductionDisplayModule_Production_C_UpdateFluxPower_Params params {};
		params.FluxPowerMin = FluxPowerMin;
		params.FluxPowerMax = FluxPowerMax;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.StopProductionAnimation
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ProductionDisplayModule_Production_C::StopProductionAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.StopProductionAnimation");
		
		UBPW_ProductionDisplayModule_Production_C_StopProductionAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.OnProgressCompleted
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ProductionDisplayModule_Production_C::OnProgressCompleted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.OnProgressCompleted");
		
		UBPW_ProductionDisplayModule_Production_C_OnProgressCompleted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetRecipeName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_ProductionDisplayModule_Production_C::SetRecipeName(const class FText& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetRecipeName");
		
		UBPW_ProductionDisplayModule_Production_C_SetRecipeName_Params params {};
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetRecipeIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplayModule_Production_C::SetRecipeIcon(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetRecipeIcon");
		
		UBPW_ProductionDisplayModule_Production_C_SetRecipeIcon_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetFontSize
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            mFontSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplayModule_Production_C::SetFontSize(int32_t mFontSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetFontSize");
		
		UBPW_ProductionDisplayModule_Production_C_SetFontSize_Params params {};
		params.mFontSize = mFontSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetupProgressBar
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ProductionDisplayModule_Production_C::SetupProgressBar()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetupProgressBar");
		
		UBPW_ProductionDisplayModule_Production_C_SetupProgressBar_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetResourceIcon
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplayModule_Production_C::SetResourceIcon(class UTexture2D* Texture)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetResourceIcon");
		
		UBPW_ProductionDisplayModule_Production_C_SetResourceIcon_Params params {};
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.UpdateProgress
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             InPercent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplayModule_Production_C::UpdateProgress(double InPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.UpdateProgress");
		
		UBPW_ProductionDisplayModule_Production_C_UpdateProgress_Params params {};
		params.InPercent = InPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.UpdateProductionStats
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             Power                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             CycleTime                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             efficiency                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplayModule_Production_C::UpdateProductionStats(double Power, double CycleTime, double efficiency)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.UpdateProductionStats");
		
		UBPW_ProductionDisplayModule_Production_C_UpdateProductionStats_Params params {};
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
	 * 		Name   -> Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetupProductionStats
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ProductionDisplayModule_Production_C::SetupProductionStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetupProductionStats");
		
		UBPW_ProductionDisplayModule_Production_C_SetupProductionStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetProductionTexts
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		TArray<class FText>                                ProductionTexts                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBPW_ProductionDisplayModule_Production_C::SetProductionTexts(TArray<class FText>* ProductionTexts)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.SetProductionTexts");
		
		UBPW_ProductionDisplayModule_Production_C_SetProductionTexts_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ProductionTexts != nullptr)
			*ProductionTexts = params.ProductionTexts;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.PlayProductionAnimation
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ProductionDisplayModule_Production_C::PlayProductionAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.PlayProductionAnimation");
		
		UBPW_ProductionDisplayModule_Production_C_PlayProductionAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplayModule_Production_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.PreConstruct");
		
		UBPW_ProductionDisplayModule_Production_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.ExecuteUbergraph_BPW_ProductionDisplayModule_Production
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ProductionDisplayModule_Production_C::ExecuteUbergraph_BPW_ProductionDisplayModule_Production(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C.ExecuteUbergraph_BPW_ProductionDisplayModule_Production");
		
		UBPW_ProductionDisplayModule_Production_C_ExecuteUbergraph_BPW_ProductionDisplayModule_Production_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_ProductionDisplayModule_Production_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ProductionDisplayModule_Production_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ProductionDisplayModule_Production.BPW_ProductionDisplayModule_Production_C");
		return ptr;
	}

}


