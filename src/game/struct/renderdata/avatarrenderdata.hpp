#pragma once
#include "game/struct/particleemitter.hpp"
#include "game/struct/renderdata/petrenderdata.hpp"
#include "game/struct/timer.hpp"
#include <cstdint>
#include <map>
#include <memory>
#include <vector>

class NetAvatar;
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
    struct RidingDragonRenderHelper
    {
        int animRateMSRandom;
        float smokeScale;
    };
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
    bool m_starFighterGun;
    bool m_euphoricDragonHead;
    bool m_IsFISH_SQUISHED_WEBBED_HANDActive;
    bool m_IsSPACE_FACED_CHESTActive;
    bool m_IsSICK_LICKED_FACEITEMActive;
    bool m_IsDirtGrossBeanActive;
    int m_lastPoopTime;
    unsigned int m_punchType;
    unsigned int unk;       // could be m_LastOnPunchStartOverridePunchType
    int m_bodyOverrideType; // verify
    CL_Vec2f deathPosition;
    uint8_t action;
    int ouchType;
    float ticker;
    CL_Vec2f punchScale;
    uint8_t lastFootLifted;
    CL_Vec2f faceOff;
    float foot1y;
    float foor1dy;
    float foot2y;
    float foot2dy;
    float arm1Angle;
    float arm2Angle;
    float petArmAngle;
    uint8_t face;
    uint8_t subAction;
    uint8_t subSubAction;
    float cryTimer;
    float animTimer;
    float stinkTimer;
    float fastStinkTimer;
    float crazyStinkTimer;
    float slowStinkStimer;
    float blingTimer;
    uint8_t whichEye;
    float splashTimer;
    unsigned int m_colorOverrideTimer;
    unsigned int m_colorOverride;
    CL_Vec2f punchTarget;
    CL_Vec2f handSpot;
    CL_Vec2f m_punchFireSpot;
    float m_punchDistance;
    float m_punchAngle;
    int m_punchParticleIndex;
    bool bigHeadphones;
    bool m_bIsSitting;
    float sitTimer;
    float m_elapsed;
    float m_bubbleTime;
    float m_pomAngle;
    float m_pomSpeed;
    float m_eyeDryness;
    float m_lastWallHang;
    CL_Vec2f m_scaleAdjust;
    CL_Vec2f m_desiredScale;
    CL_Vec2f m_partOffset;
    CL_Vec2f m_adjustedPartOffset;
    float m_pukeParticleTimer;
    float m_pukeTimer;
    CL_Vec2f fishTile;
    uint8_t m_battleTeam;
    int m_emotion;
    float maxSpeedX;
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
    std::vector<AvatarRenderObject*> m_avatarRenderObjects;
    unsigned int m_renderObjectFlags;
    int m_cowlState;
    float m_harnessHorseOffsetY;
    bool m_doingBlink;
    int m_blinkIndex;
    int m_RenderObjElapsedMS;
    std::vector<int> m_GauntletDeathEffectEmitters;   // Unsure, lacks xrefs.
    std::vector<int> m_GauntletSpawnEffectEmitters;   // Unsure, lacks xrefs.
    std::vector<int> m_DanceMasterSquareEmitterIndex; // Unsure, lacks xrefs.
    std::vector<int> m_galaxyAuraEmitters;            // Unsure, lacks xrefs.
    int m_punchHairEmitterIndex; // Lacks xrefs, could also be m_moneyAuraEmitterIndex
    RidingDragonRenderHelper m_RidingDragonRenderHelper;
    CL_Vec2f m_GauntletFrontArmCPos;
    int m_GauntletRenderTimes;
    int m_CatEyesExtendFrame;
    bool isDisguised;
    std::shared_ptr<Timer> scavangerTimer;
    bool isScavengerTimerActive;
    unsigned int bumbleBotWalkNextTick;
    unsigned int onJumpStartTick;
    unsigned int paintedColor;     // Unsure, lacks xrefs.
    unsigned int paintRemovalTick; // Unsure, lacks xrefs.
    bool isSlipperyFallDownNow;
    unsigned int m_OnPunchStartTick;
    unsigned int m_SpiderLegWallHangTimer;
    int CONST_CoveredCapeAnimTimerWaitingTick;
    bool m_CoveredCapeAudioIsFired;
    unsigned int m_resetStopDancingTimer;
    bool m_bDoRespawnEffect;
    CL_Vec2f m_onKilledPosition;
    uint8_t pad[416];
};
static_assert(sizeof(AvatarRenderData) == 6576, "AvatarRenderData size mismatch.");