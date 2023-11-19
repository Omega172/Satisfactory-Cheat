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
	 * BlueprintGeneratedClass Build_TetrominoGame_Computer.Build_TetrominoGame_Computer_C
	 * Size -> 0x0010 (FullSize[0x05E8] - InheritedSize[0x05D8])
	 */
	class ABuild_TetrominoGame_Computer_C : public AFGBuildable
	{
	public:
		unsigned char                                              UnknownData_WPVI[0x8];                                   // 0x05D8(0x0008) Fix Super Size
		class UStaticMeshComponent*                                HitBox;                                                  // 0x05E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash

	public:
		bool ShouldSave();
		class FText GetLookAtDecription(class AFGCharacterPlayer* byCharacter, const struct FUseState& State);
		bool CanDismantle();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
