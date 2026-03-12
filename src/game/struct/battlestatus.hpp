#pragma once
#include <string>

class NetAvatar;
// Namings matched.
struct BattleStatus
{
    std::string m_name;
    bool m_bActive;
    int m_timeLeft;
    uint8_t m_teams;
    int m_teamScore[4];
    NetAvatar* m_highScore[3];
    bool m_bNoLogging;
};