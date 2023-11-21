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

		if (SpeedHackKey.IsToggled())
			ImGui::SliderFloat("Speed Factor", &fSpeedHackFactor, 1.f, 100.f);
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
}
