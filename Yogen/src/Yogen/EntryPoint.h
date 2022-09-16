#pragma once

#ifdef YG_PLATFORM_WINDOWS

extern Yogen::Application* Yogen::CreateApplication();

int main(int argc, char** argv) {
	Yogen::Log::Init();
	YG_CORE_WARN("Initialized log!");
	YG_INFO("Info!");
	YG_TRACE("trace");
	int a{ 5 };
	YG_ERROR("erreur :{0}", a);

	auto app = Yogen::CreateApplication();
	app->Run();
	delete app;
}

#endif