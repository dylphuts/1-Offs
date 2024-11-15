#ifndef MONTYHALL_H
#define MONTYHALL_H

#include <string>
using namespace std;

class montyHall{
 private:
  string door1="G";
  string door2="G";
  string door3="G";
  int cycles=0;
  int wins=0;
  int loses=0;

 public:
  int randomize();
  void assignDoor(int num);
  void revealDoor();

  montyHall();
};

#endif 
