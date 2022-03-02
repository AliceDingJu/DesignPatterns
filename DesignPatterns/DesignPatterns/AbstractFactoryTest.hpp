//
//  AbstractFactoryTest.hpp
//  DesignPatterns
//
//  Created by Alice on 2/3/22.
//

#ifndef AbstractFactoryTest_hpp
#define AbstractFactoryTest_hpp

#include <stdio.h>
#include <cppunit/TestCase.h>
class AbstractFactoryTest : public CppUnit::TestFixture
{
public:
    void testAbstractFactory();
    
    void setUp();
    void tearDown();
    
    static CppUnit::Test* suite();
};
#endif /* AbstractFactoryTest_hpp */
