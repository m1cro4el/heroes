#ifndef PUDGE_H
#define PUDGE_H
#include"unit.h"

class pudge: public unit
{
public:
    pudge();
    void MeatHoock (unit &enemy);
     void spell_1 (unit &enemy);
};

#endif // PUDGE_H
