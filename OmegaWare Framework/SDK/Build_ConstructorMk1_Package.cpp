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
	 * 		Name   -> Function Build_ConstructorMk1.Build_ConstructorMk1_C.GetManufacturingBackground
	 * 		Flags  -> (Public, HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class UTexture2D*                                  Texture                                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterial*                                   MaterialOptional                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_ConstructorMk1_C::GetManufacturingBackground(class UTexture2D** Texture, class UMaterial** MaterialOptional)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ConstructorMk1.Build_ConstructorMk1_C.GetManufacturingBackground");
		
		ABuild_ConstructorMk1_C_GetManufacturingBackground_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Texture != nullptr)
			*Texture = params.Texture;
		if (MaterialOptional != nullptr)
			*MaterialOptional = params.MaterialOptional;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ConstructorMk1.Build_ConstructorMk1_C.CheckOnProductionChange
	 * 		Flags  -> (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		bool                                               IsProducing                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABuild_ConstructorMk1_C::CheckOnProductionChange(bool IsProducing)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ConstructorMk1.Build_ConstructorMk1_C.CheckOnProductionChange");
		
		ABuild_ConstructorMk1_C_CheckOnProductionChange_Params params {};
		params.IsProducing = IsProducing;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x4C54A63A0
	 * 		Name   -> Function Build_ConstructorMk1.Build_ConstructorMk1_C.SetRTPCValue
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 */
	void ABuild_ConstructorMk1_C::SetRTPCValue()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Build_ConstructorMk1.Build_ConstructorMk1_C.SetRTPCValue");
		
		ABuild_ConstructorMk1_C_SetRTPCValue_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABuild_ConstructorMk1_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABuild_ConstructorMk1_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Build_ConstructorMk1.Build_ConstructorMk1_C");
		return ptr;
	}

}


