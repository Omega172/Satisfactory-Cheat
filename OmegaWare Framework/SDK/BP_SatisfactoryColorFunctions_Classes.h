#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#273254
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_SatisfactoryColorFunctions.BP_SatisfactoryColorFunctions_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBP_SatisfactoryColorFunctions_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetSatisfactoryMidGray(class UObject* __WorldContext, struct FLinearColor* Color);
		void STATIC_GetSatisfactoryLightGray(class UObject* __WorldContext, struct FLinearColor* Color);
		void STATIC_GetSatisfactoryDarkGray(class UObject* __WorldContext, struct FLinearColor* Color);
		void STATIC_GetSatisfactoryWhite(class UObject* __WorldContext, struct FLinearColor* Color);
		void STATIC_GetSatisfactoryBlue(class UObject* __WorldContext, struct FLinearColor* Color);
		void STATIC_GetSatisfactoryOrange(class UObject* __WorldContext, struct FLinearColor* Color);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
