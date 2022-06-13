//
//  Iterator.hpp
//  DesignPatterns
//
//  Created by Alice on 5/6/22.
//

#ifndef Iterator_hpp
#define Iterator_hpp

#include <stdio.h>
#include <vector>

namespace DesignPattern
{
class StackIter;
class Stack
{
private:
    std::vector<int> items;
    int sp;
public:
    friend class StackIter;
    Stack()
    {
        sp = -1;
    }
    void push(int in)
    {
        if(items.size() > sp + 1)
            items[++sp] = in;
        else
        {
            items.push_back(in);
            ++sp;
        }
    }
    int pop()
    {
        return items[sp--];
    }
    bool empty()
    {
        return sp == -1;
    }
    StackIter* createIterator() const;
    friend bool operator==( const Stack& l, const Stack& r );
};
bool operator==( const Stack& l, const Stack& r );
class StackIter
{
private:
    const Stack* stk;
    int index;
public:
    StackIter(const Stack* s)   { stk = s; }
    void first()                {index = 0;}
    void next()                 {index++;}
    bool isDone()               {return index == stk->sp + 1;}
    int  currentItem()          {return stk->items[index];}
};
}

#endif /* Iterator_hpp */
