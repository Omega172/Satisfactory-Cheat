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
	 * Class ChaosCloth.ChaosClothConfig
	 * Size -> 0x00F0 (FullSize[0x0118] - InheritedSize[0x0028])
	 */
	class UChaosClothConfig : public UClothConfigCommon
	{
	public:
		EClothMassMode                                             MassMode;                                                // 0x0028(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5SCC[0x3];                                   // 0x0029(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UniformMass;                                             // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TotalMass;                                               // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Density;                                                 // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinPerParticleMass;                                      // 0x0038(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChaosClothWeightedValue                            EdgeStiffnessWeighted;                                   // 0x003C(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FChaosClothWeightedValue                            BendingStiffnessWeighted;                                // 0x0044(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseBendingElements;                                     // 0x004C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KOZK[0x3];                                   // 0x004D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BucklingRatio;                                           // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChaosClothWeightedValue                            BucklingStiffnessWeighted;                               // 0x0054(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FChaosClothWeightedValue                            AreaStiffnessWeighted;                                   // 0x005C(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      VolumeStiffness;                                         // 0x0064(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChaosClothWeightedValue                            TetherStiffness;                                         // 0x0068(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FChaosClothWeightedValue                            TetherScale;                                             // 0x0070(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseGeodesicDistance;                                    // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z0L0[0x3];                                   // 0x0079(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ShapeTargetStiffness;                                    // 0x007C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CollisionThickness;                                      // 0x0080(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrictionCoefficient;                                     // 0x0084(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCCD;                                                 // 0x0088(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSelfCollisions;                                      // 0x0089(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WQ85[0x2];                                   // 0x008A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SelfCollisionThickness;                                  // 0x008C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SelfCollisionFriction;                                   // 0x0090(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseSelfIntersections;                                   // 0x0094(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLegacyBackstop;                                      // 0x0095(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CMW0[0x2];                                   // 0x0096(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DampingCoefficient;                                      // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LocalDampingCoefficient;                                 // 0x009C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsePointBasedWindModel;                                 // 0x00A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I2OY[0x3];                                   // 0x00A1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FChaosClothWeightedValue                            Drag;                                                    // 0x00A4(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FChaosClothWeightedValue                            Lift;                                                    // 0x00AC(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseGravityOverride;                                     // 0x00B4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2YYY[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      GravityScale;                                            // 0x00B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PQFR[0x4];                                   // 0x00BC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Gravity;                                                 // 0x00C0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FChaosClothWeightedValue                            Pressure;                                                // 0x00D8(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FChaosClothWeightedValue                            AnimDriveStiffness;                                      // 0x00E0(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FChaosClothWeightedValue                            AnimDriveDamping;                                        // 0x00E8(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVector                                             LinearVelocityScale;                                     // 0x00F0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AngularVelocityScale;                                    // 0x0108(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FictitiousAngularScale;                                  // 0x010C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseTetrahedralConstraints;                              // 0x0110(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseThinShellVolumeConstraints;                          // 0x0111(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseContinuousCollisionDetection;                        // 0x0112(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E2YN[0x5];                                   // 0x0113(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosCloth.ChaosClothSharedSimConfig
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UChaosClothSharedSimConfig : public UClothSharedConfigCommon
	{
	public:
		int32_t                                                    IterationCount;                                          // 0x0028(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxIterationCount;                                       // 0x002C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SubdivisionCount;                                        // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLocalSpaceSimulation;                                // 0x0034(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseXPBDConstraints;                                     // 0x0035(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AQ8V[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosCloth.ChaosClothingSimulationFactory
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UChaosClothingSimulationFactory : public UClothingSimulationFactory
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosCloth.ChaosClothingInteractor
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UChaosClothingInteractor : public UClothingInteractor
	{
	public:
		unsigned char                                              UnknownData_KBFZ[0x10];                                  // 0x0030(0x0010) MISSED OFFSET (PADDING)

	public:
		void SetWind(const struct FVector2D& Drag, const struct FVector2D& Lift, float AirDensity, const struct FVector& WindVelocity);
		void SetVelocityScale(const struct FVector& LinearVelocityScale, float AngularVelocityScale, float FictitiousAngularScale);
		void SetPressure(const struct FVector2D& Pressure);
		void SetMaterialLinear(float EdgeStiffness, float BendingStiffness, float AreaStiffness);
		void SetMaterial(const struct FVector2D& EdgeStiffness, const struct FVector2D& BendingStiffness, const struct FVector2D& AreaStiffness);
		void SetLongRangeAttachmentLinear(float TetherStiffness, float TetherScale);
		void SetLongRangeAttachment(const struct FVector2D& TetherStiffness, const struct FVector2D& TetherScale);
		void SetGravity(float GravityScale, bool bIsGravityOverridden, const struct FVector& GravityOverride);
		void SetDamping(float DampingCoefficient, float LocalDampingCoefficient);
		void SetCollision(float CollisionThickness, float FrictionCoefficient, bool bUseCCD, float SelfCollisionThickness);
		void SetBackstop(bool bEnabled);
		void SetAnimDriveLinear(float AnimDriveStiffness);
		void SetAnimDrive(const struct FVector2D& AnimDriveStiffness, const struct FVector2D& AnimDriveDamping);
		void SetAerodynamics(float DragCoefficient, float LiftCoefficient, const struct FVector& WindVelocity);
		void ResetAndTeleport(bool bReset, bool bTeleport);
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosCloth.ChaosClothingSimulationInteractor
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UChaosClothingSimulationInteractor : public UClothingSimulationInteractor
	{
	public:
		unsigned char                                              UnknownData_HZZA[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
