//
//  BridgeTest.hpp
//  DesignPatterns
//
//  Created by Alice on 6/3/22.
//

#ifndef BridgeTest_hpp
#define BridgeTest_hpp

#include <stdio.h>
#include <cppunit/TestCase.h>
class BridgeTest : public CppUnit::TestFixture
{
public:
    void testBridge();
    
    void setUp();
    void tearDown();
    
    static CppUnit::Test* suite();
};
#endif /* BridgeTest_hpp */
