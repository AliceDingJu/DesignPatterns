//
//  Strategy.hpp
//  DesignPatterns
//
//  Created by Alice on 1/3/22.
//

#ifndef Strategy_hpp
#define Strategy_hpp
/*
 implement sample of strategy pattern with function pointer
*/
#include <stdio.h>
namespace  DesignPattern
{
    class GameCharacter;//forward declaration

    double defaultHealthCalc(const GameCharacter& gc);//forward declaration

    class GameCharacter
    {
    public:
        typedef double(* HealthCalcFunc)(const GameCharacter&);//make the typedef for function pointer
        explicit GameCharacter(HealthCalcFunc healthFunc = defaultHealthCalc)
        : m_healthFunc(healthFunc), m_bloodPoints(100.0){}
        double healthValue() const{return m_healthFunc(*this);}
        double getBloodPoints() const {return m_bloodPoints;};
        void getOneNormalHit();
    private:
        HealthCalcFunc m_healthFunc;
        double m_bloodPoints;
    };
    double loseHealthQuickly(const GameCharacter& gc);
    double loseHealthSlowly(const GameCharacter& gc);
}
#endif /* Strategy_hpp */
