#pragma once
#include <map>
#include <string>

struct ScreenResolution
{
    int screenX;
    int screenY;
};

struct VideoMode
{
  public:
    void* vftable;
    std::string name;
    int platformID;
    int forceOrientation;
    float aspectRatio;
    ScreenResolution defaultScreenResolution;

    void Print()
    {
        printf("VIDEOMODE: %s - platformID=%d forceOrientation=%d aspectRatio=%.2f "
               "defaultScreenResolution.screenX=%d defaultScreenResolution.screenY=%d\n",
               name.c_str(), platformID, forceOrientation, aspectRatio,
               defaultScreenResolution.screenX, defaultScreenResolution.screenY);
    }
};
static_assert(sizeof(VideoMode) == 64, "VideoMode struct size mismatch.");
class VideoModeManager
{
  public:
    ScreenResolution actualScreenResolution;
    std::map<std::string, VideoMode*> videoModes;
    VideoMode* currentVideoMode;
};
static_assert(sizeof(VideoModeManager) == 32, "VideoModeManager class size mismatch.");
