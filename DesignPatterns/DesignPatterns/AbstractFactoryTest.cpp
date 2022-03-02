//
//  AbstractFactoryTest.cpp
//  DesignPatterns
//
//  Created by Alice on 2/3/22.
//

#include "AbstractFactoryTest.hpp"
#include <cppunit/TestCaller.h>
#include <cppunit/TestSuite.h>
#include "AbstractFactory.hpp"
using namespace DesignPattern;
std::string display_factory(const std::shared_ptr<Factory>& factory)
{
    return factory->create_button()->draw() + "+" + factory->create_menu()->draw();
}
void AbstractFactoryTest::testAbstractFactory()
{
    std::cout << "\n\nAbstractFactoryTest - testAbstractFactory" << std::endl;
    std::shared_ptr<Factory> windowsFactory = FactoryMenu::instance().getFactory("Windows");
    CPPUNIT_ASSERT(windowsFactory!=nullptr);
    std::cout <<display_factory(windowsFactory)<<std::endl;
    CPPUNIT_ASSERT(display_factory(windowsFactory) == "WindowsButton+WindowsMenu");
    
    std::shared_ptr<Factory> motifFactory = FactoryMenu::instance().getFactory("Motif");
    CPPUNIT_ASSERT(motifFactory!=nullptr);
    std::cout <<display_factory(motifFactory)<<std::endl;
    CPPUNIT_ASSERT(display_factory(motifFactory) == "MotifButton+MotifMenu");
}

void AbstractFactoryTest::setUp(){}
void AbstractFactoryTest::tearDown(){}

CppUnit::Test* AbstractFactoryTest::suite()
{
    CppUnit::TestSuite* pSuite = new CppUnit::TestSuite("AbstractFactoryTest");
    pSuite->addTest(new CppUnit::TestCaller<AbstractFactoryTest>("testAbstractFactory", &AbstractFactoryTest::testAbstractFactory ));
    
    return pSuite;
}
