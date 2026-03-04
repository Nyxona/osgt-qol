#include "game/struct/vec.hpp"
#include <cstdint>
#include <string>
#include <vector>

enum TileProperties : uint16_t
{
    TILE_PROPERTY_TILE_DATA = 1,
    TILE_PROPERTY_LOCKED = 2 << 0,
    TILE_PROPERTY_SPLICED = 2 << 1,
    TILE_PROPERTY_SEED_DROP = 2 << 2,
    TILE_PROPERTY_IS_TREE = 2 << 3,
    TILE_PROPERTY_FACING_LEFT = 2 << 4,
    TILE_PROPERTY_TOGGLED = 2 << 5,
    TILE_PROPERTY_PUBLIC = 2 << 6,
    TILE_PROPERTY_BGTOGGLE = 2 << 7,
    TILE_PROPERTY_SILENCED = 2 << 8,
    TILE_PROPERTY_WATER = 2 << 9,
    TILE_PROPERTY_GLUE = 2 << 10,
    TILE_PROPERTY_FIRE = 2 << 11,
    TILE_PROPERTY_PAINT_RED = 2 << 12,
    TILE_PROPERTY_PAINT_GREEN = 2 << 13,
    TILE_PROPERTY_PAINT_BLUE = 2 << 14,
    TILE_PROPERTY_PAINT_YELLOW = TILE_PROPERTY_PAINT_RED | TILE_PROPERTY_PAINT_GREEN,
    TILE_PROPERTY_PAINT_PURPLE = TILE_PROPERTY_PAINT_BLUE | TILE_PROPERTY_PAINT_RED,
    TILE_PROPERTY_PAINT_AQUA = TILE_PROPERTY_PAINT_BLUE | TILE_PROPERTY_PAINT_GREEN,
    TILE_PROPERTY_PAINT_BLACK =
        TILE_PROPERTY_PAINT_BLUE | TILE_PROPERTY_PAINT_GREEN | TILE_PROPERTY_PAINT_RED
};
struct Tile
{
    int m_currentColor;
    short m_itemID;
    short m_itemBGID;
    short m_tileProperties;
    uint8_t x;
    uint8_t y;
    short m_index;
    short m_tileVisual;
    short m_tileBGVisual;
    bool m_bCollidable;
    int m_collisionType;
    Rectf m_rect;
    void* m_pTileExtra;
    uint8_t pad4[20];
    float m_lightLevel;
    uint8_t pad5[56];
};
static_assert(sizeof(Tile) == 128, "Tile size mismatch.");

class World;
class WorldTileMap
{
  public:
    void* vftable;
    int m_width;
    int m_height;
    void* m_unk;
    std::vector<Tile> m_tiles;
    World* m_pWorldParent;
};
// Incomplete
class World
{
  public:
    void* vftable;
    short pad;
    short m_version;
    int pad2;
    WorldTileMap m_tilemap;
    uint8_t m_objectMap[0x20];
    std::string m_name;
};