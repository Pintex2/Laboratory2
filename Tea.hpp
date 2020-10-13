#pragma once
#include <iostream>
#include <string>
#include "Robot.hpp"
#include "Drink.hpp"
using namespace std;


class Tea:public Drink{

    public:
        Tea(){

        }
        virtual string name(){
            return "Tea";
        }
        virtual void prepareUsing(Robot* robot){
            robot->prepareDrink("watter","tea bag","Lemon");
        }
};