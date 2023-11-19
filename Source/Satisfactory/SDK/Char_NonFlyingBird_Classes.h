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
	 * BlueprintGeneratedClass Char_NonFlyingBird.Char_NonFlyingBird_C
	 * Size -> 0x0018 (FullSize[0x0A98] - InheritedSize[0x0A80])
	 */
	class AChar_NonFlyingBird_C : public ABP_Creature_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0A80(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             OnLandedDelegate;                                        // 0x0A88(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void MakePanic();
		void GainedSignificance();
		void LostSignificance();
		void UpdateSignificanceTickRate(float NewTickRate, bool bTickEnabled);
		void ReceiveTick(float DeltaSeconds);
		void ReceiveDied();
		void SetLuring(bool inLuring);
		void MultiCast_SetLuring(bool isLuring);
		void ExecuteUbergraph_Char_NonFlyingBird(int32_t EntryPoint);
		void OnLandedDelegate__DelegateSignature(class AChar_NonFlyingBird_C* selfPawn);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
