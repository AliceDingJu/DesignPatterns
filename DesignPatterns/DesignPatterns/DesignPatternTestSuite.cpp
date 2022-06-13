//
//  DesignPatternTestSuite.cpp
//  DesignPatterns
//
//  Created by Alice on 22/2/22.
//

#include "DesignPatternTestSuite.hpp"
#include "CompositeTest.hpp"
#include "StrategyTest.hpp"
#include "DecoratorTest.hpp"
#include "AbstractFactoryTest.hpp"
#include "BridgeTest.hpp"
#include "CommandTest.hpp"
#include "IteratorTest.hpp"

CppUnit::Test* DesignPatternTestSuite::suite()
{
    CppUnit::TestSuite* pSuite = new CppUnit::TestSuite("DesignPatternTestSuite");
    
    pSuite->addTest(CompositeTest::suite());
    pSuite->addTest(StrategyTest::suite());
    pSuite->addTest(DecoratorTest::suite());
    pSuite->addTest(AbstractFactoryTest::suite());
    pSuite->addTest(BridgeTest::suite());
    pSuite->addTest(CommandTest::suite());
    pSuite->addTest(IteratorTest::suite());
    
    return pSuite;
}
