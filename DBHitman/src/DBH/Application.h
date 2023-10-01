#pragma once
#include "Core.h"

namespace DBHitman
{

	class DBH_API Application
	{
	public:
		Application();
		virtual ~Application();
		void Run();
	};

	Application* CreateApplication();


}
