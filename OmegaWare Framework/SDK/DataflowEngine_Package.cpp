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
	 * 		RVA    -> 0x4AEAD4F00
	 * 		Name   -> Function DataflowEngine.DataflowBlueprintLibrary.EvaluateTerminalNodeByName
	 * 		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UDataflow*                                   Dataflow                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        TerminalNodeName                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UObject*                                     ResultAsset                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UDataflowBlueprintLibrary::STATIC_EvaluateTerminalNodeByName(class UDataflow* Dataflow, const class FName& TerminalNodeName, class UObject* ResultAsset)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function DataflowEngine.DataflowBlueprintLibrary.EvaluateTerminalNodeByName");
		
		UDataflowBlueprintLibrary_EvaluateTerminalNodeByName_Params params {};
		params.Dataflow = Dataflow;
		params.TerminalNodeName = TerminalNodeName;
		params.ResultAsset = ResultAsset;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataflowBlueprintLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataflowBlueprintLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DataflowEngine.DataflowBlueprintLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataflowEdNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataflowEdNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DataflowEngine.DataflowEdNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDataflow.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDataflow::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class DataflowEngine.Dataflow");
		return ptr;
	}

}


