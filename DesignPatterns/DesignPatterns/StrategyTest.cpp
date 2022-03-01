//
//  StrategyTest.cpp
//  DesignPatterns
//
//  Created by Alice on 1/3/22.
//

#include "StrategyTest.hpp"
#include <cppunit/TestCaller.h>
#include <cppunit/TestSuite.h>
#include "Strategy.hpp"
using namespace DesignPattern;
void StrategyTest::testStrategy()
{
    std::cout << "\n\nStrategyTest - testStrategy" << std::endl;
    GameCharacter GuyA;//default constructor as defulat healthCalculationFunction
    GameCharacter EvilBadGuy(loseHealthQuickly);
    GameCharacter AngleA(loseHealthSlowly);
    GuyA.getOneNormalHit();
    EvilBadGuy.getOneNormalHit();
    AngleA.getOneNormalHit();
    
    std::cout << "After one normal hit: \n";
    std::cout << "GuyA : healthValue - " << GuyA.healthValue() << std::endl;
    std::cout << "EvilBadGuy : healthValue - " << EvilBadGuy.healthValue() << std::endl;
    std::cout << "AngleA : healthValue - " << AngleA.healthValue() << std::endl;
    CPPUNIT_ASSERT(GuyA.healthValue() > EvilBadGuy.healthValue());
    CPPUNIT_ASSERT(AngleA.healthValue() > GuyA.healthValue());
}

void StrategyTest::setUp(){}
void StrategyTest::tearDown(){}

CppUnit::Test* StrategyTest::suite()
{
    CppUnit::TestSuite* pSuite = new CppUnit::TestSuite("StrategyTest");
    pSuite->addTest(new CppUnit::TestCaller<StrategyTest>("testStrategy", &StrategyTest::testStrategy ));
    
    return pSuite;
}
