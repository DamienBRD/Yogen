#pragma once

#ifdef YG_PLATFORM_WINDOWS

extern Yogen::Application* Yogen::CreateApplication();

int main(int argc, char** argv) {
	auto app = Yogen::CreateApplication();
	app->Run();
	delete app;
}

#endif