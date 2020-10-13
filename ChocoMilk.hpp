#pragma once
#include <iostream>
#include <string>
#include "Robot.hpp"
#include "Drink.hpp"
using namespace std;

class ChocoMilk:public Drink{

    public:
        ChocoMilk(){

        }
        virtual string name(){
            return "ChocoMilk";
        }
        virtual void prepareUsing(Robot* robot){
            robot->prepareDrink("Milk","cocoa","choloLate bar");
          
        }
};