#pragma once
#include "game/struct/vec.hpp"

class SurfaceAnim;
struct ItemInfo;

struct PetStep
{
    CL_Vec2f m_pos;
    CL_Vec2f m_velocity;
    bool m_bOnGround;
    bool m_bFaceLeft;
};

// Naming matched except for the last var.
class PetRenderData
{
  public:
    virtual ~PetRenderData(){};
    float m_attackTime;
    float m_forceFaceTime;
    CL_Vec2f m_pos;
    CL_Vec2f m_velocity;
    CL_Vec2f m_hopDest;
    float m_hopSpeed;
    float m_bounceY;
    float m_dBounceY;
    int m_frame;
    bool m_bFaceLeft;
    bool m_bPunching;
    SurfaceAnim* m_petSurf;
    short m_petType;
    uint8_t m_petClass;
    ItemInfo* m_itemInfo;
    int m_validSteps;
    float m_timeSinceLastStep;
    float m_frameTick;
    float m_rotation;
    float m_avatarIdleTime;
    float m_specialTicker;
    float m_scaleMultiplier;
    unsigned int m_forceColor;
    int m_action;
    CL_Vec2f m_startPos;
    CL_Vec2f m_finalPos;
    CL_Vec2f m_aimTarget;
    int m_projectile;
    int m_hitProjectile;
    int m_projectileV2;
    int m_hitProjectileV2;
    std::string m_hitSound;
    float m_actionTimer;
    float m_fullActionTimer;
    PetStep m_steps[20];
    bool m_IsClimb;
    CL_Vec2f m_LastOwnerCenter;
    uint8_t m_RenderFrameOffset;
    CL_Vec2f m_PosDiff;
    short m_unk;
};
static_assert(sizeof(PetRenderData) == 640, "PetRenderData class size mismatch.");