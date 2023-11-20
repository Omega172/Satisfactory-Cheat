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
	 * Class ChaosVehicles.ChaosVehicleMovementComponent
	 * Size -> 0x07D0 (FullSize[0x0930] - InheritedSize[0x0160])
	 */
	class UChaosVehicleMovementComponent : public UPawnMovementComponent
	{
	public:
		bool                                                       bReverseAsBrake : 1;                                     // 0x0160(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bThrottleAsBrake : 1;                                    // 0x0160(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_77WB[0x3];                                   // 0x0161(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Mass;                                                    // 0x0164(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnableCenterOfMassOverride;                             // 0x0168(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GL0O[0x7];                                   // 0x0169(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             CenterOfMassOverride;                                    // 0x0170(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChassisWidth;                                            // 0x0188(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ChassisHeight;                                           // 0x018C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DragCoefficient;                                         // 0x0190(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DownforceCoefficient;                                    // 0x0194(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DragArea;                                                // 0x0198(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugDragMagnitude;                                      // 0x019C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             InertiaTensorScale;                                      // 0x01A0(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SleepThreshold;                                          // 0x01B8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SleepSlopeLimit;                                         // 0x01BC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FVehicleAerofoilConfig>                      Aerofoils;                                               // 0x01C0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVehicleThrustConfig>                        Thrusters;                                               // 0x01D0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVehicleTorqueControlConfig                         TorqueControl;                                           // 0x01E0(0x0040) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVehicleTargetRotationControlConfig                 TargetRotationControl;                                   // 0x0220(0x0058) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVehicleStabilizeControlConfig                      StabilizeControl;                                        // 0x0278(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X05L[0x4];                                   // 0x0290(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bRawHandbrakeInput : 1;                                  // 0x0294(0x0001) BIT_FIELD Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRawGearUpInput : 1;                                     // 0x0294(0x0001) BIT_FIELD Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRawGearDownInput : 1;                                   // 0x0294(0x0001) BIT_FIELD Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_98R4[0x3];                                   // 0x0295(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bWasAvoidanceUpdated : 1;                                // 0x0298(0x0001) BIT_FIELD Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B4DS[0x3];                                   // 0x0299(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bParkEnabled : 1;                                        // 0x029C(0x0001) BIT_FIELD Transient, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1RGT[0x33];                                  // 0x029D(0x0033) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVehicleReplicatedState                             ReplicatedState;                                         // 0x02D0(0x0028) Net, Transient, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_B98H[0x4];                                   // 0x02F8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RawSteeringInput;                                        // 0x02FC(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RawThrottleInput;                                        // 0x0300(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RawBrakeInput;                                           // 0x0304(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RawPitchInput;                                           // 0x0308(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RawRollInput;                                            // 0x030C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RawYawInput;                                             // 0x0310(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      SteeringInput;                                           // 0x0314(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ThrottleInput;                                           // 0x0318(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BrakeInput;                                              // 0x031C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PitchInput;                                              // 0x0320(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      RollInput;                                               // 0x0324(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      YawInput;                                                // 0x0328(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      HandbrakeInput;                                          // 0x032C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRequiresControllerForInputs;                            // 0x0330(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZUM8[0x3];                                   // 0x0331(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      IdleBrakeInput;                                          // 0x0334(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      StopThreshold;                                           // 0x0338(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      WrongDirectionThreshold;                                 // 0x033C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FVehicleInputRateConfig                             ThrottleInputRate;                                       // 0x0340(0x0098) Edit, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		struct FVehicleInputRateConfig                             BrakeInputRate;                                          // 0x03D8(0x0098) Edit, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		struct FVehicleInputRateConfig                             SteeringInputRate;                                       // 0x0470(0x0098) Edit, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		struct FVehicleInputRateConfig                             HandbrakeInputRate;                                      // 0x0508(0x0098) Edit, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		struct FVehicleInputRateConfig                             PitchInputRate;                                          // 0x05A0(0x0098) Edit, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		struct FVehicleInputRateConfig                             RollInputRate;                                           // 0x0638(0x0098) Edit, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		struct FVehicleInputRateConfig                             YawInputRate;                                            // 0x06D0(0x0098) Edit, AdvancedDisplay, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Z5LB[0x1A0];                                 // 0x0768(0x01A0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AController*                                         OverrideController;                                      // 0x0908(0x0008) Net, ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_FVGQ[0x20];                                  // 0x0910(0x0020) MISSED OFFSET (PADDING)

	public:
		void SetYawInput(float Yaw);
		void SetUseAutomaticGears(bool bUseAuto);
		void SetThrottleInput(float Throttle);
		void SetTargetGear(int32_t GearNum, bool bImmediate);
		void SetSteeringInput(float Steering);
		void SetSleeping(bool bEnableSleep);
		void SetRollInput(float Roll);
		void SetRequiresControllerForInputs(bool bRequiresController);
		void SetPitchInput(float Pitch);
		void SetParked(bool bParked);
		void SetHandbrakeInput(bool bNewHandbrake);
		void SetChangeUpInput(bool bNewGearUp);
		void SetChangeDownInput(bool bNewGearDown);
		void SetBrakeInput(float Brake);
		void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t InCurrentGear, float InRollInput, float InPitchInput, float InYawInput);
		void ResetVehicle();
		bool IsParked();
		void IncreaseThrottleInput(float ThrottleDelta);
		bool GetUseAutoGears();
		float GetThrottleInput();
		int32_t GetTargetGear();
		float GetSteeringInput();
		bool GetHandbrakeInput();
		float GetForwardSpeedMPH();
		float GetForwardSpeed();
		int32_t GetCurrentGear();
		float GetBrakeInput();
		void EnableSelfRighting(bool InState);
		void DecreaseThrottleInput(float ThrottleDelta);
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosVehicles.ChaosVehicleWheel
	 * Size -> 0x02B8 (FullSize[0x02E0] - InheritedSize[0x0028])
	 */
	class UChaosVehicleWheel : public UObject
	{
	public:
		class UStaticMesh*                                         CollisionMesh;                                           // 0x0028(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAxleType                                                  AxleType;                                                // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MIC6[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Offset;                                                  // 0x0038(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WheelRadius;                                             // 0x0050(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WheelWidth;                                              // 0x0054(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WheelMass;                                               // 0x0058(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CorneringStiffness;                                      // 0x005C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FrictionForceMultiplier;                                 // 0x0060(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SideSlipModifier;                                        // 0x0064(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlipThreshold;                                           // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SkidThreshold;                                           // 0x006C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxSteerAngle;                                           // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectedBySteering;                                     // 0x0074(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectedByBrake;                                        // 0x0075(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectedByHandbrake;                                    // 0x0076(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAffectedByEngine;                                       // 0x0077(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bABSEnabled;                                             // 0x0078(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTractionControlEnabled;                                 // 0x0079(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SHPG[0x2];                                   // 0x007A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxWheelspinRotation;                                    // 0x007C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETorqueCombineMethod                                       ExternalTorqueCombineMethod;                             // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T9Y9[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRuntimeFloatCurve                                  LateralSlipGraph;                                        // 0x0088(0x0088) Edit, NativeAccessSpecifierPublic
		struct FVector                                             SuspensionAxis;                                          // 0x0110(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             SuspensionForceOffset;                                   // 0x0128(0x0018) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SuspensionMaxRaise;                                      // 0x0140(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SuspensionMaxDrop;                                       // 0x0144(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SuspensionDampingRatio;                                  // 0x0148(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WheelLoadRatio;                                          // 0x014C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpringRate;                                              // 0x0150(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpringPreload;                                           // 0x0154(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SuspensionSmoothing;                                     // 0x0158(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RollbarScaling;                                          // 0x015C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESweepShape                                                SweepShape;                                              // 0x0160(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESweepType                                                 SweepType;                                               // 0x0161(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SVZH[0x2];                                   // 0x0162(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxBrakeTorque;                                          // 0x0164(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHandBrakeTorque;                                      // 0x0168(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OWIC[0x4];                                   // 0x016C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChaosWheeledVehicleMovementComponent*               VehicleComponent;                                        // 0x0170(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WheelIndex;                                              // 0x0178(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugLongSlip;                                           // 0x017C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugLatSlip;                                            // 0x0180(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugNormalizedTireLoad;                                 // 0x0184(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QEGY[0x4];                                   // 0x0188(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DebugWheelTorque;                                        // 0x018C(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugLongForce;                                          // 0x0190(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DebugLatForce;                                           // 0x0194(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Location;                                                // 0x0198(0x0018) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             OldLocation;                                             // 0x01B0(0x0018) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             Velocity;                                                // 0x01C8(0x0018) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_67XV[0x100];                                 // 0x01E0(0x0100) MISSED OFFSET (PADDING)

	public:
		bool IsInAir();
		float GetWheelRadius();
		float GetWheelAngularVelocity();
		float GetSuspensionOffset();
		struct FVector GetSuspensionAxis();
		float GetSteerAngle();
		float GetRotationAngularVelocity();
		float GetRotationAngle();
		EAxleType GetAxleType();
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosVehicles.ChaosWheeledVehicleMovementComponent
	 * Size -> 0x0318 (FullSize[0x0C48] - InheritedSize[0x0930])
	 */
	class UChaosWheeledVehicleMovementComponent : public UChaosVehicleMovementComponent
	{
	public:
		TArray<struct FChaosWheelSetup>                            WheelSetups;                                             // 0x0930(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FCollisionResponseContainer                         WheelTraceCollisionResponses;                            // 0x0940(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bMechanicalSimEnabled;                                   // 0x0960(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4F2E[0x7];                                   // 0x0961(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVehicleEngineConfig                                EngineSetup;                                             // 0x0968(0x00C8) Edit, NativeAccessSpecifierPublic
		struct FVehicleDifferentialConfig                          DifferentialSetup;                                       // 0x0A30(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FVehicleTransmissionConfig                          TransmissionSetup;                                       // 0x0A40(0x0070) Edit, NativeAccessSpecifierPublic
		struct FVehicleSteeringConfig                              SteeringSetup;                                           // 0x0AB0(0x00D8) Edit, NativeAccessSpecifierPublic
		TArray<class UChaosVehicleWheel*>                          Wheels;                                                  // 0x0B88(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_16KL[0xB0];                                  // 0x0B98(0x00B0) Fix size for supers

	public:
		void SetWheelSlipGraphMultiplier(int32_t WheelIndex, float Multiplier);
		void SetWheelRadius(int32_t WheelIndex, float Radius);
		void SetWheelMaxSteerAngle(int32_t WheelIndex, float AngleDegrees);
		void SetWheelMaxBrakeTorque(int32_t WheelIndex, float Torque);
		void SetWheelHandbrakeTorque(int32_t WheelIndex, float Torque);
		void SetWheelFrictionMultiplier(int32_t WheelIndex, float Friction);
		void SetWheelClass(int32_t WheelIndex, class UClass* InWheelClass);
		void SetTractionControlEnabled(int32_t WheelIndex, bool Enabled);
		void SetTorqueCombineMethod(ETorqueCombineMethod InCombineMethod, int32_t WheelIndex);
		void SetSuspensionParams(float Rate, float Damping, float Preload, float MaxRaise, float MaxDrop, int32_t WheelIndex);
		void SetSnapshot(const struct FWheeledSnaphotData& SnapshotIn);
		void SetMaxEngineTorque(float Torque);
		void SetDriveTorque(float DriveTorque, int32_t WheelIndex);
		void SetDragCoefficient(float DragCoeff);
		void SetDownforceCoefficient(float DownforceCoeff);
		void SetDifferentialFrontRearSplit(float FrontRearSlpit);
		void SetBrakeTorque(float BrakeTorque, int32_t WheelIndex);
		void SetAffectedBySteering(int32_t WheelIndex, bool Enabled);
		void SetAffectedByHandbrake(int32_t WheelIndex, bool Enabled);
		void SetAffectedByEngine(int32_t WheelIndex, bool Enabled);
		void SetAffectedByBrake(int32_t WheelIndex, bool Enabled);
		void SetABSEnabled(int32_t WheelIndex, bool Enabled);
		struct FWheelStatus STATIC_MakeWheelStatus(bool bInContact, struct FVector* ContactPoint, class UPhysicalMaterial* PhysMaterial, float NormalizedSuspensionLength, float SpringForce, float SlipAngle, bool bIsSlipping, float SlipMagnitude, bool bIsSkidding, float SkidMagnitude, struct FVector* SkidNormal, float DriveTorque, float BrakeTorque, bool bABSActivated);
		struct FWheelSnapshot STATIC_MakeWheelSnapshot(float SuspensionOffset, float WheelRotationAngle, float SteeringAngle, float WheelRadius, float WheelAngularVelocity);
		struct FWheeledSnaphotData STATIC_MakeWheeledSnapshot(const struct FTransform& Transform, const struct FVector& LinearVelocity, const struct FVector& AngularVelocity, int32_t SelectedGear, float EngineRPM, TArray<struct FWheelSnapshot> WheelSnapshots);
		struct FWheelStatus GetWheelState(int32_t WheelIndex);
		struct FWheeledSnaphotData GetSnapshot();
		int32_t GetNumWheels();
		float GetEngineRotationSpeed();
		float GetEngineMaxRotationSpeed();
		void EnableWheelFriction(bool InState);
		void EnableSuspension(bool InState);
		void EnableMechanicalSim(bool InState);
		void STATIC_BreakWheelStatus(const struct FWheelStatus& Status, bool* bInContact, struct FVector* ContactPoint, class UPhysicalMaterial** PhysMaterial, float* NormalizedSuspensionLength, float* SpringForce, float* SlipAngle, bool* bIsSlipping, float* SlipMagnitude, bool* bIsSkidding, float* SkidMagnitude, struct FVector* SkidNormal, float* DriveTorque, float* BrakeTorque, bool* bABSActivated);
		void STATIC_BreakWheelSnapshot(const struct FWheelSnapshot& Snapshot, float* SuspensionOffset, float* WheelRotationAngle, float* SteeringAngle, float* WheelRadius, float* WheelAngularVelocity);
		void STATIC_BreakWheeledSnapshot(const struct FWheeledSnaphotData& Snapshot, struct FTransform* Transform, struct FVector* LinearVelocity, struct FVector* AngularVelocity, int32_t* SelectedGear, float* EngineRPM, TArray<struct FWheelSnapshot>* WheelSnapshots);
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosVehicles.VehicleAnimationInstance
	 * Size -> 0x08C8 (FullSize[0x0C10] - InheritedSize[0x0348])
	 */
	class UVehicleAnimationInstance : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_YB85[0x8];                                   // 0x0348(0x0008) Fix Super Size
		unsigned char                                              UnknownData_VY48[0x8B0];                                 // 0x0350(0x08B0) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UChaosWheeledVehicleMovementComponent*               WheeledVehicleComponent;                                 // 0x0C00(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B4BI[0x8];                                   // 0x0C08(0x0008) MISSED OFFSET (PADDING)

	public:
		class AWheeledVehiclePawn* GetVehicle();
		static UClass* StaticClass();
	};

	/**
	 * Class ChaosVehicles.WheeledVehiclePawn
	 * Size -> 0x0010 (FullSize[0x0390] - InheritedSize[0x0380])
	 */
	class AWheeledVehiclePawn : public APawn
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0380(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UChaosVehicleMovementComponent*                      VehicleMovementComponent;                                // 0x0388(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
