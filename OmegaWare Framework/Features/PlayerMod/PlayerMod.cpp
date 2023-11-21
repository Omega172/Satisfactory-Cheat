#include "pch.h"
#include "PlayerMod.h"

bool PlayerMod::Setup()
{
	// Do any needed setup

	this->Initalized = true;

	Utils::LogDebug(Utils::GetLocation(CurrentLoc), "Feature: PlayerMod Initalized");

	return this->Initalized;
}

void PlayerMod::Destroy()
{
	if (!this->Initalized)
		return;

	// Reset any values to defaults

	Utils::LogDebug(Utils::GetLocation(CurrentLoc), "Feature: ESP Destroyed");
	this->Initalized = false;
}

void PlayerMod::DrawMenuItems()
{
	ImGui::SameLine();

	ImGui::BeginChild("Player Modifications", ImVec2(ImGui::GetContentRegionAvail().x, ImGui::GetContentRegionAvail().y), true);
	{
		ImGui::Text("Player Modifications");
		ImGui::Spacing();

		ImGui::Text("Speedhack:");
		ImGui::SameLine();
		ImGui::Hotkey("#Speedhack", SpeedHackKey, &bSettingSpeedHackKey, { 0.f, 0.f });
		ImGui::SliderFloat("Speed Factor", &fSpeedHackFactor, 1.f, 100.f);

		ImGui::Text("Teleport to Highlighted Marker:");
		ImGui::SameLine();
		ImGui::Hotkey("#TP", TeleportKey, &bSettingTeleportKey, { 0.f, 0.f });
		ImGui::SliderInt("Vertical Offset", &iTeleportOffset, 0, 500);
	}
	ImGui::EndChild();
}

void PlayerMod::Run()
{
	Unreal* pUnreal = Cheat::unreal.get();
	if (!pUnreal)
		return;

	CG::AFGCharacterPlayer* FGPlayer = pUnreal->GetFGPlayer();
	if (!FGPlayer)
		return;

	CG::UFGCharacterMovementComponent* MovementComponent = FGPlayer->GetFGMovementComponent();
	if (!MovementComponent)
		return;

	if (SpeedHackKey.IsToggled())
	{
		if (MovementComponent->GetIsSprinting())
		{
			if (!bSpeedSwitch)
			{
				fOldSprintSpeed = MovementComponent->mMaxSprintSpeed;
				fOldAcceleration = MovementComponent->MaxAcceleration;

				MovementComponent->mMaxSprintSpeed = fOldSprintSpeed * fSpeedHackFactor;
				MovementComponent->MaxAcceleration = fOldAcceleration * fSpeedHackFactor;

				bSpeedSwitch = true;
			}
		}
		else
		{
			if (bSpeedSwitch)
			{
				MovementComponent->mMaxSprintSpeed = fOldSprintSpeed;
				MovementComponent->MaxAcceleration = fOldAcceleration;

				bSpeedSwitch = false;
			}
		}
	}
	else if (bSpeedSwitch)
	{
		MovementComponent->mMaxSprintSpeed = fOldSprintSpeed;
		MovementComponent->MaxAcceleration = fOldAcceleration;

		bSpeedSwitch = false;
	}

	if (TeleportKey.IsDown())
	{
		CG::AFGGameState* GameState = Cheat::unreal.get()->GetGameState();
		if (!GameState)
			return;

		CG::AFGMapManager* MapManager = GameState->mMapManager;
		if (!MapManager)
			return;

		CG::TArray<CG::FMapMarker> MapMarkers;
		MapManager->GetMapMarkers(&MapMarkers);

		for (int32_t i = 0; i < MapMarkers.Count(); i++)
		{
			if (!MapMarkers.IsValidIndex(i))
				continue;

			CG::FMapMarker MapMarker = MapMarkers[i];

			bool bIsHighlighted;
			bool bIsLPHighlighted;

			MapManager->IsMarkerHighlighted(MapMarker, &bIsHighlighted, &bIsLPHighlighted);

			CG::FVector Location = MapMarker.Location;
			Location.Z = Location.Z + iTeleportOffset;

			if (bIsLPHighlighted)
			{
				CG::FHitResult HitResult;
				FGPlayer->K2_SetActorLocation(Location, false, &HitResult, true);
			}
		}
	}
}
