#pragma once

#ifdef EDITORLIBRARY_EXPORTS
#define EDITORLIBRARY_API __declspec(dllexport)
#else
#define EDITORLIBRARY_API __declspec(dllimport)
#endif

#include "ManageTemp.h"

extern "C" EDITORLIBRARY_API int ping();

extern "C" EDITORLIBRARY_API void InitConfig2(ManageTemp::vpsConfig* conf);
