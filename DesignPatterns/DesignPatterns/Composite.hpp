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
#include <iostream>
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
    virtual void printName(){ std::cout<< m_name << "; " <<std::endl;};
    virtual void add(const std::shared_ptr<FruitsComponet>& FruitsComponet){};
    virtual void remove(const std::shared_ptr<FruitsComponet>& FruitsComponet){};
    virtual const std::vector<std::shared_ptr<FruitsComponet>>& getChilren();
protected:
    FruitsComponet(std::string name):m_name(name){};
    const std::string m_name;
    std::vector<std::shared_ptr<FruitsComponet>> m_childrenVec;
};

class SingleFruit : public FruitsComponet/*primative object*/
{
public:
    SingleFruit(std::string name):FruitsComponet(name){};
    virtual ~SingleFruit(){};
};

class CompositeFruits : public FruitsComponet/*Composite object*/
{
public:
    CompositeFruits(std::string name):FruitsComponet(name){};
    virtual ~CompositeFruits(){};
    virtual void printName();//showing how the recursive composit works
    virtual void add(const std::shared_ptr<FruitsComponet>& FruitsComponet);
    virtual void remove(const std::shared_ptr<FruitsComponet>& FruitsComponet);
    virtual const std::vector<std::shared_ptr<FruitsComponet>>& getChilren();
};

}

#endif /* Composite_hpp */
