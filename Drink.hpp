#pragma once 
#include <iostream>
#include <string>
using namespace std;

class Drink{
  public:
    virtual string name(){
      return "";
    }
    virtual void prepareUsing(Robot* robot){
      
    }
};