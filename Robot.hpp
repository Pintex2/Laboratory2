#pragma once
#include <iostream>
#include <string>

using namespace std;
class Robot{
    public:
        Robot(){
        }
        void prepareDrink(string liquidName,string ingredientName,string toppingName){
          cout<<"-- sending commands to robot --"<<endl;
          cout<<"Boiling "<<liquidName<<endl;
          cout<<"Pouring Suggar "<<endl;
          cout<<"Pouring " << ingredientName<<endl;
          cout<<"Shaking baby! "<<endl;
          cout<<"Putting at the Top " <<toppingName<<endl;
          cout<<"-- the beverage is ready --"<<endl;
          
        }
};