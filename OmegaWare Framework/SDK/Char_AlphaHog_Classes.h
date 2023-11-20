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
	 * BlueprintGeneratedClass Char_AlphaHog.Char_AlphaHog_C
	 * Size -> 0x0008 (FullSize[0x0A88] - InheritedSize[0x0A80])
	 */
	class AChar_AlphaHog_C : public ABP_Creature_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A80(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void ReceiveDied();
		void ExecuteUbergraph_Char_AlphaHog(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
