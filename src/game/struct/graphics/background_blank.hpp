#pragma once
#include "background.hpp"
#include "surface.hpp"

// Namings matched.
class Background_Blank : public Background
{
  public:
    Background_Blank();
    virtual ~Background_Blank();

    virtual void Render(CL_Vec2f& camPos, float graphicDetailLevel);
    virtual void Init(bool useMap);
    virtual void Update();
};
