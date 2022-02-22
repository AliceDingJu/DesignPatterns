//
//  CompositeTest.hpp
//  DesignPatterns
//
//  Created by Alice on 22/2/22.
//

#ifndef CompositeTest_hpp
#define CompositeTest_hpp

#include <stdio.h>
#include <cppunit/TestCase.h>
class CompositeTest : public CppUnit::TestFixture
{
public:    
    void testComposite();
    
    void setUp();
    void tearDown();
    
    static CppUnit::Test* suite();
};
#endif /* CompositeTest_hpp */
