//
//  CommandTest.cpp
//  DesignPatterns
//
//  Created by Alice on 8/3/22.
//

#include "CommandTest.hpp"
#include <cppunit/TestCaller.h>
#include <cppunit/TestSuite.h>
#include "Command.hpp"
using namespace DesignPattern;

void CommandTest::testCommand()
{
    std::cout << "\n\nCommandTest - testCommand" << std::endl;
    Queue<Command> que;
    Command* input[] = { new Command( new Cook, &Cook::burger ),
                         new Command( new Cook, &Cook::coke ),
                         new Command( new Cook, &Cook::fries ),
                         new Command( new Cook, &Cook::burger ),
                         new Command( new Cook, &Cook::coke ) };

    for (int i=0; i < 5; i++)
       que.enque( input[i] );

    const std::string& str1 = que.deque()->execute();
    std::cout << str1 << std::endl;
    CPPUNIT_ASSERT(str1 == "0-Burger");
    const std::string& str2 = que.deque()->execute();
    std::cout << str2 << std::endl;
    CPPUNIT_ASSERT(str2 == "1-Coke");
    const std::string& str3 = que.deque()->execute();
    std::cout << str3 << std::endl;
    CPPUNIT_ASSERT(str3 == "2-Fries");
    const std::string& str4 = que.deque()->execute();
    std::cout << str4 << std::endl;
    CPPUNIT_ASSERT(str4 == "3-Burger");
    const std::string& str5 = que.deque()->execute();
    std::cout << str5 << std::endl;
    CPPUNIT_ASSERT(str5 == "4-Coke");
}

void CommandTest::setUp(){}
void CommandTest::tearDown(){}

CppUnit::Test* CommandTest::suite()
{
    CppUnit::TestSuite* pSuite = new CppUnit::TestSuite("CommandTest");
    pSuite->addTest(new CppUnit::TestCaller<CommandTest>("testCommand", &CommandTest::testCommand ));
    
    return pSuite;
}
