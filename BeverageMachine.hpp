#pragma once
#include <iostream>
#include <string>
#include "Coffe.hpp"
#include "Tea.hpp"
#include "ChocoMilk.hpp"
#include "Robot.hpp"
#include "Drink.hpp"
using namespace std;

class BeverageMachine{
    private:
        Robot* robot = new Robot();
        Drink** drinks;
        int capacity;
        int size;
    public:
        BeverageMachine(int _capacity){
            capacity=_capacity;
            size=0;
            drinks = new Drink *[capacity];
        }
        void addDrink(Drink * drink)
        {
          if(size<capacity)
          {
            drinks[size]=drink;
            size++;
          }
        }
        void printOptions(){
            cout<<"Here are the options:"<<endl;
            for(int i=0;i<size;i++){
              cout<<drinks[i]->name()<<endl;
            }
            cout<<"Please type the name of your option"<<endl;
        }

        void prepare(string drinkName){
            int position=verifyDrink(drinkName);
            if(position!= -1){
              drinks[position]->prepareUsing(robot);
            }
        }
        
        int verifyDrink(string drinkName){
          for(int i=0;i<size;i++)
          {
            if(drinks[i]->name()== drinkName){
              return i;
            }
          }
          cout<<"we do not provide such beverage!"<<endl;
          return -1;
        }
};
