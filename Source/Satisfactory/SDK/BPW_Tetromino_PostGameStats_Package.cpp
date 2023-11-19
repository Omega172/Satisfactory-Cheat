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
	 * 		Name   -> Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.GetHighsScore
	 * 		Flags  -> (Public, HasOutParms, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
	 * Parameters:
	 * 		class FString                                      LevelID                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      PlayerName                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 * 		int32_t                                            Points                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Tetromino_PostGameStats_C::GetHighsScore(const class FString& LevelID, class FString* PlayerName, int32_t* Points)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.GetHighsScore");
		
		UBPW_Tetromino_PostGameStats_C_GetHighsScore_Params params {};
		params.LevelID = LevelID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PlayerName != nullptr)
			*PlayerName = params.PlayerName;
		if (Points != nullptr)
			*Points = params.Points;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.InitStars
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Tetromino_PostGameStats_C::InitStars()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.InitStars");
		
		UBPW_Tetromino_PostGameStats_C_InitStars_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.SetStats
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		int32_t                                            PlacedBlocks                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            PackagesSent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		double                                             MostFilledPackage                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            HighestPackagePoints                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            TotalPoints                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FStruct_TetrominoLevelData                  mLevelData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	 */
	void UBPW_Tetromino_PostGameStats_C::SetStats(int32_t PlacedBlocks, int32_t PackagesSent, double MostFilledPackage, int32_t HighestPackagePoints, int32_t TotalPoints, const struct FStruct_TetrominoLevelData& mLevelData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.SetStats");
		
		UBPW_Tetromino_PostGameStats_C_SetStats_Params params {};
		params.PlacedBlocks = PlacedBlocks;
		params.PackagesSent = PackagesSent;
		params.MostFilledPackage = MostFilledPackage;
		params.HighestPackagePoints = HighestPackagePoints;
		params.TotalPoints = TotalPoints;
		params.mLevelData = mLevelData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.Construct
	 * 		Flags  -> (BlueprintCosmetic, Event, Public, BlueprintEvent)
	 */
	void UBPW_Tetromino_PostGameStats_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.Construct");
		
		UBPW_Tetromino_PostGameStats_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.ShowStats
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Tetromino_PostGameStats_C::ShowStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.ShowStats");
		
		UBPW_Tetromino_PostGameStats_C_ShowStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.BndEvt__BPW_Tetromino_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> (BlueprintEvent)
	 */
	void UBPW_Tetromino_PostGameStats_C::BndEvt__BPW_Tetromino_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.BndEvt__BPW_Tetromino_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UBPW_Tetromino_PostGameStats_C_BndEvt__BPW_Tetromino_Button_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.ExecuteUbergraph_BPW_Tetromino_PostGameStats
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBPW_Tetromino_PostGameStats_C::ExecuteUbergraph_BPW_Tetromino_PostGameStats(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.ExecuteUbergraph_BPW_Tetromino_PostGameStats");
		
		UBPW_Tetromino_PostGameStats_C_ExecuteUbergraph_BPW_Tetromino_PostGameStats_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.OnNewHighScore__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Tetromino_PostGameStats_C::OnNewHighScore__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.OnNewHighScore__DelegateSignature");
		
		UBPW_Tetromino_PostGameStats_C_OnNewHighScore__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.OnBackToMenuClicked__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void UBPW_Tetromino_PostGameStats_C::OnBackToMenuClicked__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C.OnBackToMenuClicked__DelegateSignature");
		
		UBPW_Tetromino_PostGameStats_C_OnBackToMenuClicked__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPW_Tetromino_PostGameStats_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPW_Tetromino_PostGameStats_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BPW_Tetromino_PostGameStats.BPW_Tetromino_PostGameStats_C");
		return ptr;
	}

}


