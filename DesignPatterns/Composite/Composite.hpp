//
//  Composite.hpp
//  DesignPatterns
//
//  Created by Alice on 20/2/22.
//
/*
 Composit is a design patter for recursive composition.
 Main idea is to treat primative obect and composite object uniformly.
*/
#ifndef Composite_hpp
#define Composite_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include <memory>

namespace Composite
{
class FruitsComponet/*Abstruct class providing interface for both primative and composit objects*/
{
public:
    virtual ~FruitsComponet(){};
    virtual const std::string& getName(){return m_name;};
    virtual void add(const std::shared_ptr<FruitsComponet>& FruitsComponet){};
    virtual void remove(const std::shared_ptr<FruitsComponet>& FruitsComponet){};
    virtual const std::vector<std::shared_ptr<FruitsComponet>>& getChilren();
protected:
    FruitsComponet(std::string name):m_name(name){};
    const std::string m_name;
    std::vector<std::shared_ptr<FruitsComponet>> m_childrenVec;
};

class singleFruit : public FruitsComponet
{
public:
    singleFruit(std::string name):FruitsComponet(name){};
    virtual ~singleFruit(){};
};

}

#endif /* Composite_hpp */
