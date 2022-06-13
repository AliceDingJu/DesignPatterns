//
//  Iterator.cpp
//  DesignPatterns
//
//  Created by Alice on 5/6/22.
//

#include "Iterator.hpp"
namespace DesignPattern
{
StackIter* Stack::createIterator() const
{
    return new StackIter(this);
}

bool operator==(const Stack& stackL, const Stack& stackR)
{
    StackIter* itrL = stackL.createIterator();
    StackIter* itrR = stackR.createIterator();
    
    for (itrL->first(), itrR->first(); ! (itrL->isDone() || itrR->isDone()); itrL->next(), itrR->next())
       if (itrL->currentItem() != itrR->currentItem()) break;
    
    bool ans = itrL->isDone() && itrR->isDone();
    
    delete itrL;
    delete itrR;
    
    return ans;
}
}
