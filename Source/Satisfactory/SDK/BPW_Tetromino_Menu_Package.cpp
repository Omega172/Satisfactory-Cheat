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
	 * 		Name   -> Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.OnLevelSelectClicked
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStruct_TetrominoLevelData                  LevelData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UBPW_Tetromino_Menu_C::OnLevelSelectClicked(const struct FStruct_TetrominoLevelData& LevelData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.OnLevelSelectClicked");
		
		UBPW_Tetromino_Menu_C_OnLevelSelectClicked_Params params {};
		params.LevelData = LevelData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.CreateLevelSelect
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Tetromino_Menu_C::CreateLevelSelect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.CreateLevelSelect");
		
		UBPW_Tetromino_Menu_C_CreateLevelSelect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Tetromino_Menu_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.Construct");
		
		UBPW_Tetromino_Menu_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.BndEvt__BPW_Tetromino_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Tetromino_Menu_C::BndEvt__BPW_Tetromino_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.BndEvt__BPW_Tetromino_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBPW_Tetromino_Menu_C_BndEvt__BPW_Tetromino_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.BndEvt__mHowToPlay_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Tetromino_Menu_C::BndEvt__mHowToPlay_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.BndEvt__mHowToPlay_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UBPW_Tetromino_Menu_C_BndEvt__mHowToPlay_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.BndEvt__BPW_Tetromino_HowToPlay_K2Node_ComponentBoundEvent_2_OnBackToMenuClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Tetromino_Menu_C::BndEvt__BPW_Tetromino_HowToPlay_K2Node_ComponentBoundEvent_2_OnBackToMenuClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.BndEvt__BPW_Tetromino_HowToPlay_K2Node_ComponentBoundEvent_2_OnBackToMenuClicked__DelegateSignature");
		
		UBPW_Tetromino_Menu_C_BndEvt__BPW_Tetromino_HowToPlay_K2Node_ComponentBoundEvent_2_OnBackToMenuClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.ExecuteUbergraph_BPW_Tetromino_Menu
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Tetromino_Menu_C::ExecuteUbergraph_BPW_Tetromino_Menu(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.ExecuteUbergraph_BPW_Tetromino_Menu");
		
		UBPW_Tetromino_Menu_C_ExecuteUbergraph_BPW_Tetromino_Menu_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.OnStartGameOnLevel__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FStruct_TetrominoLevelData                  LevelData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UBPW_Tetromino_Menu_C::OnStartGameOnLevel__DelegateSignature(const struct FStruct_TetrominoLevelData& LevelData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.OnStartGameOnLevel__DelegateSignature");
		
		UBPW_Tetromino_Menu_C_OnStartGameOnLevel__DelegateSignature_Params params {};
		params.LevelData = LevelData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.OnHowToPlayClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Tetromino_Menu_C::OnHowToPlayClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.OnHowToPlayClicked__DelegateSignature");
		
		UBPW_Tetromino_Menu_C_OnHowToPlayClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.OnStartGameClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Tetromino_Menu_C::OnStartGameClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_Menu.BPW_Tetromino_Menu_C.OnStartGameClicked__DelegateSignature");
		
		UBPW_Tetromino_Menu_C_OnStartGameClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Tetromino_Menu_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Tetromino_Menu_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Tetromino_Menu.BPW_Tetromino_Menu_C");
		return ptr;
	}

}


