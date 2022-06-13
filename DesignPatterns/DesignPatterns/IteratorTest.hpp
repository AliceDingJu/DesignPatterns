//
//  IteratorTest.hpp
//  DesignPatterns
//
//  Created by Alice on 5/6/22.
//

#ifndef IteratorTest_hpp
#define IteratorTest_hpp

#include <stdio.h>
#include <cppunit/TestCase.h>

class IteratorTest : public CppUnit::TestFixture
{
public:
    void testIterator();
    
    void setUp();
    void tearDown();
    
    static CppUnit::Test* suite();
};
#endif /* IteratorTest_hpp */
