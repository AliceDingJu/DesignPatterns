//
//  Bridge.hpp
//  DesignPatterns
//
//  Created by Alice on 5/3/22.
//

/*
 Bridge Design Pattern
 Decouple an abstraction from its implementation so that the two can vary independently.
 Publish interface in an inheritance hierarchy, and bury implementation in its own inheritance hierarchy.
 Beyond encapsulation, to insulation
 */

#ifndef Bridge_hpp
#define Bridge_hpp

#include <stdio.h>
#include <memory>
#include <string>
namespace DesignPattern
{
class DateImp
{
public:
    virtual ~DateImp(){};
    virtual std::string display(int day, int month, int year) const = 0;
};
class ISO_DateImp : public DateImp
{
public:
    virtual std::string display(int day, int month, int year) const;
};
class American_DateImp : public DateImp
{
public:
    virtual std::string display(int day, int month, int year) const;
};
class European_DateImp : public DateImp
{
public:
    virtual std::string display(int day, int month, int year) const;
};
class Date
{
public:
    Date(int day, int month, int year);
    void setImp(const std::string& style);
    std::string display(){return m_dateImp->display(m_day, m_month, m_year);}
private:
    std::shared_ptr<DateImp> m_dateImp;
    int m_day, m_month, m_year;
};
}
#endif /* Bridge_hpp */
