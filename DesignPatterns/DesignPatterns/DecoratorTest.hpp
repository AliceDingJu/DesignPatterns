//
//  DecoratorTest.hpp
//  DesignPatterns
//
//  Created by Alice on 1/3/22.
//

#ifndef DecoratorTest_hpp
#define DecoratorTest_hpp

#include <stdio.h>
#include <cppunit/TestCase.h>
class DecoratorTest : public CppUnit::TestFixture
{
public:
    void testDecorator();
    
    void setUp();
    void tearDown();
    
    static CppUnit::Test* suite();
};
#endif /* DecoratorTest_hpp */
