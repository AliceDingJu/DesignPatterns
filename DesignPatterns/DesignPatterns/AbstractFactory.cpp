//
//  AbstractFactory.cpp
//  DesignPatterns
//
//  Created by Alice on 2/3/22.
//

#include <stdio.h>
#include "AbstractFactory.hpp"
namespace DesignPattern
{
FactoryMenu::FactoryMenu()
{
    m_factoryMap["Motif"] = std::make_shared<MotifFactory>();
    m_factoryMap["Windows"] = std::make_shared<WindowsFactory>();
}
std::shared_ptr<Factory> FactoryMenu::getFactory(const std::string& factoryName)
{
    auto itr = m_factoryMap.find(factoryName);
    if(itr != m_factoryMap.end())
        return itr->second;
    return nullptr;
}
}
