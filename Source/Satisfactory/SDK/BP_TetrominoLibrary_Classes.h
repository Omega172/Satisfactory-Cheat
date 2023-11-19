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
	 * BlueprintGeneratedClass BP_TetrominoLibrary.BP_TetrominoLibrary_C
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UBP_TetrominoLibrary_C : public UObject
	{
	public:
		TMap<class UClass*, struct FStruct_TetrominoData>          mTetrominoData;                                          // 0x0028(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void GetTetrominoData(TMap<class UClass*, struct FStruct_TetrominoData>* mTetrominoData);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
