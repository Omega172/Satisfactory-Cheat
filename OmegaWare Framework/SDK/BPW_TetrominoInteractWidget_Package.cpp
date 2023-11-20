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
	 * 		Name   -> Function BPW_TetrominoInteractWidget.BPW_TetrominoInteractWidget_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_TetrominoInteractWidget_C::BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoInteractWidget.BPW_TetrominoInteractWidget_C.BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature");
		
		UBPW_TetrominoInteractWidget_C_BndEvt__Widget_Window_DarkMode_K2Node_ComponentBoundEvent_0_OnClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoInteractWidget.BPW_TetrominoInteractWidget_C.BndEvt__BPW_TetrominoPackagingGame_K2Node_ComponentBoundEvent_1_OnRestartGame__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_TetrominoInteractWidget_C::BndEvt__BPW_TetrominoPackagingGame_K2Node_ComponentBoundEvent_1_OnRestartGame__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoInteractWidget.BPW_TetrominoInteractWidget_C.BndEvt__BPW_TetrominoPackagingGame_K2Node_ComponentBoundEvent_1_OnRestartGame__DelegateSignature");
		
		UBPW_TetrominoInteractWidget_C_BndEvt__BPW_TetrominoPackagingGame_K2Node_ComponentBoundEvent_1_OnRestartGame__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoInteractWidget.BPW_TetrominoInteractWidget_C.OnRestartGame
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_TetrominoInteractWidget_C::OnRestartGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoInteractWidget.BPW_TetrominoInteractWidget_C.OnRestartGame");
		
		UBPW_TetrominoInteractWidget_C_OnRestartGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoInteractWidget.BPW_TetrominoInteractWidget_C.ExecuteUbergraph_BPW_TetrominoInteractWidget
	 * 		Flags  -> (Final)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoInteractWidget_C::ExecuteUbergraph_BPW_TetrominoInteractWidget(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoInteractWidget.BPW_TetrominoInteractWidget_C.ExecuteUbergraph_BPW_TetrominoInteractWidget");
		
		UBPW_TetrominoInteractWidget_C_ExecuteUbergraph_BPW_TetrominoInteractWidget_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_TetrominoInteractWidget_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_TetrominoInteractWidget_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_TetrominoInteractWidget.BPW_TetrominoInteractWidget_C");
		return ptr;
	}

}


