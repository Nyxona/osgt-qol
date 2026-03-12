#include "background_blank.hpp"
#include "game/signatures.hpp"
#include "game/struct/components/gamelogic.hpp"

Background_Blank::Background_Blank() {}

Background_Blank::~Background_Blank() {}

void Background_Blank::Render(CL_Vec2f& camPos, float graphicDetailLevel)
{
    // Need to find out what this vec is for. Looks like it's related to some bgfx rotation matrix?
    CL_Vec2f unk4(0.0, 0.0);
    // Get our screen size
    Rectf screenRect;
    real::GetScreenRect(screenRect);
    // Draw the default backdrop (same as Background_Default)
    // 0x141400ff
    // MAKE_RGBA(96, 215, 242, 255)
    real::DrawFilledRect(screenRect, 0x141400ff, 0.0f, &unk4);
    // Draw the weather change fade effect.
    if (m_flashAlpha > 0.0f)
    {
        real::DrawFilledRect(screenRect, -0x100 - (int)(m_flashAlpha * -255.0), 0.0f, &unk4);
        m_flashAlpha = m_flashAlpha - (real::GetApp()->GetDeltaTick() / 1000.0f);
    }
}

void Background_Blank::Init(bool useMap)
{
    if (useMap)
    {
        WorldTileMap* tMap = real::GetApp()->GetGameLogic()->GetTileMap();
        m_worldRect.right = tMap->m_sizeX * 32.0f;
        m_worldRect.bottom = tMap->m_sizeY * 32.0f;
    }
}
void Background_Blank::Update() {}