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
	 * 		Name   -> Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.SequenceEvent__ENTRYPOINTBPW_TetrominoPackagingGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_Tetromino_PostGameStats_C*              TetrominoPostGameStat                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPackagingGame_C::SequenceEvent__ENTRYPOINTBPW_TetrominoPackagingGame(class UBPW_Tetromino_PostGameStats_C* TetrominoPostGameStat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.SequenceEvent__ENTRYPOINTBPW_TetrominoPackagingGame");
		
		UBPW_TetrominoPackagingGame_C_SequenceEvent__ENTRYPOINTBPW_TetrominoPackagingGame_Params params {};
		params.TetrominoPostGameStat = TetrominoPostGameStat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.ChangeToGameStem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_TetrominoPackagingGame_C::ChangeToGameStem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.ChangeToGameStem");
		
		UBPW_TetrominoPackagingGame_C_ChangeToGameStem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.ChangeToMenuStem
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_TetrominoPackagingGame_C::ChangeToMenuStem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.ChangeToMenuStem");
		
		UBPW_TetrominoPackagingGame_C_ChangeToMenuStem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.StartMusic
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_TetrominoPackagingGame_C::StartMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.StartMusic");
		
		UBPW_TetrominoPackagingGame_C_StartMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.StopMusic
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_TetrominoPackagingGame_C::StopMusic()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.StopMusic");
		
		UBPW_TetrominoPackagingGame_C_StopMusic_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.UpdatePostGameStats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_TetrominoPackagingGame_C::UpdatePostGameStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.UpdatePostGameStats");
		
		UBPW_TetrominoPackagingGame_C_UpdatePostGameStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.UpdateStats
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             mFillAmount                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Animate                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPackagingGame_C::UpdateStats(int32_t Points, double mFillAmount, bool Animate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.UpdateStats");
		
		UBPW_TetrominoPackagingGame_C_UpdateStats_Params params {};
		params.Points = Points;
		params.mFillAmount = mFillAmount;
		params.Animate = Animate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.UnPauseGame
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_TetrominoPackagingGame_C::UnPauseGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.UnPauseGame");
		
		UBPW_TetrominoPackagingGame_C_UnPauseGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.OnBlockDropped
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            Points                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             FillAmount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPackagingGame_C::OnBlockDropped(int32_t Points, double FillAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.OnBlockDropped");
		
		UBPW_TetrominoPackagingGame_C_OnBlockDropped_Params params {};
		params.Points = Points;
		params.FillAmount = FillAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.SendPackage
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_TetrominoPackagingGame_C::SendPackage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.SendPackage");
		
		UBPW_TetrominoPackagingGame_C_SendPackage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.CreateBox
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_TetrominoPackagingGame_C::CreateBox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.CreateBox");
		
		UBPW_TetrominoPackagingGame_C_CreateBox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.ShowStatsSequenceEvent
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UBPW_Tetromino_PostGameStats_C*              TetrominoPostGameStat                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPackagingGame_C::ShowStatsSequenceEvent(class UBPW_Tetromino_PostGameStats_C* TetrominoPostGameStat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.ShowStatsSequenceEvent");
		
		UBPW_TetrominoPackagingGame_C_ShowStatsSequenceEvent_Params params {};
		params.TetrominoPostGameStat = TetrominoPostGameStat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_TetrominoPackagingGame_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.Construct");
		
		UBPW_TetrominoPackagingGame_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.BndEvt__BPW_Tetromino_SendButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_TetrominoPackagingGame_C::BndEvt__BPW_Tetromino_SendButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.BndEvt__BPW_Tetromino_SendButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature");
		
		UBPW_TetrominoPackagingGame_C_BndEvt__BPW_Tetromino_SendButton_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.BndEvt__BPW_Tetromino_GameStats_K2Node_ComponentBoundEvent_8_OnTimesUp__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_TetrominoPackagingGame_C::BndEvt__BPW_Tetromino_GameStats_K2Node_ComponentBoundEvent_8_OnTimesUp__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.BndEvt__BPW_Tetromino_GameStats_K2Node_ComponentBoundEvent_8_OnTimesUp__DelegateSignature");
		
		UBPW_TetrominoPackagingGame_C_BndEvt__BPW_Tetromino_GameStats_K2Node_ComponentBoundEvent_8_OnTimesUp__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.BndEvt__BPW_Tetromino_Menu_K2Node_ComponentBoundEvent_0_OnStartGameClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_TetrominoPackagingGame_C::BndEvt__BPW_Tetromino_Menu_K2Node_ComponentBoundEvent_0_OnStartGameClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.BndEvt__BPW_Tetromino_Menu_K2Node_ComponentBoundEvent_0_OnStartGameClicked__DelegateSignature");
		
		UBPW_TetrominoPackagingGame_C_BndEvt__BPW_Tetromino_Menu_K2Node_ComponentBoundEvent_0_OnStartGameClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.BndEvt__BPW_Tetromino_Menu_K2Node_ComponentBoundEvent_1_OnHowToPlayClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_TetrominoPackagingGame_C::BndEvt__BPW_Tetromino_Menu_K2Node_ComponentBoundEvent_1_OnHowToPlayClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.BndEvt__BPW_Tetromino_Menu_K2Node_ComponentBoundEvent_1_OnHowToPlayClicked__DelegateSignature");
		
		UBPW_TetrominoPackagingGame_C_BndEvt__BPW_Tetromino_Menu_K2Node_ComponentBoundEvent_1_OnHowToPlayClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.BndEvt__BPW_Tetromino_Menu_K2Node_ComponentBoundEvent_2_OnStartGameOnLevel__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 * Parameters:
	 * 		struct FStruct_TetrominoLevelData                  LevelData                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPackagingGame_C::BndEvt__BPW_Tetromino_Menu_K2Node_ComponentBoundEvent_2_OnStartGameOnLevel__DelegateSignature(const struct FStruct_TetrominoLevelData& LevelData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.BndEvt__BPW_Tetromino_Menu_K2Node_ComponentBoundEvent_2_OnStartGameOnLevel__DelegateSignature");
		
		UBPW_TetrominoPackagingGame_C_BndEvt__BPW_Tetromino_Menu_K2Node_ComponentBoundEvent_2_OnStartGameOnLevel__DelegateSignature_Params params {};
		params.LevelData = LevelData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.BndEvt__BPW_Tetromino_PostGameStats_K2Node_ComponentBoundEvent_0_OnBackToMenuClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_TetrominoPackagingGame_C::BndEvt__BPW_Tetromino_PostGameStats_K2Node_ComponentBoundEvent_0_OnBackToMenuClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.BndEvt__BPW_Tetromino_PostGameStats_K2Node_ComponentBoundEvent_0_OnBackToMenuClicked__DelegateSignature");
		
		UBPW_TetrominoPackagingGame_C_BndEvt__BPW_Tetromino_PostGameStats_K2Node_ComponentBoundEvent_0_OnBackToMenuClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.Destruct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_TetrominoPackagingGame_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.Destruct");
		
		UBPW_TetrominoPackagingGame_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.BndEvt__BPW_Tetromino_PostGameStats_K2Node_ComponentBoundEvent_4_OnNewHighScore__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_TetrominoPackagingGame_C::BndEvt__BPW_Tetromino_PostGameStats_K2Node_ComponentBoundEvent_4_OnNewHighScore__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.BndEvt__BPW_Tetromino_PostGameStats_K2Node_ComponentBoundEvent_4_OnNewHighScore__DelegateSignature");
		
		UBPW_TetrominoPackagingGame_C_BndEvt__BPW_Tetromino_PostGameStats_K2Node_ComponentBoundEvent_4_OnNewHighScore__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.ExecuteUbergraph_BPW_TetrominoPackagingGame
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_TetrominoPackagingGame_C::ExecuteUbergraph_BPW_TetrominoPackagingGame(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.ExecuteUbergraph_BPW_TetrominoPackagingGame");
		
		UBPW_TetrominoPackagingGame_C_ExecuteUbergraph_BPW_TetrominoPackagingGame_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.OnRestartGame__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_TetrominoPackagingGame_C::OnRestartGame__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C.OnRestartGame__DelegateSignature");
		
		UBPW_TetrominoPackagingGame_C_OnRestartGame__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_TetrominoPackagingGame_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_TetrominoPackagingGame_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_TetrominoPackagingGame.BPW_TetrominoPackagingGame_C");
		return ptr;
	}

}


