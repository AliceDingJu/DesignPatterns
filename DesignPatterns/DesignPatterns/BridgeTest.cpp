//
//  BridgeTest.cpp
//  DesignPatterns
//
//  Created by Alice on 6/3/22.
//

#include "BridgeTest.hpp"
#include <cppunit/TestCaller.h>
#include <cppunit/TestSuite.h>
#include "Bridge.hpp"
using namespace DesignPattern;

void BridgeTest::testBridge()
{
    std::cout << "\n\nBridgeTest - testBridge" << std::endl;
    Date niceDay(26,12,1995);//default as ISO
    CPPUNIT_ASSERT(niceDay.display() == "1995-12-26");
    std::cout << "ISO : " << niceDay.display() <<std::endl;
    niceDay.setImp("American");
    CPPUNIT_ASSERT(niceDay.display() == "12/26/1995");
    std::cout << "American : " << niceDay.display() <<std::endl;
    niceDay.setImp("European");
    CPPUNIT_ASSERT(niceDay.display() == "26/12/1995");
    std::cout << "European : " << niceDay.display() <<std::endl;
}

void BridgeTest::setUp(){}
void BridgeTest::tearDown(){}

CppUnit::Test* BridgeTest::suite()
{
    CppUnit::TestSuite* pSuite = new CppUnit::TestSuite("BridgeTest");
    pSuite->addTest(new CppUnit::TestCaller<BridgeTest>("testBridge", &BridgeTest::testBridge ));
    
    return pSuite;
}
