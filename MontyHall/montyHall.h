#ifndef MONTYHALL_H
#define MONTYHALL_H

#include <string>
using namespace std;

class montyHall{
 private:
  string door1="G";
  string door2="G";
  string door3="G";
  string selected="";
  int wins=0;
  int loses=0;

 public:
  int cycles=0;
  float average=0;
  int randomize();
  void assignDoor(int num);
  void revealDoor();
  void selectDoor();
  void promtSwitch();
  void switchDoor();
  void showDoors();
  void check();
  void loop();
  montyHall();
};

#endif 
