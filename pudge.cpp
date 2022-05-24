#include "pudge.h"

pudge::pudge()
{
    this->health=150;
        this->armor=12;
        this->damage=15;
        strcpy(this->name, " pudge ");
}
void pudge::MeatHoock(unit &enemy){
    int uron = this->damage * 1.8;
    enemy.health -= uron;
    cout << this->name << " hukaet " << enemy.name
         <<" i nanosit " << this->damage << " urona "
         << endl;

}
void pudge::spell_1(unit &enemy) {
    this -> MeatHoock(enemy);
}
