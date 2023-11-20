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
	 * 		Name   -> Function BPW_FluidGauge.BPW_FluidGauge_C.SetGaugeBackground
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UObject*                                     mGaugeBackgroundObject                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FluidGauge_C::SetGaugeBackground(class UObject* mGaugeBackgroundObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FluidGauge.BPW_FluidGauge_C.SetGaugeBackground");
		
		UBPW_FluidGauge_C_SetGaugeBackground_Params params {};
		params.mGaugeBackgroundObject = mGaugeBackgroundObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FluidGauge.BPW_FluidGauge_C.SetGaugeName
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mGaugeName                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_FluidGauge_C::SetGaugeName(const class FText& mGaugeName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FluidGauge.BPW_FluidGauge_C.SetGaugeName");
		
		UBPW_FluidGauge_C_SetGaugeName_Params params {};
		params.mGaugeName = mGaugeName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FluidGauge.BPW_FluidGauge_C.SetDividerPosition
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             mDividerPosition                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FluidGauge_C::SetDividerPosition(double mDividerPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FluidGauge.BPW_FluidGauge_C.SetDividerPosition");
		
		UBPW_FluidGauge_C_SetDividerPosition_Params params {};
		params.mDividerPosition = mDividerPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FluidGauge.BPW_FluidGauge_C.SetupMeterTexture
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_FluidGauge_C::SetupMeterTexture()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FluidGauge.BPW_FluidGauge_C.SetupMeterTexture");
		
		UBPW_FluidGauge_C_SetupMeterTexture_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FluidGauge.BPW_FluidGauge_C.UpdateGaugeValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             mGaugeValue                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FluidGauge_C::UpdateGaugeValue(double mGaugeValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FluidGauge.BPW_FluidGauge_C.UpdateGaugeValue");
		
		UBPW_FluidGauge_C_UpdateGaugeValue_Params params {};
		params.mGaugeValue = mGaugeValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FluidGauge.BPW_FluidGauge_C.SetMeterColor
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                mMeterColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FluidGauge_C::SetMeterColor(const struct FLinearColor& mMeterColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FluidGauge.BPW_FluidGauge_C.SetMeterColor");
		
		UBPW_FluidGauge_C_SetMeterColor_Params params {};
		params.mMeterColor = mMeterColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FluidGauge.BPW_FluidGauge_C.SetBarColors
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                mPrimaryColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                mSecondaryColor                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FluidGauge_C::SetBarColors(const struct FLinearColor& mPrimaryColor, const struct FLinearColor& mSecondaryColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FluidGauge.BPW_FluidGauge_C.SetBarColors");
		
		UBPW_FluidGauge_C_SetBarColors_Params params {};
		params.mPrimaryColor = mPrimaryColor;
		params.mSecondaryColor = mSecondaryColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FluidGauge.BPW_FluidGauge_C.SetUseBarDivider
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mUseBarDivider                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FluidGauge_C::SetUseBarDivider(bool mUseBarDivider)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FluidGauge.BPW_FluidGauge_C.SetUseBarDivider");
		
		UBPW_FluidGauge_C_SetUseBarDivider_Params params {};
		params.mUseBarDivider = mUseBarDivider;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FluidGauge.BPW_FluidGauge_C.SetGaugeBarPadding
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		double                                             mGaugeBarPadding                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FluidGauge_C::SetGaugeBarPadding(double mGaugeBarPadding)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FluidGauge.BPW_FluidGauge_C.SetGaugeBarPadding");
		
		UBPW_FluidGauge_C_SetGaugeBarPadding_Params params {};
		params.mGaugeBarPadding = mGaugeBarPadding;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FluidGauge.BPW_FluidGauge_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FluidGauge_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FluidGauge.BPW_FluidGauge_C.PreConstruct");
		
		UBPW_FluidGauge_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FluidGauge.BPW_FluidGauge_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_FluidGauge_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FluidGauge.BPW_FluidGauge_C.Construct");
		
		UBPW_FluidGauge_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_FluidGauge.BPW_FluidGauge_C.ExecuteUbergraph_BPW_FluidGauge
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_FluidGauge_C::ExecuteUbergraph_BPW_FluidGauge(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_FluidGauge.BPW_FluidGauge_C.ExecuteUbergraph_BPW_FluidGauge");
		
		UBPW_FluidGauge_C_ExecuteUbergraph_BPW_FluidGauge_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_FluidGauge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_FluidGauge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_FluidGauge.BPW_FluidGauge_C");
		return ptr;
	}

}


