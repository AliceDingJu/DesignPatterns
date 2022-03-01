//
//  Decorator.hpp
//  DesignPatterns
//
//  Created by Alice on 1/3/22.
//
/*
Attach additional responsibilities to an object dynamically. Decorators provide a flexible alternative to subclassing for extending functionality. [GoF, p175]
Client-specified embellishment of a core object by recursively wrapping it, like wrapping a gift, putting it in a box, and wrapping the box.
You want to add behavior or state to individual objects at run-time. Inheritance is not feasible because it is static and applies to an entire class.
For example,
you want to print all Permutations of X Y
If using inheritance, then you will need classX, classY, classXX, classYY, classXY, classXXX ...
endless class.
But if with decorator, only need classX: public D and class Y: public D, then classX widget(new classY (new Class X (... here we go))
*/

#ifndef Decorator_hpp
#define Decorator_hpp

#include <stdio.h>
#include <string>
namespace DesignPattern
{
    class IBeverage {
    public:
       virtual ~IBeverage() { }
       virtual std::string whatToAdd() = 0;
    };

    class Coffee : public IBeverage {
    public:
       ~Coffee() {}
        /*virtual*/ std::string whatToAdd(){ return std::string("Water"); }
    };//no need virtual cos no need to dynamic vitual table for inheritance

    class Decorator : public IBeverage
    {
    public:
        Decorator(IBeverage* inner){m_wrappee = inner;}
        ~Decorator(){delete m_wrappee;}
        /*virtual*/ std::string whatToAdd(){return m_wrappee->whatToAdd();}
    private:
        IBeverage* m_wrappee;
    };

    class Espresso : public Decorator
    {
    public:
        Espresso( IBeverage* core ) : Decorator( core ) { }
        ~Espresso(){}
        /*virtual*/ std::string whatToAdd(){return Decorator::whatToAdd() + " + Espresso";}
    };
     
    class Milk : public Decorator
    {
    public:
        Milk( IBeverage* core ) : Decorator( core ) { }
        ~Milk(){}
        /*virtual*/ std::string whatToAdd(){return Decorator::whatToAdd() + " + Milk";}
    };

    class Chocolate : public Decorator
    {
    public:
        Chocolate( IBeverage* core ) : Decorator( core ) { }
        ~Chocolate(){}
        /*virtual*/ std::string whatToAdd(){return Decorator::whatToAdd() + " + Chocolate";}
    };
}
#endif /* Decorator_hpp */
