#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"
#include "spdlog/sinks/stdout_color_sinks.h"

namespace Yogen {

	class YOGEN_API Log
	{
	public:
		Log();
		~Log();

		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
		
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};

}

// Core log macros
#define YG_CORE_ERROR(...)		::Yogen::Log::GetCoreLogger()->error(__VA_ARGS__)
#define YG_CORE_WARN(...)		::Yogen::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define YG_CORE_INFO(...)		::Yogen::Log::GetCoreLogger()->info(__VA_ARGS__)
#define YG_CORE_TRACE(...)		::Yogen::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define YG_CORE_FATAL(...)		::Yogen::Log::GetCoreLogger()->fatal(__VA_ARGS__)

// Client log macros
#define YG_ERROR(...)			::Yogen::Log::GetClientLogger()->error(__VA_ARGS__)
#define YG_WARN(...)			::Yogen::Log::GetClientLogger()->warn(__VA_ARGS__)
#define YG_INFO(...)			::Yogen::Log::GetClientLogger()->info(__VA_ARGS__)
#define YG_TRACE(...)			::Yogen::Log::GetClientLogger()->trace(__VA_ARGS__)
#define YG_FATAL(...)			::Yogen::Log::GetClientLogger()->fatal(__VA_ARGS__)
