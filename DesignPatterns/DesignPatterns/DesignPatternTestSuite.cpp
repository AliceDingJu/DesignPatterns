//
//  DesignPatternTestSuite.cpp
//  DesignPatterns
//
//  Created by Alice on 22/2/22.
//

#include "DesignPatternTestSuite.hpp"
#include "CompositeTest.hpp"

CppUnit::Test* DesignPatternTestSuite::suite()
{
    CppUnit::TestSuite* pSuite = new CppUnit::TestSuite("DesignPatternTestSuite");
    
    pSuite->addTest(CompositeTest::suite());
    
    return pSuite;
}
