#pragma once

#ifdef DBH_PLATFORM_WINDOWS
	#ifdef DBH_BUILD_DLL
#define DBH_API __declspec(dllexport)
	#else
#define DBH_API __declspec(dllexport)
	#endif // DBH_BUILD_DLL
#else
#error DBH Only supports Windows
#endif // HZ_PLATFORM_WINDOWS
