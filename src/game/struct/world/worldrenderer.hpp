#pragma once

#include "game/struct/graphics/background.hpp"
#include "game/struct/graphics/surface.hpp"
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
    SurfaceAnim* m_pSurfCrack;
    SurfaceAnim* m_pSurfLockOutline;
    SurfaceAnim* m_pSurfTilesPage1;
    SurfaceAnim* m_pSurfRainbow;
    SurfaceAnim* m_pSurfWater;
    SurfaceAnim* m_pSurfFire;
    SurfaceAnim* m_pSurfDarkBlueWater;
    SurfaceAnim* m_pSurfGreenWater;
    SurfaceAnim* m_pSurfVendOutline;
    SurfaceAnim* m_pSurfGch;
    uint8_t m_steamManager[40];
    WorldCamera m_worldCamera;
    Background* m_pWeather;
    int m_activeWeather;
    int m_weatherID;
    bool m_bInPetBattle; // If true, ignores ForceBackground and other such calls unless it
                         // originates from ClientPetBattle
    uint8_t m_particleSystem[32]; // Not sure if it should be 32 or 40.
    uint8_t pad2[8];
    SurfaceAnim* m_pSurfPickupBox;
    SurfaceAnim* m_pSurfSelk;
    uint8_t pad3[28];
    int m_musicCoord;
    int pad4;
    int m_musicStart;
    int m_musicEnd;
    uint8_t pad5[8];
    int m_musicTempo;
    uint8_t pad6[40];
    AvatarRenderData m_avatarRenderData;
};
// Expected size: 10088 / 0x2768