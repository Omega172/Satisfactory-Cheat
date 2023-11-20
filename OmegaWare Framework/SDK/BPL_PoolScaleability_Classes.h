#pragma once

/**
 * Name: Satisfactory
 * Version: Early_Access_CL#264901
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
	 * BlueprintGeneratedClass BPL_PoolScaleability.BPL_PoolScaleability_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UBPL_PoolScaleability_C : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_GetLightScaleablity(class UObject* __WorldContext, TArray<bool>* ShadowSettings, TArray<bool>* DFShadowSettings);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
