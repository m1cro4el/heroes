#include <QCoreApplication>
#include "unit.h"
#include "pudge.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
unit *u1 = new unit();
pudge *u2 = new pudge();

for (int i=0; i<10; i++)
{
   u1->attack(*u2);
   u2->spell_1(*u1);

   if (u1->health<=0||u2->health <= 0) {
       cout << "FINISH" << endl;
       if (u1->health >0) cout << u1 -> name << "WIN" << endl;
       else cout << u2->name << "WIN" << endl;
       break;
   }
}
    return a.exec();
}
