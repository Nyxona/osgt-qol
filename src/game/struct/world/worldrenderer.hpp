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
    SurfaceAnim* m_crackImg;
    SurfaceAnim* m_lockImg;
    SurfaceAnim* m_treeImg;
    SurfaceAnim* m_bigRainbowImg;
    SurfaceAnim* m_waterImg;
    SurfaceAnim* m_fireImg;
    SurfaceAnim* m_blueWaterImg;
    SurfaceAnim* m_greenWaterImg;
    SurfaceAnim* m_CheckOutCounterImg;
    SurfaceAnim* m_PlayingCardImg;
    uint8_t m_steamManager[40];
    WorldCamera m_camera;
    Background* m_pBackground;
    int m_curWeather;
    bool m_bWeatherLock; // If true, ignores ForceBackground and other such calls unless it
                         // originates from ClientPetBattle
    uint8_t pad2[3];
    uint8_t m_particles[40];
    SurfaceAnim* m_pickupBox;
    SurfaceAnim* m_silkwormImg;
    std::string m_closestMusicFilename;
    float m_closestMusicDistance;
    int m_songPosition;
    int m_prevSongPosition;
    int m_songStart;
    int m_songEnd;
    float m_songTicker;
    float m_songRecalcTime;
    float m_songTickTime;
    uint8_t pad3[40];
    AvatarRenderData m_tempRenderData;
};
// Expected size: 10088 / 0x2768