#pragma once

#include "Core.h"

namespace Yogen {

	class YOGEN_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in client
	Application* CreateApplication();

}
