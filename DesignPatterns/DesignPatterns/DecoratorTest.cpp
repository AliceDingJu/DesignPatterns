//
//  DecoratorTest.cpp
//  DesignPatterns
//
//  Created by Alice on 1/3/22.
//

#include "DecoratorTest.hpp"
#include <cppunit/TestCaller.h>
#include <cppunit/TestSuite.h>
#include "Decorator.hpp"
using namespace DesignPattern;
void DecoratorTest::testDecorator()
{
    std::cout << "\n\nDecoratorTest - testDecorator" << std::endl;
    IBeverage* american = new Espresso( new Coffee );
    std::cout << "American : " << american->whatToAdd() << std::endl;
    CPPUNIT_ASSERT(american->whatToAdd() == "Water + Espresso");
    delete american;
    IBeverage* latte = new Milk(new Espresso( new Coffee ));
    std::cout << "Latte : " << latte->whatToAdd() << std::endl;
    CPPUNIT_ASSERT(latte->whatToAdd() == "Water + Espresso + Milk");
    delete latte;
    IBeverage* mocha = new Chocolate(new Milk(new Espresso( new Coffee )));
    std::cout << "Mocha : " << mocha->whatToAdd() << std::endl;
    CPPUNIT_ASSERT(mocha->whatToAdd() == "Water + Espresso + Milk + Chocolate");
    delete mocha;
    IBeverage* latteDoubleShot = new Milk(new Espresso(new Espresso( new Coffee )));
    std::cout << "LatteDoubleShot : " << latteDoubleShot->whatToAdd() << std::endl;
    CPPUNIT_ASSERT(latteDoubleShot->whatToAdd() == "Water + Espresso + Espresso + Milk");
    delete latteDoubleShot;
}

void DecoratorTest::setUp(){}
void DecoratorTest::tearDown(){}

CppUnit::Test* DecoratorTest::suite()
{
    CppUnit::TestSuite* pSuite = new CppUnit::TestSuite("DecoratorTest");
    pSuite->addTest(new CppUnit::TestCaller<DecoratorTest>("testDecorator", &DecoratorTest::testDecorator ));
    
    return pSuite;
}
