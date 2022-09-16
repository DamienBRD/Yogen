#pragma once

#ifdef YG_PLATFORM_WINDOWS
	#ifdef YG_BUILD_DLL
		#define YOGEN_API __declspec(dllexport)
	#else
		#define YOGEN_API __declspec(dllimport)
	#endif
#else
	#error Yogen only support Windows!
#endif
