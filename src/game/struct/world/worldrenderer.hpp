#pragma once

#include "game/struct/graphics/background.hpp"
#include "game/struct/netavatar/avatarrenderdata.hpp"
#include "worldcamera.hpp"
// Incomplete
class World;
class WorldRenderer
{
  public:
    WorldRenderer();
    virtual ~WorldRenderer();

    World* m_pWorld;
    uint8_t pad[120];
    WorldCamera m_worldCamera;
    Background* m_pWeather;
    int m_activeWeather;
    uint8_t pad2[96];
    int m_musicCoord;
    int pad3;
    int m_musicStart;
    int m_musicEnd;
    uint8_t pad4[8];
    int m_musicTempo;
    uint8_t pad5[40];
    AvatarRenderData m_avatarRenderData;
};