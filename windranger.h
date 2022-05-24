#ifndef WINDRANGER_H
#define WINDRANGER_H
#include"unit.h"

class WindRanger: public unit
{
public:
    WindRanger();
    void powershot(unit &enemy);
};

#endif // WINDRANGER_H
