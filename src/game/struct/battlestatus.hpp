#pragma once
#include <string>

struct BattleStatus
{
    std::string m_name;
    bool m_bActive;
    int m_timeLeft;
    uint8_t m_teams;
    int m_teamScore[4];
    void* m_highScore[3]; // NetAvatar*
    bool m_bNoLogging;
};