//
//  CompositeTest.cpp
//  DesignPatterns
//
//  Created by Alice on 22/2/22.
//

#include "CompositeTest.hpp"
#include <cppunit/TestCaller.h>
#include <cppunit/TestSuite.h>
#include "Composite.hpp"

void CompositeTest::testComposite()
{
    std::cout << "\nCompositeTest - testComposite" << std::endl;
    auto apple = std::make_shared<Composite::SingleFruit>("Apple");
    auto orange = std::make_shared<Composite::SingleFruit>("Orange");
    auto banana = std::make_shared<Composite::SingleFruit>("Banana");
    auto smallFruitBasket = std::make_shared<Composite::CompositeFruits>("SmallFruitBasket");
    smallFruitBasket->add(orange);
    smallFruitBasket->add(banana);
    
    auto largeFruitBasket = std::make_shared<Composite::CompositeFruits>("LargeFruitBasket");
    largeFruitBasket->add(smallFruitBasket);
    largeFruitBasket->add(apple);
    std::cout << largeFruitBasket->getComponents();
    CPPUNIT_ASSERT( largeFruitBasket->getComponents() == "LargeFruitBasket:{SmallFruitBasket:{Orange;Banana;}Apple;}" );
}

void CompositeTest::setUp(){}
void CompositeTest::tearDown(){}

CppUnit::Test* CompositeTest::suite()
{
    CppUnit::TestSuite* pSuite = new CppUnit::TestSuite("CompositeTest");
    pSuite->addTest(new CppUnit::TestCaller<CompositeTest>("testComposite", &CompositeTest::testComposite ));
    
    return pSuite;
}
