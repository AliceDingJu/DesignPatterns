//
//  Composite.cpp
//  DesignPatterns
//
//  Created by Alice on 20/2/22.
//
#include "Composite.hpp"
#include <sstream>
namespace Composite
{
const std::vector<std::shared_ptr<FruitsComponet>>& FruitsComponet::getChilren()
{
    m_childrenVec.clear();
    return m_childrenVec;
};
std::string FruitsComponet::getComponents()
{
    std::ostringstream oss;
    oss << m_name << ";";
    return oss.str();
}
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
std::string CompositeFruits::getComponents()
{
    std::ostringstream oss;
    oss << m_name << ":{";
    std::for_each(m_childrenVec.begin(), m_childrenVec.end(), [&](const std::shared_ptr<FruitsComponet>& item){oss << item->getComponents();});
    oss << "}";
    return oss.str();
};
}

