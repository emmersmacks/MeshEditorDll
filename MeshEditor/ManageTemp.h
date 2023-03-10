#pragma once

namespace ManageTemp
{
#pragma pack (push, 4)
    struct vpsMSR
    {
        unsigned __int64 data;   
        unsigned int address;   
    };
#pragma pack (pop)

    struct vpsConfCounter
    {
        int address; 
        int number;  

        vpsMSR config[10]; 
        unsigned int configCount; 
    };

    struct vpsConfig
    {
        int processorsCount;

        int triangles[]; 
        unsigned int countersCount; 

        bool printToScreen;  
  
        wchar_t* activityName;
    };
}

