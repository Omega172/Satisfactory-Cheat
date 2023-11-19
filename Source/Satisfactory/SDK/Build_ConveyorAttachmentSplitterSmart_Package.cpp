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
	 * 		Name   -> Function Build_ConveyorAttachmentSplitterSmart.Build_ConveyorAttachmentSplitterSmart_C.CanUseFactoryClipboard
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	bool ABuild_ConveyorAttachmentSplitterSmart_C::CanUseFactoryClipboard()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ConveyorAttachmentSplitterSmart.Build_ConveyorAttachmentSplitterSmart_C.CanUseFactoryClipboard");
		
		ABuild_ConveyorAttachmentSplitterSmart_C_CanUseFactoryClipboard_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ConveyorAttachmentSplitterSmart.Build_ConveyorAttachmentSplitterSmart_C.CopySettings
	 * 		Flags  -> (Event, Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	class UFGFactoryClipboardSettings* ABuild_ConveyorAttachmentSplitterSmart_C::CopySettings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ConveyorAttachmentSplitterSmart.Build_ConveyorAttachmentSplitterSmart_C.CopySettings");
		
		ABuild_ConveyorAttachmentSplitterSmart_C_CopySettings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ConveyorAttachmentSplitterSmart.Build_ConveyorAttachmentSplitterSmart_C.GetClipboardMappingClass
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UClass* ABuild_ConveyorAttachmentSplitterSmart_C::GetClipboardMappingClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ConveyorAttachmentSplitterSmart.Build_ConveyorAttachmentSplitterSmart_C.GetClipboardMappingClass");
		
		ABuild_ConveyorAttachmentSplitterSmart_C_GetClipboardMappingClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ConveyorAttachmentSplitterSmart.Build_ConveyorAttachmentSplitterSmart_C.GetClipboardSettingsClass
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UClass* ABuild_ConveyorAttachmentSplitterSmart_C::GetClipboardSettingsClass()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ConveyorAttachmentSplitterSmart.Build_ConveyorAttachmentSplitterSmart_C.GetClipboardSettingsClass");
		
		ABuild_ConveyorAttachmentSplitterSmart_C_GetClipboardSettingsClass_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ConveyorAttachmentSplitterSmart.Build_ConveyorAttachmentSplitterSmart_C.PasteSettings
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UFGFactoryClipboardSettings*                 factoryClipboard                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	bool ABuild_ConveyorAttachmentSplitterSmart_C::PasteSettings(class UFGFactoryClipboardSettings* factoryClipboard)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ConveyorAttachmentSplitterSmart.Build_ConveyorAttachmentSplitterSmart_C.PasteSettings");
		
		ABuild_ConveyorAttachmentSplitterSmart_C_PasteSettings_Params params {};
		params.factoryClipboard = factoryClipboard;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ConveyorAttachmentSplitterSmart.Build_ConveyorAttachmentSplitterSmart_C.PlayConstructSound
	 * 		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
	 */
	void ABuild_ConveyorAttachmentSplitterSmart_C::PlayConstructSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ConveyorAttachmentSplitterSmart.Build_ConveyorAttachmentSplitterSmart_C.PlayConstructSound");
		
		ABuild_ConveyorAttachmentSplitterSmart_C_PlayConstructSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ConveyorAttachmentSplitterSmart.Build_ConveyorAttachmentSplitterSmart_C.ExecuteUbergraph_Build_ConveyorAttachmentSplitterSmart
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_ConveyorAttachmentSplitterSmart_C::ExecuteUbergraph_Build_ConveyorAttachmentSplitterSmart(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ConveyorAttachmentSplitterSmart.Build_ConveyorAttachmentSplitterSmart_C.ExecuteUbergraph_Build_ConveyorAttachmentSplitterSmart");
		
		ABuild_ConveyorAttachmentSplitterSmart_C_ExecuteUbergraph_Build_ConveyorAttachmentSplitterSmart_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_ConveyorAttachmentSplitterSmart_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_ConveyorAttachmentSplitterSmart_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_ConveyorAttachmentSplitterSmart.Build_ConveyorAttachmentSplitterSmart_C");
		return ptr;
	}

}


