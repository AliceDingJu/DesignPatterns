//
//  AbstractFactory.hpp
//  DesignPatterns
//
//  Created by Alice on 2/3/22.
//

#ifndef AbstractFactory_hpp
#define AbstractFactory_hpp
#include <iostream>
#include <stdio.h>
#include <memory>
#include "Singleton.hpp"
#include <unordered_map>
namespace DesignPattern
{
    class Widget {
    public:
       virtual std::string draw() = 0;
    };

    class MotifButton : public Widget {
    public:
        std::string draw() { return "MotifButton"; }
    };
    class MotifMenu : public Widget {
    public:
        std::string draw() { return "MotifMenu"; }
    };

    class WindowsButton : public Widget {
    public:
        std::string draw() { return "WindowsButton"; }
    };
    class WindowsMenu : public Widget {
    public:
        std::string draw() { return "WindowsMenu"; }
    };

    class Factory : public Singleton<Factory>{
    public:
       virtual Widget* create_button() = 0;
       virtual Widget* create_menu() = 0;
    };

    class MotifFactory : public Factory{
    public:
        Widget* create_button()
        {
            return std::make_shared<MotifButton>().get();
        }
        Widget* create_menu()
        {
            return std::make_shared<MotifMenu>().get();
        }
    };

    class WindowsFactory : public Factory{
    public:
        Widget* create_button()
        {
            return std::make_shared<WindowsButton>().get();
        }
        Widget* create_menu()
        {
            return std::make_shared<WindowsMenu>().get();
        }
    };
    class FactoryMenu : public Singleton<FactoryMenu>
    {
    public:
        std::shared_ptr<Factory> getFactory(const std::string& factoryName);
        FactoryMenu();
    private:
        std::unordered_map<std::string, std::shared_ptr<Factory>> m_factoryMap;
    };
}
#endif /* AbstractFactory_hpp */
