#pragma once

// Generate on Thu Mar 06 18:31:30 2025

/*</> These sdk were generated by the MONSTER tool
contact: @EspSAFE </>*/

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class CinematicCamera.CameraRig_Crane
// 0x0020 (0x0360 - 0x0340)
class ACameraRig_Crane : public AActor
{
public:
	float                                              CraneYaw;                                                 // 0x0340(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CraneArmLength;                                           // 0x0344(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockMountPitch;                                          // 0x0348(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bLockMountYaw;                                            // 0x0349(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x2];                                       // 0x034A(0x0002) MISSED OFFSET
	class USceneComponent*                             TransformComponent;                                       // 0x034C(0x0004) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CraneYawControl;                                          // 0x0350(0x0004) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CranePitchControl;                                        // 0x0354(0x0004) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             CraneCameraMount;                                         // 0x0358(0x0004) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x035C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CinematicCamera.CameraRig_Crane");
		return pStaticClass;
	}

};


// Class CinematicCamera.CameraRig_Rail
// 0x0010 (0x0350 - 0x0340)
class ACameraRig_Rail : public AActor
{
public:
	class USceneComponent*                             TransformComponent;                                       // 0x0340(0x0004) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USplineComponent*                            RailSplineComponent;                                      // 0x0344(0x0004) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	class USceneComponent*                             RailCameraMount;                                          // 0x0348(0x0004) (Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x034C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CinematicCamera.CameraRig_Rail");
		return pStaticClass;
	}

};


// Class CinematicCamera.CineCameraActor
// 0x0030 (0x08C0 - 0x0890)
class ACineCameraActor : public ACameraActor
{
public:
	struct FCameraLookatTrackingSettings               LookatTrackingSettings;                                   // 0x0890(0x0028) (Edit, BlueprintVisible)
	unsigned char                                      UnknownData00[0x8];                                       // 0x08B8(0x0008) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CinematicCamera.CineCameraActor");
		return pStaticClass;
	}


	class UCineCameraComponent* GetCineCameraComponent();
};


// Class CinematicCamera.CineCameraComponent
// 0x0090 (0x0920 - 0x0890)
class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraLensSettings                         LensSettings;                                             // 0x0890(0x0014) (Edit, BlueprintVisible, IsPlainOldData)
	struct FCameraFocusSettings                        FocusSettings;                                            // 0x08A4(0x0030) (Edit, BlueprintVisible)
	float                                              CurrentFocalLength;                                       // 0x08D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentAperture;                                          // 0x08D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              CurrentFocusDistance;                                     // 0x08DC(0x0004) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData)
	unsigned char                                      UnknownData00[0x8];                                       // 0x08E0(0x0008) MISSED OFFSET
	TArray<struct FNamedFilmbackPreset>                FilmbackPresets;                                          // 0x08E8(0x000C) (ZeroConstructor, Config)
	TArray<struct FNamedLensPreset>                    LensPresets;                                              // 0x08F4(0x000C) (ZeroConstructor, Config)
	struct FString                                     DefaultFilmbackPresetName;                                // 0x0900(0x000C) (ZeroConstructor, Config)
	struct FString                                     DefaultLensPresetName;                                    // 0x090C(0x000C) (ZeroConstructor, Config)
	float                                              DefaultLensFocalLength;                                   // 0x0918(0x0004) (ZeroConstructor, Config, IsPlainOldData)
	float                                              DefaultLensFStop;                                         // 0x091C(0x0004) (ZeroConstructor, Config, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class CinematicCamera.CineCameraComponent");
		return pStaticClass;
	}


	void SetLensPresetByName(const struct FString& InPresetName);
	void SetFilmbackPresetByName(const struct FString& InPresetName);
	float GetVerticalFieldOfView();
	struct FString GetLensPresetName();
	float GetHorizontalFieldOfView();
	struct FString GetFilmbackPresetName();
};


}

