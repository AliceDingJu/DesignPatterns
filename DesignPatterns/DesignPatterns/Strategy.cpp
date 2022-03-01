//
//  Strategy.cpp
//  DesignPatterns
//
//  Created by Alice on 1/3/22.
//

#include "Strategy.hpp"
#include <cmath>

namespace DesignPattern
{
    void GameCharacter::getOneNormalHit()
    {
        m_bloodPoints = m_bloodPoints - 20 < 0 ? 0 : m_bloodPoints - 20;
        return;
    }
    double defaultHealthCalc(const GameCharacter& gc)
    {
        return gc.getBloodPoints();
    }
    double loseHealthQuickly(const GameCharacter& gc)
    {
        return std::sqrt(gc.getBloodPoints());
    }
    double loseHealthSlowly(const GameCharacter& gc)
    {
        return std::sqrt(gc.getBloodPoints()) * 10;
    }
}
