#include "unit.h"

unit::unit()
{
this->health=100;
    this->armor=10;
    this->damage=20;
    strcpy(this->name, " unit1 ");
}
void unit::attack(unit &enemy){
    int uron =this->damage * (enemy.armor / 100.0);
    enemy.health-= uron;
    cout << this->name << " atauket " << enemy.name
         <<" i nanosit " << uron<< " urona "
         << endl;
    cout << this -> name <<":" << this -> health<< endl;
    cout << enemy.name <<":" << enemy.health<< endl;
}
