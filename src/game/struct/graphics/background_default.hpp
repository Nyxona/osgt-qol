#pragma once
#include "background.hpp"
#include "background_clouds.hpp"
#include "surface.hpp"

// Namings matched.
class Background_Default : public Background
{
  public:
    Background_Default();
    virtual ~Background_Default();

    virtual void Render(CL_Vec2f& camPos, float graphicDetailLevel);
    virtual void Init(bool useMap);
    virtual void Update();

    void DrawHill(int n, CL_Vec2f camPos);

    bool m_springInstead;
    Background_Clouds* m_pClouds;
    SurfaceAnim m_sun;
    Surface* m_pHills;
};
static_assert(sizeof(Background_Default) == 416, "BG_default mismatch");