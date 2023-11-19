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
	 * BlueprintGeneratedClass BP_Train.BP_Train_C
	 * Size -> 0x0000 (FullSize[0x0520] - InheritedSize[0x0520])
	 */
	class ABP_Train_C : public AFGTrain
	{
	public:
		class UTexture2D* GetActorRepresentationTextureInternal();
		struct FLinearColor GetActorRepresentationColorInternal();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
