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
	 * 		Name   -> Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.UpdateBannerData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_Banner_C::UpdateBannerData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.UpdateBannerData");
		
		UBPW_ResourceSinkShop_Banner_C_UpdateBannerData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.SetBanner
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FResourceSinkShop_Banner_Struct             mBannerStruct                                              (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_Banner_C::SetBanner(const struct FResourceSinkShop_Banner_Struct& mBannerStruct)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.SetBanner");
		
		UBPW_ResourceSinkShop_Banner_C_SetBanner_Params params {};
		params.mBannerStruct = mBannerStruct;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_Banner_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.PreConstruct");
		
		UBPW_ResourceSinkShop_Banner_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_Banner_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.Construct");
		
		UBPW_ResourceSinkShop_Banner_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.ExecuteUbergraph_BPW_ResourceSinkShop_Banner
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_Banner_C::ExecuteUbergraph_BPW_ResourceSinkShop_Banner(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C.ExecuteUbergraph_BPW_ResourceSinkShop_Banner");
		
		UBPW_ResourceSinkShop_Banner_C_ExecuteUbergraph_BPW_ResourceSinkShop_Banner_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_ResourceSinkShop_Banner_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ResourceSinkShop_Banner_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ResourceSinkShop_Banner.BPW_ResourceSinkShop_Banner_C");
		return ptr;
	}

}


