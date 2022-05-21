#pragma once

#include <string>

#ifdef CONFIGURATIONLIB_EXPORTS
#define CONFIGURATIONLIB_API __declspec(dllexport)
#else
#define CONFIGURATIONLIB_API __declspec(dllimport)
#endif

extern "C" CONFIGURATIONLIB_API std::string Version();
extern "C" CONFIGURATIONLIB_API std::string Key();
extern "C" CONFIGURATIONLIB_API std::string Environment();

