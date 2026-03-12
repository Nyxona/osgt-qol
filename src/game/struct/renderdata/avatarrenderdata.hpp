#pragma once
#include "game/struct/particleemitter.hpp"
#include "game/struct/renderdata/petrenderdata.hpp"
#include <cstdint>
#include <map>
#include <vector>

class NetAvatar;
// Incomplete
class AvatarRenderObject;

struct BillBoardData
{
    bool m_bEnabled;
    int m_iItemID;
    int m_iItemPrice;
    bool isBuying;
    bool m_bWorldLocksPerItem;
};
enum eClientRoleClasses : int
{
    CLIENT_ROLE_FARMER,
    CLIENT_ROLE_BUILDER,
    CLIENT_ROLE_SURGEON,
    CLIENT_ROLE_FISHER,
    CLIENT_ROLE_COOK,
    CLIENT_ROLE_STARTOPIA,
    CLIENT_ROLE_NUM_ROLES
};
struct RoleSkinSurfaces
{
    SurfaceAnim* head;
    SurfaceAnim* sit;
    CL_Vec2i sittingFrame;
    SurfaceAnim* sleep;
    CL_Vec2i sleepingFrame;
    const int surfaceSize;
    const int sitSurfaceSize;
};
struct RoleSkin
{
    eClientRoleClasses roleSkinType;
    RoleSkinSurfaces RoleSkinSurfaces;
};
// Incomplete
class AvatarRenderData
{
  public:
    BillBoardData m_billboard;
    ParticleEmitter clothingParticleEmitters[9];
    int artifactItem;
    ParticleEmitter artifactParticleEmitter;
    std::map<unsigned int, ParticleEmitter> charFlagEmitters;
    unsigned int m_skinColor;
    unsigned int m_pantsColor;
    unsigned int m_eyeColor;
    unsigned int m_pupilColor;
    unsigned int m_hairDye;
    int m_charFlags;
    int m_charFlags2;
    unsigned int m_charFlagsMay2019;
    CL_Vec2f m_pos;
    CL_Vec2f m_speed;
    CL_Rectf m_collRect;
    CL_Vec2f m_offset;
    int m_tileStandingOn;
    bool m_bWavey;
    bool m_bNoPet;
    bool m_usedForMultipleObjects;
    bool m_bInvisible;
    bool m_bOnGround;
    bool m_bOnIce;
    bool m_bUnderwater;
    bool m_bOnMud;
    bool m_bHandItemActive;
    bool m_bBackItemActive;
    bool m_bFacingLeft;
    bool m_bWasFacingLeft;
    bool m_bNoParticles;
    bool m_IsSurfing;
    bool m_bUsingBalloonShield;
    bool m_bWetFromBalloonHit;
    bool m_bNeonGumFlagActive;
    bool m_bWinterfestRedCrownActive;
    bool m_bWinterfestGreenCrownActive;
    bool m_bWinterfestSilverCrownActive;
    bool m_bWinterfestGoldCrownActive;
    bool isMadHatActive;
    int madHatID;
    bool isBunnyHatActive;
    int m_balloonBunny;
    uint8_t pad[272];
    PetRenderData m_petRenderData;
    NetAvatar* m_pParent;
    int m_netID;
    float m_wingPos;
    uint8_t m_wingState;
    int m_balloonHitFaction;
    int m_balloonWetModActive;
    unsigned int m_balloonTint;
    unsigned int m_redFactionTint;
    unsigned int m_greenFactionTint;
    unsigned int m_blueFactionTint;
    std::vector<AvatarRenderObject> m_avatarRenderObjects;
    uint8_t pad2[640];
};
static_assert(sizeof(AvatarRenderData) == 6576, "AvatarRenderData size mismatch.");