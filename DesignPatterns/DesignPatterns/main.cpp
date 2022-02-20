//
//  main.cpp
//  DesignPatterns
//
//  Created by Alice on 20/2/22.
//

#include <iostream>
#include <memory>
#include "Composite.hpp"

int main(int argc, const char * argv[]) {
    auto apple = std::make_shared<Composite::SingleFruit>("Apple");
    auto orange = std::make_shared<Composite::SingleFruit>("Orange");
    auto banana = std::make_shared<Composite::SingleFruit>("Banana");
    auto smallFruitBasket = std::make_shared<Composite::CompositeFruits>("SmallFruitBasket");
    smallFruitBasket->add(orange);
    smallFruitBasket->add(banana);
    
    auto largeFruitBasket = std::make_shared<Composite::CompositeFruits>("LargeFruitBasket");
    largeFruitBasket->add(smallFruitBasket);
    largeFruitBasket->add(apple);
    largeFruitBasket->printName();
    return 0;
}
