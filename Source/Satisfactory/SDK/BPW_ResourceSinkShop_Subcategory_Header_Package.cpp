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
	 * 		Name   -> Function BPW_ResourceSinkShop_Subcategory_Header.BPW_ResourceSinkShop_Subcategory_Header_C.GetResourceShopSubcategoryName
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UClass*                                      mSchematicSubcategory                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_Subcategory_Header_C::GetResourceShopSubcategoryName(class UClass* mSchematicSubcategory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Subcategory_Header.BPW_ResourceSinkShop_Subcategory_Header_C.GetResourceShopSubcategoryName");
		
		UBPW_ResourceSinkShop_Subcategory_Header_C_GetResourceShopSubcategoryName_Params params {};
		params.mSchematicSubcategory = mSchematicSubcategory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Subcategory_Header.BPW_ResourceSinkShop_Subcategory_Header_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_ResourceSinkShop_Subcategory_Header_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Subcategory_Header.BPW_ResourceSinkShop_Subcategory_Header_C.Construct");
		
		UBPW_ResourceSinkShop_Subcategory_Header_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_ResourceSinkShop_Subcategory_Header.BPW_ResourceSinkShop_Subcategory_Header_C.ExecuteUbergraph_BPW_ResourceSinkShop_Subcategory_Header
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_ResourceSinkShop_Subcategory_Header_C::ExecuteUbergraph_BPW_ResourceSinkShop_Subcategory_Header(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_ResourceSinkShop_Subcategory_Header.BPW_ResourceSinkShop_Subcategory_Header_C.ExecuteUbergraph_BPW_ResourceSinkShop_Subcategory_Header");
		
		UBPW_ResourceSinkShop_Subcategory_Header_C_ExecuteUbergraph_BPW_ResourceSinkShop_Subcategory_Header_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_ResourceSinkShop_Subcategory_Header_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_ResourceSinkShop_Subcategory_Header_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_ResourceSinkShop_Subcategory_Header.BPW_ResourceSinkShop_Subcategory_Header_C");
		return ptr;
	}

}


