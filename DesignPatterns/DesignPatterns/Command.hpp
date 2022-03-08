//
//  Command.hpp
//  DesignPatterns
//
//  Created by Alice on 7/3/22.
//

#ifndef Command_hpp
#define Command_hpp

#include <stdio.h>
#include <iostream>
namespace DesignPattern
{
class Cook
{
public:
    Cook(){m_id = m_next++;};
    std::string burger()    { return std::to_string(m_id) + "-Burger"; }
    std::string coke()    { return std::to_string(m_id) + "-Coke"; }
    std::string fries() { return std::to_string(m_id) + "-Fries"; }
private:
    int m_id;
    static int m_next;
};
class Command
{
public:
    typedef std::string (Cook::*Action)();//typedef of a function pointer
    Command(Cook* object, Action action):m_object(object), m_action(action){}
    std::string execute(){return (m_object->*m_action)();}
private:
    Cook* m_object;
    Action m_action;
};
template <typename T>
class Queue {
public:
   Queue() { m_add = m_remove = 0; }
   void enque( T* c ) {
      m_array[m_add] = c;
      m_add = (m_add + 1) % SIZE;
   }
   T* deque() {
      int temp = m_remove;
      m_remove = (m_remove + 1) % SIZE;
      return m_array[temp];
   }
private:
   enum { SIZE = 8 };
   T*  m_array[SIZE];
   int m_add, m_remove;
};
}
#endif /* Command_hpp */
