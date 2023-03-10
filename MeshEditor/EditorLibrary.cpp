#define _CRT_SECURE_NO_WARNINGS

#include "EditorLibrary.h"

#include <string>
#include <windows.h>
//#include "dllmain.cpp"

int ping()
{
    return 7;
}

void InitConfig2(ManageTemp::vpsConfig* conf)
{
    conf->processorsCount = 3;
    conf->countersCount = 23;
    conf->triangles[0] = 5;
    conf->triangles[1] = 3;
}
