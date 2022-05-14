#pragma once

#ifdef CD_PLATFORM_WINDOWS
	#ifdef CD_BUILD_DLL
		#define CEDAR_API __declspec(dllexport)
	#else
		#define CEDAR_API __declspec(dllimport)
	#endif
#else
	#error Cedar only supports Windows!
#endif