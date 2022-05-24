#include "human.h"

Human::Human()
{
strcpy(name,"Unnamed");
age =18;
}
Human::Human(char n[20], int a) {
  strcpy(name, n);
  age =a;
 }

void Human::print() {
  std::cout<< "Name: " << name << std::endl;
  std::cout<< "Age: " << age << std::endl;
 }
