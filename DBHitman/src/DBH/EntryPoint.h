#pragma once

#ifdef DBH_PLATFORM_WINDOWS
#include "Application.h"
extern DBHitman::Application* DBHitman::CreateApplication();

int main(int argc, char** argv)
{
	//
	auto app = DBHitman::CreateApplication();
	app->Run();
	delete app;
}

#endif
