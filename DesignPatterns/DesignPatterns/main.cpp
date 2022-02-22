//
//  main.cpp
//  DesignPatterns
//
//  Created by Alice on 20/2/22.
//

#include <iostream>
#include <memory>
#include "Composite.hpp"
#include <cppunit/ui/text/TestRunner.h>
#include "DesignPatternTestSuite.hpp"

int main(int argc, const char * argv[]) {
    
    CppUnit::TextUi::TestRunner runner;
    runner.addTest( DesignPatternTestSuite::suite() );
    bool wasSucessful = runner.run();
    
    return wasSucessful;
}
