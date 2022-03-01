//
//  StrategyTest.hpp
//  DesignPatterns
//
//  Created by Alice on 1/3/22.
//

#ifndef StrategyTest_hpp
#define StrategyTest_hpp

#include <stdio.h>
#include <cppunit/TestCase.h>
class StrategyTest : public CppUnit::TestFixture
{
public:
    void testStrategy();
    
    void setUp();
    void tearDown();
    
    static CppUnit::Test* suite();
};
#endif /* StrategyTest_hpp */
