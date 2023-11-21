#pragma once
#include "pch.h"


class PlayerMod : public Feature
{
private:
	bool Initalized = false;

	KeyBindToggle SpeedHackKey = KeyBindToggle(ImGuiKey_V);
	bool bSettingSpeedHackKey = false;
	float fSpeedHackFactor = 10.f;

	bool bSpeedSwitch = false;
	float fOldSprintSpeed = 0;
	float fOldAcceleration = 0;

public:
	PlayerMod() {};

	bool Setup() override;

	void Destroy() override;

	virtual void HandleKeys() override { SpeedHackKey.HandleToggle(); };

	virtual void DrawMenuItems() override;

	virtual void Render() override {};

	virtual void Run() override;
};