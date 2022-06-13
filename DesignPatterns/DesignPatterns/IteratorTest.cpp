//
//  IteratorTest.cpp
//  DesignPatterns
//
//  Created by Alice on 5/6/22.
//
#include <cppunit/TestCaller.h>
#include <cppunit/TestSuite.h>
#include "IteratorTest.hpp"
#include "Iterator.hpp"
using namespace DesignPattern;

void IteratorTest::testIterator()
{
    std::cout << "\n\nIteratorTest - testIterator" << std::endl;
    Stack  s1;
    for (int i=1; i < 5; i++) s1.push(i);
    Stack  s2( s1 ), s3( s1 ), s4( s1 ), s5( s1 );
    s3.pop();       s5.pop();
    s4.push( 2 );   s5.push( 9 );
    std::cout << "stack1 == stack2 is "<< (s1 == s2) << std::endl;
    CPPUNIT_ASSERT((s1 == s2) == true);
    std::cout << "stack1 == stack3 is "<< (s1 == s3) << std::endl;
    CPPUNIT_ASSERT((s1 == s3) == false);
    std::cout << "stack1 == stack4 is "<< (s1 == s4) << std::endl;
    CPPUNIT_ASSERT((s1 == s4) == false);
    std::cout << "stack1 == stack5 is "<< (s1 == s5) << std::endl;
    CPPUNIT_ASSERT((s1 == s5) == false);
}

void IteratorTest::setUp(){}
void IteratorTest::tearDown(){}

CppUnit::Test* IteratorTest::suite()
{
    CppUnit::TestSuite* pSuite = new CppUnit::TestSuite("IteratorTest");
    pSuite->addTest(new CppUnit::TestCaller<IteratorTest>("testIterator", &IteratorTest::testIterator ));
    
    return pSuite;
}

