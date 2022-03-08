//
//  CommandTest.hpp
//  DesignPatterns
//
//  Created by Alice on 8/3/22.
//

#ifndef CommandTest_hpp
#define CommandTest_hpp

#include <stdio.h>
#include <cppunit/TestCase.h>
class CommandTest : public CppUnit::TestFixture
{
public:
    void testCommand();
    
    void setUp();
    void tearDown();
    
    static CppUnit::Test* suite();
};
#endif /* CommandTest_hpp */
