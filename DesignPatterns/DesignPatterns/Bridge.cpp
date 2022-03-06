//
//  Bridge.cpp
//  DesignPatterns
//
//  Created by Alice on 5/3/22.
//

#include "Bridge.hpp"
#include <sstream>
namespace DesignPattern
{
void Date::setImp(const std::string &style)
{
    if(style == "ISO")
        m_dateImp = std::make_shared<ISO_DateImp>();
    else if(style == "American")
        m_dateImp = std::make_shared<American_DateImp>();
    else if(style == "European")
        m_dateImp = std::make_shared<European_DateImp>();
    else
        m_dateImp = std::make_shared<ISO_DateImp>();
    return;
}
Date::Date(int day, int month, int year) : m_day(day), m_month(month), m_year(year)
{
    setImp("ISO");
}
std::string ISO_DateImp::display(int day, int month, int year) const
{
    std::ostringstream ss;
    ss << year << "-" << month << "-" << day;
    return ss.str();
}
std::string American_DateImp::display(int day, int month, int year) const
{
    std::ostringstream ss;
    ss << month << "/" << day << "/" << year;
    return ss.str();
}
std::string European_DateImp::display(int day, int month, int year) const
{
    std::ostringstream ss;
    ss << day << "/" << month << "/" << year;
    return ss.str();
}
}
