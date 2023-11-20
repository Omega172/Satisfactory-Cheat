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
	 * 		Name   -> Function BP_PlayerController.BP_PlayerController_C.GetPhotoModeWidget
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 */
	class UFGPhotoModeWidget* ABP_PlayerController_C::GetPhotoModeWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.GetPhotoModeWidget");
		
		ABP_PlayerController_C_GetPhotoModeWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_PlayerController.BP_PlayerController_C.DismantleGolfCart
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGWheeledVehicle*                           golfCart                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_C::DismantleGolfCart(class AFGWheeledVehicle* golfCart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.DismantleGolfCart");
		
		ABP_PlayerController_C_DismantleGolfCart_Params params {};
		params.golfCart = golfCart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_PlayerController.BP_PlayerController_C.OnSetupMovementWind
	 * 		Flags  -> (Event, Protected, HasOutParms, BlueprintCallable, BlueprintEvent)
	 */
	class UAkComponent* ABP_PlayerController_C::OnSetupMovementWind()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnSetupMovementWind");
		
		ABP_PlayerController_C_OnSetupMovementWind_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_PlayerController.BP_PlayerController_C.DismantlePortableMiner
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGPortableMiner*                            PortableMiner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_C::DismantlePortableMiner(class AFGPortableMiner* PortableMiner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.DismantlePortableMiner");
		
		ABP_PlayerController_C_DismantlePortableMiner_Params params {};
		params.PortableMiner = PortableMiner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_PlayerController.BP_PlayerController_C.OnStartRespawn
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               isJoining                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_C::OnStartRespawn(bool isJoining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnStartRespawn");
		
		ABP_PlayerController_C_OnStartRespawn_Params params {};
		params.isJoining = isJoining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_PlayerController.BP_PlayerController_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_PlayerController_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ReceiveBeginPlay");
		
		ABP_PlayerController_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_PlayerController.BP_PlayerController_C.CheckAndUpdateGamepad
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlayerController_C::CheckAndUpdateGamepad()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.CheckAndUpdateGamepad");
		
		ABP_PlayerController_C_CheckAndUpdateGamepad_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_PlayerController.BP_PlayerController_C.OnDisabledInputGateChanged
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_PlayerController_C::OnDisabledInputGateChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnDisabledInputGateChanged");
		
		ABP_PlayerController_C_OnDisabledInputGateChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_PlayerController.BP_PlayerController_C.CreateSequenceList
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 */
	void ABP_PlayerController_C::CreateSequenceList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.CreateSequenceList");
		
		ABP_PlayerController_C_CreateSequenceList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_PlayerController.BP_PlayerController_C.TogglePhotoModeInstructionsWidget
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_PlayerController_C::TogglePhotoModeInstructionsWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.TogglePhotoModeInstructionsWidget");
		
		ABP_PlayerController_C_TogglePhotoModeInstructionsWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_PlayerController.BP_PlayerController_C.ReceiveTick
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ReceiveTick");
		
		ABP_PlayerController_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_PlayerController.BP_PlayerController_C.PlayPhotoSound
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlayerController_C::PlayPhotoSound()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.PlayPhotoSound");
		
		ABP_PlayerController_C_PlayPhotoSound_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_PlayerController.BP_PlayerController_C.TakePhoto
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlayerController_C::TakePhoto()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.TakePhoto");
		
		ABP_PlayerController_C_TakePhoto_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_PlayerController.BP_PlayerController_C.OnDismantlePortableMiner
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGPortableMiner*                            PortableMiner                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_C::OnDismantlePortableMiner(class AFGPortableMiner* PortableMiner)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnDismantlePortableMiner");
		
		ABP_PlayerController_C_OnDismantlePortableMiner_Params params {};
		params.PortableMiner = PortableMiner;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_PlayerController.BP_PlayerController_C.OnDismantleGolfCart
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class AFGWheeledVehicle*                           inGolfCart                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_C::OnDismantleGolfCart(class AFGWheeledVehicle* inGolfCart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnDismantleGolfCart");
		
		ABP_PlayerController_C_OnDismantleGolfCart_Params params {};
		params.inGolfCart = inGolfCart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_PlayerController.BP_PlayerController_C.OnRespawnFinished
	 * 		Flags  -> (BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlayerController_C::OnRespawnFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnRespawnFinished");
		
		ABP_PlayerController_C_OnRespawnFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_PlayerController.BP_PlayerController_C.TogglePhotoModeInstructionsWidgetVisibility
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_PlayerController_C::TogglePhotoModeInstructionsWidgetVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.TogglePhotoModeInstructionsWidgetVisibility");
		
		ABP_PlayerController_C_TogglePhotoModeInstructionsWidgetVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_PlayerController.BP_PlayerController_C.OnChat
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void ABP_PlayerController_C::OnChat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnChat");
		
		ABP_PlayerController_C_OnChat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_PlayerController.BP_PlayerController_C.ToggleMap
	 * 		Flags  -> (Event, Protected, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlayerController_C::ToggleMap()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ToggleMap");
		
		ABP_PlayerController_C_ToggleMap_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerController_C::ExecuteUbergraph_BP_PlayerController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.ExecuteUbergraph_BP_PlayerController");
		
		ABP_PlayerController_C_ExecuteUbergraph_BP_PlayerController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function BP_PlayerController.BP_PlayerController_C.OnBeginTypeChat__DelegateSignature
	 * 		Flags  -> (Public, Delegate, BlueprintCallable, BlueprintEvent)
	 */
	void ABP_PlayerController_C::OnBeginTypeChat__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerController.BP_PlayerController_C.OnBeginTypeChat__DelegateSignature");
		
		ABP_PlayerController_C_OnBeginTypeChat__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PlayerController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PlayerController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerController.BP_PlayerController_C");
		return ptr;
	}

}


