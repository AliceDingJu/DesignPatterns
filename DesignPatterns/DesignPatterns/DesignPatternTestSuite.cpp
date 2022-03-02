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

CppUnit::Test* DesignPatternTestSuite::suite()
{
    CppUnit::TestSuite* pSuite = new CppUnit::TestSuite("DesignPatternTestSuite");
    
    pSuite->addTest(CompositeTest::suite());
    pSuite->addTest(StrategyTest::suite());
    pSuite->addTest(DecoratorTest::suite());
    pSuite->addTest(AbstractFactoryTest::suite());
    
    return pSuite;
}
