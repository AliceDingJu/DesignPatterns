//
//  Singleton.hpp
//  DesignPatterns
//
//  Created by Alice on 2/3/22.
//

#ifndef Singleton_hpp
#define Singleton_hpp

#include <stdio.h>

namespace DesignPattern
{
template<typename Object>
class Singleton
{
public:
    static Object& instance()//only one copy but clients have the reference so can be modified
    {
        static Object theObject;
        return theObject;
    }
    virtual ~Singleton(){};
protected:
    Singleton(){};
private:
    Singleton(const Singleton& someSingleton);
    Singleton& operator=(const Singleton& someSingleton);
};
}

#endif /* Singleton_hpp */
