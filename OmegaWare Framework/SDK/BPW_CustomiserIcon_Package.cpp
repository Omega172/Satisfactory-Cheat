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
	 * 		Name   -> Function BPW_CustomiserIcon.BPW_CustomiserIcon_C.SetColors
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FFactoryCustomizationColorSlot              CustomiserColorData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UBPW_CustomiserIcon_C::SetColors(const struct FFactoryCustomizationColorSlot& CustomiserColorData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserIcon.BPW_CustomiserIcon_C.SetColors");
		
		UBPW_CustomiserIcon_C_SetColors_Params params {};
		params.CustomiserColorData = CustomiserColorData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CustomiserIcon.BPW_CustomiserIcon_C.SetShowBackground
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mShowBackground                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CustomiserIcon_C::SetShowBackground(bool mShowBackground)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserIcon.BPW_CustomiserIcon_C.SetShowBackground");
		
		UBPW_CustomiserIcon_C_SetShowBackground_Params params {};
		params.mShowBackground = mShowBackground;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CustomiserIcon.BPW_CustomiserIcon_C.SetClearCustomiser
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               mClearCustomiser                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CustomiserIcon_C::SetClearCustomiser(bool mClearCustomiser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserIcon.BPW_CustomiserIcon_C.SetClearCustomiser");
		
		UBPW_CustomiserIcon_C_SetClearCustomiser_Params params {};
		params.mClearCustomiser = mClearCustomiser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CustomiserIcon.BPW_CustomiserIcon_C.SetupData
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mCustomiserDescriptor                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CustomiserIcon_C::SetupData(class UClass* mCustomiserDescriptor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserIcon.BPW_CustomiserIcon_C.SetupData");
		
		UBPW_CustomiserIcon_C_SetupData_Params params {};
		params.mCustomiserDescriptor = mCustomiserDescriptor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CustomiserIcon.BPW_CustomiserIcon_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CustomiserIcon_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserIcon.BPW_CustomiserIcon_C.PreConstruct");
		
		UBPW_CustomiserIcon_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x71B1A63A0
	 * 		Name   -> Function BPW_CustomiserIcon.BPW_CustomiserIcon_C.ExecuteUbergraph_BPW_CustomiserIcon
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_CustomiserIcon_C::ExecuteUbergraph_BPW_CustomiserIcon(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_CustomiserIcon.BPW_CustomiserIcon_C.ExecuteUbergraph_BPW_CustomiserIcon");
		
		UBPW_CustomiserIcon_C_ExecuteUbergraph_BPW_CustomiserIcon_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_CustomiserIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_CustomiserIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_CustomiserIcon.BPW_CustomiserIcon_C");
		return ptr;
	}

}


