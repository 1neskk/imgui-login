#pragma once

#include "imgui.h"

class Theme
{
public:
	void Style();
	void Init();
	void InfLog();

	char Username[20];
	char Password[20];

	bool InfWindow = false;

private:
	bool loader_active = true;
	bool LoginCheck = false;
};
