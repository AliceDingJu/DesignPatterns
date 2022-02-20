//
//  Composite.cpp
//  DesignPatterns
//
//  Created by Alice on 20/2/22.
//

#include "Composite.hpp"
namespace Composite
{
const std::vector<std::shared_ptr<FruitsComponet>>& FruitsComponet::getChilren()
{
    m_childrenVec.clear();
    return m_childrenVec;
};
void CompositeFruits::add(const std::shared_ptr<FruitsComponet>& FruitsComponet)
{
    m_childrenVec.push_back(FruitsComponet);
}
void CompositeFruits::remove(const std::shared_ptr<FruitsComponet>& FruitsComponet)
{
    m_childrenVec.erase(std::remove(m_childrenVec.begin(),m_childrenVec.end(), FruitsComponet), m_childrenVec.end());
}
const std::vector<std::shared_ptr<FruitsComponet>>& CompositeFruits::getChilren()
{
    return m_childrenVec;
}
void CompositeFruits::printName()
{
    std::cout<< m_name << " : \n{\n";
    std::for_each(m_childrenVec.begin(), m_childrenVec.end(), [&](const std::shared_ptr<FruitsComponet>& item){item->printName();});
    std::cout<<"}"<<std::endl;
};
}

