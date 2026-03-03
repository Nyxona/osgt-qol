#pragma once
#include <cstdint>

// Incomplete
class AvatarRenderData
{
  public:
    uint8_t pad[6584];
    float m_hue; // 0x19b8
    uint8_t pad2[4];
};
static_assert(sizeof(AvatarRenderData) == 6592, "AvatarRenderData size mismatch.");