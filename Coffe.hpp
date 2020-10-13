#pragma once
#include <iostream>
#include <string>
#include "Robot.hpp"
#include "Drink.hpp"
using namespace std;

class Coffe:public Drink{
    public:
        Coffe(){
        }
        virtual string name(){
            return "Coffe";
        }
        virtual void prepareUsing(Robot* robot){
            robot->prepareDrink("watter","coffe","Milk");
        }
};