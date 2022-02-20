//
//  Composite.cpp
//  DesignPatterns
//
//  Created by Alice on 20/2/22.
//

#include <stdio.h>
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
}
