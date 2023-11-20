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
	 * 		Name   -> Function BPW_Tetromino_GameStatEntry.BPW_Tetromino_GameStatEntry_C.SetDetails
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        mDetails                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Tetromino_GameStatEntry_C::SetDetails(const class FText& mDetails)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_GameStatEntry.BPW_Tetromino_GameStatEntry_C.SetDetails");
		
		UBPW_Tetromino_GameStatEntry_C_SetDetails_Params params {};
		params.mDetails = mDetails;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_GameStatEntry.BPW_Tetromino_GameStatEntry_C.PlaySpawnAnim
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Tetromino_GameStatEntry_C::PlaySpawnAnim()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_GameStatEntry.BPW_Tetromino_GameStatEntry_C.PlaySpawnAnim");
		
		UBPW_Tetromino_GameStatEntry_C_PlaySpawnAnim_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_GameStatEntry.BPW_Tetromino_GameStatEntry_C.SetColor
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FLinearColor                                mNameColor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                mDetailsColor                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Tetromino_GameStatEntry_C::SetColor(const struct FLinearColor& mNameColor, const struct FLinearColor& mDetailsColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_GameStatEntry.BPW_Tetromino_GameStatEntry_C.SetColor");
		
		UBPW_Tetromino_GameStatEntry_C_SetColor_Params params {};
		params.mNameColor = mNameColor;
		params.mDetailsColor = mDetailsColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_GameStatEntry.BPW_Tetromino_GameStatEntry_C.SetupStat
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        StatName                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FText                                        StatDetails                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBPW_Tetromino_GameStatEntry_C::SetupStat(const class FText& StatName, const class FText& StatDetails)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_GameStatEntry.BPW_Tetromino_GameStatEntry_C.SetupStat");
		
		UBPW_Tetromino_GameStatEntry_C_SetupStat_Params params {};
		params.StatName = StatName;
		params.StatDetails = StatDetails;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_GameStatEntry.BPW_Tetromino_GameStatEntry_C.PreConstruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Tetromino_GameStatEntry_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_GameStatEntry.BPW_Tetromino_GameStatEntry_C.PreConstruct");
		
		UBPW_Tetromino_GameStatEntry_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_GameStatEntry.BPW_Tetromino_GameStatEntry_C.ExecuteUbergraph_BPW_Tetromino_GameStatEntry
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Tetromino_GameStatEntry_C::ExecuteUbergraph_BPW_Tetromino_GameStatEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_GameStatEntry.BPW_Tetromino_GameStatEntry_C.ExecuteUbergraph_BPW_Tetromino_GameStatEntry");
		
		UBPW_Tetromino_GameStatEntry_C_ExecuteUbergraph_BPW_Tetromino_GameStatEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Tetromino_GameStatEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Tetromino_GameStatEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Tetromino_GameStatEntry.BPW_Tetromino_GameStatEntry_C");
		return ptr;
	}

}


