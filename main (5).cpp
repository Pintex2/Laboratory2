#include <iostream>
#include "BeverageMachine.hpp"
#include "Drink.hpp"
#include "ChocoMilk.hpp"
#include "Coffe.hpp"
#include "Tea.hpp"

using namespace std;


int main() {
    BeverageMachine * beverageMachine= new BeverageMachine(100);
    cout<<"Welcome to JEDI (Juampis Energy DrInks), "<<endl;
    beverageMachine->addDrink(new Coffe());
    beverageMachine->addDrink(new Tea());
    beverageMachine->addDrink(new ChocoMilk());
    
    beverageMachine->printOptions();
    string beverageName;
    cin>>beverageName;
    beverageMachine->prepare(beverageName);
   
}