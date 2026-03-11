#pragma once
#include "game/struct/vec.hpp"
#include <cstdint>
#include <string>
#include <vector>

// Namings matched.
struct GoodieInfo
{
    uint8_t m_minCount;
    uint8_t m_maxCount;
    unsigned short m_itemID;
    float m_chance;
    uint8_t m_flags;
};
// Namings matched.
struct GrowInfo
{
    uint8_t m_seedBaseImageFrame;
    uint8_t m_seedOverlayImageFrame;
    uint8_t m_treeBaseImageFrame;
    uint8_t m_treeOverlayImageFrame;
    unsigned int m_baseColor;
    unsigned int m_overlayColor;
    unsigned short m_seed[2];
    unsigned int m_secondsRequiredToBloom;
    int m_maxFruit;
    uint8_t m_growMultiplier;
    unsigned short m_BountifulSeed;
    float m_BountifulChance;
};
// Namings matched.
struct ItemInfo
{
    unsigned int m_itemID;
    short m_type;
    int m_material;
    int m_element;
    std::string m_displayName;
    unsigned int m_checksumOfFile;
    std::string m_fileName;
    int m_visualEffect;
    int m_cook;
    uint8_t m_frameX;
    uint8_t m_frameY;
    unsigned int m_imageStorage;
    char m_layer;
    int m_collisionType;
    char m_hp;
    short m_flags;
    int m_flags2;
    int m_clientData[15];
    unsigned short m_serverFlags;
    int m_secondsToHeal;
    unsigned int m_bodyPart;
    GrowInfo m_growInfo;
    short m_rarity;
    uint8_t m_maxCanHold;
    std::string m_extraString;
    int m_extraStringChecksum;
    int m_effectTimeMS;
    std::string m_description;
    unsigned int m_playmodID;
    unsigned int m_minimum_protocol;
    int m_recycleValue;
    std::string m_petName[4];
    GoodieInfo m_goodieInfo[2];
    unsigned int m_antiHackChecksum;
    std::string m_itemEffects[8];
    int m_numEffects;
    int m_renderFx;
    std::string m_animFrames;
    std::string m_animFrames2;
    std::string m_secondaryTexture;
    CL_Vec2f m_layer2Coords;
    int m_TileRange;
    int m_PileSize;
    std::string m_CustomizedPunchInfoStr;
};
static_assert(sizeof(ItemInfo) == 888, "ItemInfo struct size mismatch, expected 888 bytes.");

class ItemInfoManager
{
  public:
    virtual ~ItemInfoManager();
    std::vector<ItemInfo> m_itemInfo;
    uint8_t m_filler[16];

    ItemInfo* GetItemByIDSafe(int ID)
    {
        if (ID < 0 || ID >= m_itemInfo.size())
            return &m_itemInfo[0];
        return &m_itemInfo[ID];
    }

    ItemInfo* GetItemByName(std::string Name)
    {
        for (auto& item : m_itemInfo)
        {
            if (item.m_displayName == Name)
                return &item;
        }
        return &m_itemInfo[0];
    }
};
static_assert(sizeof(ItemInfoManager) == 48, "ItemInfoManager class size mismatch.");
static_assert(sizeof(ItemInfo) == 888, "ItemInfo struct size mismatch.");