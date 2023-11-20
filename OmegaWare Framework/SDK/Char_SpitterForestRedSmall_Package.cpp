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
	 * 		Name   -> Function Char_SpitterForestRedSmall.Char_SpitterForestRedSmall_C.UserConstructionScript
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AChar_SpitterForestRedSmall_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SpitterForestRedSmall.Char_SpitterForestRedSmall_C.UserConstructionScript");
		
		AChar_SpitterForestRedSmall_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Char_SpitterForestRedSmall.Char_SpitterForestRedSmall_C.ReceiveDied
	 * 		Flags  -> (Event, Public, BlueprintCallable, BlueprintEvent)
	 */
	void AChar_SpitterForestRedSmall_C::ReceiveDied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SpitterForestRedSmall.Char_SpitterForestRedSmall_C.ReceiveDied");
		
		AChar_SpitterForestRedSmall_C_ReceiveDied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Char_SpitterForestRedSmall.Char_SpitterForestRedSmall_C.NotifyOnTakeDamage
	 * 		Flags  -> (Event, Public, BlueprintEvent)
	 * Parameters:
	 * 		class AActor*                                      DamagedActor                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              DamageAmount                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UDamageType*                                 DamageType                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AController*                                 InstigatedBy                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      DamageCauser                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AChar_SpitterForestRedSmall_C::NotifyOnTakeDamage(class AActor* DamagedActor, float DamageAmount, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SpitterForestRedSmall.Char_SpitterForestRedSmall_C.NotifyOnTakeDamage");
		
		AChar_SpitterForestRedSmall_C_NotifyOnTakeDamage_Params params {};
		params.DamagedActor = DamagedActor;
		params.DamageAmount = DamageAmount;
		params.DamageType = DamageType;
		params.InstigatedBy = InstigatedBy;
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Char_SpitterForestRedSmall.Char_SpitterForestRedSmall_C.ReceiveBeginPlay
	 * 		Flags  -> (Event, Protected, BlueprintEvent)
	 */
	void AChar_SpitterForestRedSmall_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SpitterForestRedSmall.Char_SpitterForestRedSmall_C.ReceiveBeginPlay");
		
		AChar_SpitterForestRedSmall_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Char_SpitterForestRedSmall.Char_SpitterForestRedSmall_C.ExecuteUbergraph_Char_SpitterForestRedSmall
	 * 		Flags  -> (Final, HasDefaults)
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AChar_SpitterForestRedSmall_C::ExecuteUbergraph_Char_SpitterForestRedSmall(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Char_SpitterForestRedSmall.Char_SpitterForestRedSmall_C.ExecuteUbergraph_Char_SpitterForestRedSmall");
		
		AChar_SpitterForestRedSmall_C_ExecuteUbergraph_Char_SpitterForestRedSmall_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AChar_SpitterForestRedSmall_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AChar_SpitterForestRedSmall_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Char_SpitterForestRedSmall.Char_SpitterForestRedSmall_C");
		return ptr;
	}

}


