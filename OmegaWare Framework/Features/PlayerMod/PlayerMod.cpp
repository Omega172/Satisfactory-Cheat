#include "pch.h"
#include "PlayerMod.h"

bool PlayerMod::Setup()
{
	std::vector<LocaleData> EnglishLocale = {
		{ HASH("PLAYER_MODIFICATIONS"), "Player Modifications" },
		{ HASH("SPEEDHACK"), "Speedhack:" },
		{ HASH("SPEED_FACTOR"), "Speed Factor" },
		{ HASH("TELEPORT_TEXT"), "Teleport to Highlighted Marker:" },
		{ HASH("VERTICAL_OFFSET"), "Vertical Offset" },
	};
	if (!Cheat::localization->AddToLocale("ENG", EnglishLocale))
		return false;

	Cheat::localization->UpdateLocale();

	Utils::LogDebug(Utils::GetLocation(CurrentLoc), "Feature: PlayerMod Initialized");

	Initialized = true;
	return Initialized;
}

void PlayerMod::Destroy()
{
	if (!Initialized)
		return;

	// Reset any values to defaults

	Utils::LogDebug(Utils::GetLocation(CurrentLoc), "Feature: ESP Destroyed");
	Initialized = false;
}

void PlayerMod::PopulateMenu()
{
	Child* PlayerMod = new Child("Player Modifications", []() { return ImVec2(ImGui::GetContentRegionAvail().x, ImGui::GetContentRegionAvail().y); }, ImGuiChildFlags_Border);
	PlayerMod->AddElement(new Text(Cheat::localization->Get("PLAYER_MODIFICATIONS")));
	PlayerMod->AddElement(new Spacing());
	PlayerMod->AddElement(new Text(Cheat::localization->Get("SPEEDHACK")));
	PlayerMod->AddElement(new Hotkey("##SPEEDHACK_KEY", &SpeedHackKey), true);
	PlayerMod->AddElement(new SliderFloat(Cheat::localization->Get("SPEED_FACTOR"), &fSpeedHackFactor, 1.f, 100.f));
	PlayerMod->AddElement(new Text(Cheat::localization->Get("TELEPORT_TEXT")));
	PlayerMod->AddElement(new Hotkey("##TP", &TeleportKey), true);
	PlayerMod->AddElement(new SliderInt(Cheat::localization->Get("VERTICAL_OFFSET"), &iTeleportOffset, 0, 500));

	Cheat::menu->AddElement(PlayerMod, true);
}

void PlayerMod::HandleKeys()
{
	SpeedHackKey.HandleToggle();

	CG::AFGCharacterPlayer* FGPlayer = reinterpret_cast<CG::AFGCharacterPlayer*>(Cheat::unreal->GetAcknowledgedPawn());
	if (!IsValidObjectPtr(FGPlayer))
		return;

	CG::UFGCharacterMovementComponent* MovementComponent = FGPlayer->GetFGMovementComponent();
	if (!IsValidObjectPtr(MovementComponent))
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

	if (TeleportKey.IsPressed())
	{
		CG::AFGGameState* GameState = reinterpret_cast<CG::AFGGameState*>(Cheat::unreal->GetGameStateBase());
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

void PlayerMod::SaveConfig()
{
	Cheat::config->PushEntry("SPEEDHACK_KEY", "int", std::to_string(SpeedHackKey.key));
	Cheat::config->PushEntry("SPEED_FACTOR", "float", std::to_string(fSpeedHackFactor));
	Cheat::config->PushEntry("TELEPORT_KEY", "int", std::to_string(TeleportKey.key));
	Cheat::config->PushEntry("VERTICAL_OFFSET", "int", std::to_string(iTeleportOffset));
}

void PlayerMod::LoadConfig()
{
	ConfigEntry entry = Cheat::config->GetEntryByName("SPEEDHACK_KEY");
	if (entry.Name == "SPEEDHACK_KEY")
		SpeedHackKey.key = static_cast<ImGuiKey>(std::stoi(entry.Value));

	entry = Cheat::config->GetEntryByName("SPEED_FACTOR");
	if (entry.Name == "SPEED_FACTOR")
		fSpeedHackFactor = std::stof(entry.Value);

	entry = Cheat::config->GetEntryByName("TELEPORT_KEY");
	if (entry.Name == "TELEPORT_KEY")
		TeleportKey.key = static_cast<ImGuiKey>(std::stoi(entry.Value));

	entry = Cheat::config->GetEntryByName("VERTICAL_OFFSET");
	if (entry.Name == "VERTICAL_OFFSET")
		iTeleportOffset = std::stoi(entry.Value);
}
